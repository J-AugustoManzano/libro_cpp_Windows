// APBEX01.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string verbo, raiz;
  uint16_t tamano;

  cout << "Ingrese un verbo regular: ";
  getline(cin, verbo);
  cout << endl;

  tamano = verbo.length();

  raiz = verbo.substr(0, tamano - 2);

  if (tamano >= 2 and verbo.substr(tamano - 2) == "ar") {
    cout << "Yo " << raiz << "o"    << endl;
    cout << "Tu " << raiz << "as"   << endl;
    cout << "El/Ella/Ud " << raiz << "a"    << endl;
    cout << "Nosotros/as " << raiz << "amos" << endl;
    cout << "Vosotros/as " << raiz << "ais"  << endl;
    cout << "Ellos/as/Uds " << raiz << "an"   << endl;
  }
  else
    cout << "El verbo proporcionado no es valido." << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
