// C09EX06.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

int main(void)
{
  int32_t num;
  char resp{'S'};
  fstream arcbin("EJEMPLO3.BIN",
    ios::binary | ios::in | ios::out | ios::app);

  cout << "Ingreso de valores" << endl;
  cout << endl;

  if (not (arcbin.is_open() == true)) {
    cerr << "Error al abrir el archivo." << endl;
    cerr << "Programa abortado." << endl;
    pausa();
    return 1;
  }

  do {
    cout << "Ingrese un numero entero: ";
    cin >> num;
    cin.ignore(80, '\n');

    arcbin.write(reinterpret_cast<char*>(&num), sizeof(num));

    cout << "Desea continuar?" << endl;
    cout << "Presione [S] para SI | otra letra para NO: ";
    cin.get(resp);
    cin.ignore();
    cout << endl;
  } while (toupper(resp) == 'S');

  arcbin.clear();
  arcbin.seekg(0, ios::beg);

  cout << "Valores en el archivo: ";
  while (true) {
    arcbin.read(reinterpret_cast<char*>(&num), sizeof(num));
    if (arcbin.gcount() == 0)
      break;
    cout << num << " ";
  }
  cout << endl;

  arcbin.close();

  pausa();
  return 0;
}
