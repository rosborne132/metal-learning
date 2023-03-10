#ifndef APP_DELEGATE_H
#define APP_DELEGATE_H

// Internal
#include "mtkViewDelegate.h"

class AppDelegate : public NS::ApplicationDelegate {
    public:
        ~AppDelegate();

        NS::Menu* createMenuBar();

        virtual void applicationWillFinishLaunching( NS::Notification* pNotification ) override;
        virtual void applicationDidFinishLaunching( NS::Notification* pNotification ) override;
        virtual bool applicationShouldTerminateAfterLastWindowClosed( NS::Application* pSender ) override;

    private:
        NS::Window* _pWindow;
        MTK::View* _pMtkView;
        MTL::Device* _pDevice;
        MTKViewDelegate* _pViewDelegate = nullptr;
};

#endif