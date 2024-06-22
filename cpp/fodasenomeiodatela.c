#include <stdio.h>
#include <windows.h> // Para SetConsoleCursorPosition

int main() {
    // Obtém o identificador da saída padrão (console)
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Obtém as dimensões do console
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // Calcula as coordenadas para o meio da tela
    int centerX = consoleWidth / 2;
    int centerY = consoleHeight / 2;

    // Define a posição do cursor
    COORD cursorPos;
    cursorPos.X = centerX;
    cursorPos.Y = centerY;
    SetConsoleCursorPosition(hConsole, cursorPos);

    // Agora, você pode usar o scanf
    printf("Digite algo no meio da tela: ");
    char input[100];
    scanf("%s", input);

    return 0;
}
