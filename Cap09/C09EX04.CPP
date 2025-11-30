// C09EX04.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  const char* contenido;
  size_t tamano;
  ofstream arcbin("EJEMPLO2.BIN", ios::binary | ios::trunc);

  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    return 1;
  }

  cout << "Ingrese 5 valores numericos:" << endl;
  cout << endl;

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Ingrese valor " << i + 1 << ": ";
    cin >> num[i];
    cin.ignore(80, '\n');
  }

  contenido = reinterpret_cast<const char*>(num.data());
  tamano = num.size() * sizeof(float);

  arcbin.write(contenido, tamano);

  arcbin.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
