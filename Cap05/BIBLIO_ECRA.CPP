// BIBLIO_ECRA.CPP
// Archivo con el codigo de las funciones de la biblioteca ECRA.h

#include <iostream>
#include <windows.h>

// Limpiar pantalla
void clear(void)
{
  HANDLE pantalla;
  CONSOLE_SCREEN_BUFFER_INFO info;
  DWORD escritura = 0;
  pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(pantalla, &info);
  COORD pos = {0, 0};
  DWORD celdas = info.dwSize.X * info.dwSize.Y;
  FillConsoleOutputCharacter(pantalla, ' ', celdas, pos,
    &escritura);
  SetConsoleCursorPosition(pantalla, pos);
}

// Posicionar cursor
void position(int línea, int columna)
{
  HANDLE pantalla;
  CONSOLE_SCREEN_BUFFER_INFO info;
  COORD pos;
  pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
  if (GetConsoleScreenBufferInfo(pantalla, &info))
    {
      pos.X = columna - 1;
      pos.Y = línea - 1;
      if (pos.X >= 0 and pos.X < info.dwSize.X and
          pos.Y >= 0 and pos.Y < info.dwSize.Y)
        SetConsoleCursorPosition(pantalla, pos);
    }
}

// Colorear texto y fondo
void color(int colorFondo, int colorTexto)
{
  HANDLE pantalla;
  int16_t color;
  pantalla = GetStdHandle(STD_OUTPUT_HANDLE);
  if (colorFondo < 0 and colorFondo > 15 and colorTexto < 0 and
      colorTexto > 15)
    color = 15; 
  else
    color = colorTexto + colorFondo * 16;
  SetConsoleTextAttribute(pantalla, color);
}
