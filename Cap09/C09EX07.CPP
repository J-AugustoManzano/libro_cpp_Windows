// C09EX07.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream archivo("EJEMPLO4.BIN", ios::binary | ios::in);

  if (archivo.fail()) {
    cerr << "No se puede abrir el archivo" << endl;
    cerr << "***  archivo inexistente  ***" << endl;
  } else {
    cout << "*** El archivo se abrio correctamente ***" << endl;
    archivo.close();
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
