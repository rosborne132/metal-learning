#ifndef RENDERER_H
#define RENDERER_H

// External
#include <MetalKit/MetalKit.hpp>

class Renderer {
    public:
        Renderer( MTL::Device* pDevice );
        ~Renderer();
        void draw( MTK::View* pView );

    private:
        MTL::Device* _pDevice;
        MTL::CommandQueue* _pCommandQueue;
};


#endif
