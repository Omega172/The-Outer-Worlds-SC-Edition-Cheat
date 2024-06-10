#pragma once
#include "pch.h"

class ExampleFeature : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	std::unique_ptr<Child> GuiSection = std::make_unique<Child>("EXAMPLE_FEATURE", "EXAMPLE_FEATURE"Hashed, ElementBase::Style_t{
		.iFlags = ImGuiChildFlags_Border | ImGuiChildFlags_AutoResizeX | ImGuiChildFlags_AutoResizeY }, ImGuiWindowFlags_HorizontalScrollbar);
	std::unique_ptr<Checkbox> GuiCheckbox = std::make_unique<Checkbox>("EXAMPLE_FEATURE_CHECKBOX", "EXAMPLE_FEATURE_CHECKBOX"Hashed);

public:
	ExampleFeature();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void Render();

	void Run();

	void HandleMenu();
};