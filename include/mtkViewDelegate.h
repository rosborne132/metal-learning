#ifndef MTK_VIEW_DELEGATE_H
#define MTK_VIEW_DELEGATE_H

// External
#include <MetalKit/MetalKit.hpp>

// Internal
#include "renderer.h"

class MTKViewDelegate : public MTK::ViewDelegate {
    public:
        MTKViewDelegate( MTL::Device* pDevice );
        virtual ~MTKViewDelegate() override;
        virtual void drawInMTKView( MTK::View* pView ) override;

    private:
        Renderer* _pRenderer;
};

#endif