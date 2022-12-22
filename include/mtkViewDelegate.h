#ifndef MTK_VIEW_DELEGATE_H
#define MTK_VIEW_DELEGATE_H

// External
#include <MetalKit/MetalKit.hpp>

// Internal
#include "renderer.h"

class MyMTKViewDelegate : public MTK::ViewDelegate {
    public:
        MyMTKViewDelegate( MTL::Device* pDevice );
        virtual ~MyMTKViewDelegate() override;
        virtual void drawInMTKView( MTK::View* pView ) override;

    private:
        Renderer* _pRenderer;
};

#endif