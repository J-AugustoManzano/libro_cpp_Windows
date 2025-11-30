// C07EX14.CPP

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

void uplowcase(const string &mensaje, int tipo) {
  for (char c : mensaje) {
    if (tipo == 1) {
      cout.put(toupper(c)); 
    } else {
      cout.put(tolower(c)); 
    }
  }
}

int main(void) 
{
  string mensaje;

  cout << "Ingrese un mensaje: ";
  getline(cin, mensaje);
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
