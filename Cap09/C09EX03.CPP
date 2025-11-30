// C09EX03.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  char caracter;
  ifstream arctxt("EJEMPLO1.TXT", ios::in);

  if (not arctxt) {
    cerr << "Error al abrir el archivo." << endl;
    return 1;
  }

  while ((caracter = arctxt.get()) != EOF)
    cout.put(caracter);

  arctxt.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
