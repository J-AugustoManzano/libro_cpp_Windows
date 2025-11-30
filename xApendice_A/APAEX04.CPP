// APAEX04.CPP

#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

const string meses[] = {
  "enero",
  "febrero",
  "marzo",
  "abril",
  "mayo",
  "junio",
  "julio",
  "agosto",
  "septiembre",
  "octubre",
  "noviembre",
  "diciembre"
};

int main(int argc, char *argv[])
{
  uint16_t dia, mes, ano;
  string fecha;

  if (argc != 2)
  {
    cout << "Uso: fechaext.exe \"dd/mm/aaaa\"" << endl;
    cout << "error en la entrada de la fecha." << endl;
    cout << endl;
    return 1;
  }

  fecha = argv[1];

  if (not fechaValidaFormato(fecha))
  {
    cout << "Formato incorrecto. Use dd/mm/aaaa." << endl;
    cout << endl;
    return 1;
  }

  if (not validaFecha(fecha))
  {
    cout << "Fecha invalida." << endl;
    cout << endl;
    return 1;
  }

  dia = obtenerDia(fecha);
  mes = obtenerMes(fecha);
  ano = obtenerAno(fecha);

  cout << dia << " de " << meses[mes - 1];
  cout << " de " << ano << endl;

  return 0;
}
