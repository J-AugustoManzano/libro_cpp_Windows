// C05EX09.CPP
// Definicion de colores

#include <iostream>
#include <windows.h>

using namespace std;

#define black     0 // Negro
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Cian
#define red       4 // Rojo
#define magenta   5 // Magenta
#define brown     6 // Marron
#define lgray     7 // Gris claro
#define dgray     8 // Gris oscuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Cian claro
#define lred     12 // Rojo claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarillo
#define white    15 // Blanco

void clear(void)
{
  HANDLE pantalla;
  CONSOLE_SCREEN_BUFFER_INFO info;
  DWORD escrito = 0;
  pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(pantalla, &info);
  COORD pos = {0, 0};
  DWORD celdas = info.dwSize.X * info.dwSize.Y;
  FillConsoleOutputCharacter(pantalla, ' ', celdas, pos, &escrito);
  SetConsoleCursorPosition(pantalla, pos);
}

void color(int colorFondo, int colorTexto)
{
  HANDLE pantalla;
  int16_t color;
  pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
  if (colorFondo <  0 && 
      colorFondo > 15 && 
      colorTexto <  0 && 
      colorTexto > 15)
    color = 15;
  else
    color = colorTexto + colorFondo * 16;
  SetConsoleTextAttribute(pantalla, color);
}

int main(void)
{
  clear();
  cout << "Patron de colores con codigo numerico";
  cout << endl << endl;

  color(1, 14);
  cout << "Fondo: Azul // Texto: Amarillo" << endl;
  cout << endl;

  color(1, 7);
  cout << "Fondo: Azul // Texto: Gris claro" << endl;
  cout << endl;

  color(4, 14);
  cout << "Fondo: Rojo // Texto: Amarillo" << endl;
  cout << endl;

  color(0, 2);
  cout << "Fondo: Negro // Texto: Verde" << endl;
  cout << endl;

  color(7, 12);
  cout << "Fondo: Gris claro // Texto: Rojo claro";
  cout << endl << endl;

  color(brown, white);
  cout << "Fondo: Marron // Texto: Blanco" << endl;
  cout << endl;

  color(0, 7);

  cout << "Presione <Enter> para finalizar... ";
  cin.get();

  return 0;
}
