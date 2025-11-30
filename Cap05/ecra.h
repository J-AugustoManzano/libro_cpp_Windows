// ECRA.H
// Archivo de cabecera para control del video modo
// windows.h

// Constantes para los colores de texto y fondo

#define black     0 // Negro
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Cian
#define red       4 // Rojo
#define magenta   5 // Magenta
#define brown     6 // Marrón
#define lgray     7 // Gris claro
#define dgray     8 // Gris oscuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Cian claro
#define lred     12 // Rojo claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarillo
#define white    15 // Blanco

void clear(void);
void position(int linea, int columna);
void color(int colorFondo, int colorTexto);
