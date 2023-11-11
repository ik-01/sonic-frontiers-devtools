#pragma once
#include "../common/ReflectionEditor.h"
#include "../serialization/ReflectionSerializer.h"
#include "../imgui/ImGuiFileDialog.h"
#include "../StandaloneWindow.h"

namespace heur::resources {
	class ResEffect;
}

class ResEffectEditor : public StandaloneWindow {
	hh::fnd::Reference<heur::resources::ResEffect> resource;
public:
	ResEffectEditor(csl::fnd::IAllocator* allocator, heur::resources::ResEffect* resource);
	virtual void RenderContents();
};
