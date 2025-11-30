// APAEX01.CPP

#include <iostream>
#include <string>   // Función: substr()
#include "fecha.h"  // Función: alteraFecha(), muestraFecha()

using namespace std;

int main(void)
{
  Fecha fecha;
  string strFecha;
  uint16_t dia, mes, ano;

  cout << "Ingrese una fecha en el formato DD/MM/AAAA: ";
  getline(cin, strFecha);

  dia = stoi(strFecha.substr(0, 2));
  mes = stoi(strFecha.substr(3, 2));
  ano = stoi(strFecha.substr(6, 4));

  fecha.alteraFecha(dia, mes, ano);
  fecha.muestraFecha();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
