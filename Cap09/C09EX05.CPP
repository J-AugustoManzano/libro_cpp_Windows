// C09EX05.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  const char* contenido;
  size_t tamano;
  ifstream arcbin("EJEMPLO2.BIN", ios::binary | ios::in);

  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    return 1;
  }

  cout << "Presentacion de 5 valores numericos:" << endl;
  cout << endl;

  tamano = num.size() * sizeof(float);
  contenido = reinterpret_cast<const char*>(num.data());

  arcbin.read(const_cast<char*>(contenido), tamano);

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Valor ingresado " << i + 1 << ": ";
    cout << num[i] << endl;
  }

  arcbin.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
