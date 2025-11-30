// C03EX07.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int32_t prueba1, prueba2;

int main(void)
{

  cout << "Ingrese \"1\" si el atleta puntuo en la 1a. prueba.";
  cout << endl;

  cout << "Ingrese \"1\" si el atleta puntuo en la 2a. prueba.";
  cout << endl;

  cout << "Cualquier otro valor si no puntuo." << endl;
  cout << endl;

  cout << "Prueba 1: ";
  cin >> prueba1;
  cin.ignore(80, '\n');

  cout << "Prueba 2: ";
  cin >> prueba2;
  cin.ignore(80, '\n');

  if ((prueba1 == 1) xor (prueba2 == 1))
    cout << "El atleta realiza la tercera prueba." << endl;
  else {
    cout << "El atleta no realiza la tercera prueba." << endl;
    if ((prueba1 == 1) && (prueba2 == 1))
      cout << "Clasificado para la final." << endl;
    else
      cout << "Descalificado de la competicion." << endl;
  }

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
