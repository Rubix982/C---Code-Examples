#include <iostream>

class Window {

public:
    Window();
    Window(int x1, int y1, int x2, int y2);
    bool SetCaption(const char * szTile);
    const char * GetCaption();
    char * szWinCaption;

    // Declare a pointer to the data member szWinCaption
    char *Window::*pwCaption = &Window::szWinCaption;

    const char *(Window::*pfnwGC)() = &Window::GetCaption;
    bool (Window::*pfnwSC)(const char *) = &Window::SetCaption;
};

int main(void) {

    Window  wMainWindow;
    Window  *pwChildWindow = new Window;
    char    *szUntitled = "Untitled - ";
    int     cUntitledLen = strlen( szUntitled );

    strcpy_s( wMainWindow.*pwCaption, cUntitledLen, szUntitled );
    
    // Thos is the same as 
    (wMainWindow.*pwCaption)[cUntitledLen - 1] = '1';

    // ? This
    // wMainWindow.SzWinCaption [CUntitledLen - 1] = '1'

    strcpy_s( pwChildWindow->*pwCaption, cUntitledLen, szUntitled );
    
    // This is the same as 
    (pwChildWindow->*pwCaption)[cUntitledLen - 1] = '2';

    // ? This
    // pwChildWindow->szWinCaption[cUntitledLen - 1] = '2';

    return 0;
}