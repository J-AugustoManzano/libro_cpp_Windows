// C03EX06.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t codigo;

  cout << "Ingrese el código de acceso: "; cin >> codigo;
  cin.ignore(80, '\n');

  cout << endl;

  if (codigo == 1 or codigo == 2 or codigo == 3)
    {
      if (codigo == 1)
        cout << "Se ha activado el codigo: uno.\n";
      if (codigo == 2)
        cout << "Se ha activado el codigo: dos.\n";
      if (codigo == 3)
        cout << "Se ha activado el codigo: tres.\n";
    }
  else
    cout << "Codigo invalido.\n";

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
