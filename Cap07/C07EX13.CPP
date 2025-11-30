// C07EX13.CPP

#include <iostream>
#include <cctype> // Para toupper() y tolower()

using namespace std;

void uplowcase(char *pmatriz, int tipo) {
  if (tipo == 1) {
    // Convierte a mayusculas
    while (*pmatriz)
      cout.put(toupper(*pmatriz++));
  } else {
    // Convierte a minusculas
    while (*pmatriz)
      cout.put(tolower(*pmatriz++));
  }
}

int main(void) 
{
  char mensaje[50]; // Simulacion de una cadena

  cout << "Ingrese un mensaje: ";
  cin.getline(mensaje, sizeof(mensaje));

  cout << endl;

  uplowcase(mensaje, 1); // Muestra en mayusculas
  cout << endl;

  uplowcase(mensaje, 2); // Muestra en minusculas
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
