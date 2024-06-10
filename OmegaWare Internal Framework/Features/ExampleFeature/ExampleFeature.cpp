#include "pch.h"

ExampleFeature::ExampleFeature() {};

bool ExampleFeature::Setup()
{
	Localization::AddToLocale("ENG", std::initializer_list<std::pair<size_t, std::string>>{
		{ "EXAMPLE_FEATURE"Hashed, "Example Feature" },
		{ "EXAMPLE_FEATURE_CHECKBOX"Hashed, "Enable" },
	});

	LogDebugHere("Feature: ExampleFeature Initialized");

	Initialized = true;
	return Initialized;
}

void ExampleFeature::Destroy() { Initialized = false; }

void ExampleFeature::HandleKeys() {}

void ExampleFeature::Render() {}

void ExampleFeature::Run()
{
	if (!GuiCheckbox.get()->GetValue())
		return;

	Unreal* pUnreal = Framework::unreal.get();

	CG::UWorld* pGWorld = CG::UWorld::GetWorld();
	if (!IsValidObjectPtr(pGWorld))
		return;

	CG::UGameInstance* pGameInstance = pGWorld->OwningGameInstance;
	if (!IsValidObjectPtr(pGameInstance))
		return;

	CG::ULocalPlayer* pLocalPlayer = pGameInstance->LocalPlayers[0];
	if (!IsValidObjectPtr(pLocalPlayer))
		return;

	CG::APlayerController* pPlayerController = pLocalPlayer->PlayerController;
	if (!IsValidObjectPtr(pPlayerController))
		return;

	CG::APawn* pAckPawn = pPlayerController->AcknowledgedPawn;
	if (!IsValidObjectPtr(pAckPawn))
		return;

	LogDebugStreamHere("Acknowledged Pawn: " << pAckPawn);
}

void ExampleFeature::HandleMenu()
{
	static std::once_flag onceflag;
	std::call_once(onceflag, [this]() {
		GuiSection->SetCallback([]() {
			ImGuiContext* pContext = ImGui::GetCurrentContext();

			ImVec2 vec2Size = (Framework::menu->m_stStyle.vec2Size / ImVec2{ 3.f, 2.f }) - pContext->Style.ItemSpacing;
			ImVec2 vec2MaxSize = ImGui::GetContentRegionAvail();

			if (vec2Size.x > vec2MaxSize.x)
				vec2Size.x = vec2MaxSize.x;

			if (vec2Size.y > vec2MaxSize.y)
				vec2Size.y = vec2MaxSize.y;

			return vec2Size;
		});

		GuiSection->AddElement(GuiCheckbox.get());
	});

	if (!GuiSection->HasParent())
		Framework::menu->AddElement(GuiSection.get());
}