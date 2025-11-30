// APAEX02.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

int main(void)
{

  uint16_t dia, mes, ano;
  string fecha;
  string diaSemanaPt, diaSemanaEs;
  string diaSemanaEn, diaSemanaAl;
  uint64_t dj;

  do
    {
      cout << "Ingrese fecha en formato DD/MM/AAAA: ";
      getline(cin, fecha);
    }
  while (not fechaValidaFormato(fecha) or
         not validaFecha(fecha));

  dia = obtieneDia(fecha);
  mes = obtieneMes(fecha);
  ano = obtieneano(fecha);

  diaSemanaPt = diaDeLaSemanaPorExtenso(fecha, "pt");
  diaSemanaEs = diaDeLaSemanaPorExtenso(fecha, "es");
  diaSemanaEn = diaDeLaSemanaPorExtenso(fecha, "en");
  diaSemanaAl = diaDeLaSemanaPorExtenso(fecha, "al");

  dj = fechaAJuliano(fecha);

  cout.fill('0');
  cout << endl;
  cout << "Fecha ingresada ..............: ";
  cout << fecha << endl;
  cout << "Dia ..........................: ";
  cout << setw(2) << dia << endl;
  cout << "Mes ..........................: ";
  cout << setw(2) << mes << endl;
  cout << "ano .........................: ";
  cout << setw(4) << ano << endl;
  cout << "Dia de la semana .............: ";
  cout << diaDeLaSemana(fecha) << endl;
  cout << "ano Bisiesto .................: ";
  cout << (esBisiesto(fecha) ? "Si" : "No") << endl;
  cout << "Ultimo dia del mes ............: ";
  cout << ultimoDiaDelMes(fecha) << endl;
  cout << "Fecha en Dia Juliano ..........: ";
  cout << fechaAJuliano(fecha) << endl;
  cout << "Calendario ....................: ";
  if (fechaANSI(fecha) <= 15821004)
    cout << "Juliano" << endl;
  if (fechaANSI(fecha) >= 15821015)
    cout << "Gregoriano" << endl;
  cout << "Dia Juliano a Fecha ...........: ";
  cout << julianoAFecha(dj) << endl;
  cout << "Dia de la semana en Portugues .: ";
  cout << diaSemanaPt << endl;
  cout << "Dia de la semana en Espanol ...: ";
  cout << diaSemanaEs << endl;
  cout << "Dia de la semana en Ingles .....: ";
  cout << diaSemanaEn << endl;
  cout << "Dia de la semana en Aleman .....: ";
  cout << diaSemanaAl << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
