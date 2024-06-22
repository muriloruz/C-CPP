#ifndef UNICODE
#define UNICODE
#endif
#include <windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstence, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow){
    int op = MessageBoxA(NULL, "Texto Dentro", "Titulo", MB_CANCELTRYCONTINUE);
    printf("%d", op);
}
