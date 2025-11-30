// APAEX08.CPP

#include <iostream>
#include <string>
#include <ctime>
#include "calendar.h"

using namespace std;

void edad(string dtNac, int16_t &a, int16_t &m, int16_t &d)
{
  time_t t = time(nullptr);
  tm* tmActual = localtime(&t);

  // Fecha nacimiento: dia, mes y ano
  int16_t diaNac = obtenerDia(dtNac);
  int16_t mesNac = obtenerMes(dtNac);
  int16_t anoNac = obtenerAno(dtNac);

  // Fecha actual: dia, mes y ano
  int16_t diaActual = tmActual->tm_mday;
  int16_t mesActual = tmActual->tm_mon + 1;
  int16_t anoActual = tmActual->tm_year + 1900;

  // Calcular edad
  a = anoActual - anoNac;
  m = mesActual - mesNac;
  if (m < 0) { // Si el mes aun no ocurrio este ano
    a--;
    m += 12;
  }
  d = diaActual - diaNac;
  if (d < 0) { // Si el dia aun no ocurrio este mes
    m--;
    d += ultimoDiaDelMes(dtNac);
  }

}

int main(void)
{
  string dtNac;
  int16_t anos, meses, dias;

  cout << "Introduzca fecha de nacimiento (DD/MM/AAAA): ";
  cin >> dtNac;
  cin.ignore(80, '\n');

  if (fechaValidaFormato(dtNac) and validaFecha(dtNac)) {
    edad(dtNac, anos, meses, dias);
    cout << "Edad: ";
    cout << anos  << " anos, ";
    cout << meses << " meses y ";
    cout << dias  << " dias." << endl;
  }
  else
    cout << "Fecha invalida" << endl;

  cout << endl;
  cout << "Presione <Enter> para terminar... ";
  cin.get();
  return 0;
}
