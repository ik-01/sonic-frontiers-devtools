#pragma once
#include "../StandaloneWindow.h"

class GraphicsContextInspector : public StandaloneWindow
{
public:
    GraphicsContextInspector(csl::fnd::IAllocator* allocator);

    //virtual void PreRender() override;
    virtual void RenderContents() override;
};

