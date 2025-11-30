// APAEX03.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "calendar.h"

using namespace std;

int main(void)
{

  // bool atraso {false};
  uint16_t diasRetraso {0};
  double valorTitulo, valorFinal {0.0};
  double valorDescuento {0.0};
  double valorIntereses {0.0};
  double valorRecargos {0.0};
  uint64_t djVencimiento, djActual;
  string fechaActualSis, fechaVencimiento;
  string diaSis, mesSis, anoSis;
  string flexNum;
  time_t ahora = time(0);
  tm *fechaHora = localtime(&ahora);
  ostringstream fechaStream;

  diaSis = to_string(fechaHora->tm_mday);
  mesSis = to_string(fechaHora->tm_mon + 1);
  anoSis = to_string(fechaHora->tm_year + 1900);

  fechaStream << setfill('0') << setw(2) << diaSis << "/";
  fechaStream << setfill('0') << setw(2) << mesSis << "/";
  fechaStream << setfill('0') << setw(4) << anoSis;

  fechaActualSis = fechaStream.str();

  cout << setprecision(2) << fixed << right;

  cout << "XPTO Comercial Ltda." << endl;
  cout << "Fecha: " << fechaActualSis << endl;
  cout << "--------------------" << endl;
  cout << endl;
  cout << "Sistema CAJA" << endl;
  cout << endl;

  do
    {
      cout << "Ingrese fecha de vencimiento - DD/MM/AAAA .: ";
      getline(cin, fechaVencimiento);
    }
  while (not fechaValidaFormato(fechaVencimiento) or
         not validaFecha(fechaVencimiento));

  cout << "Ingrese valor del titulo EUR ...........: ";
  cin >> valorTitulo;
  cin.ignore(80, '\n');

  djVencimiento = fechaAJuliano(fechaVencimiento);
  djActual = fechaAJuliano(fechaActualSis);
  diasRetraso = djActual - djVencimiento;

  if (djActual < djVencimiento)
    {
      valorDescuento = 0.035 * valorTitulo;
      valorFinal = valorTitulo - valorDescuento;
    }
  else if (djActual == djVencimiento)
    valorFinal = valorTitulo;
  else
    {
      valorIntereses = (0.10 * valorTitulo);
      valorRecargos = (0.005 * valorTitulo * diasRetraso);
      valorFinal = valorTitulo + valorIntereses + valorRecargos;
    }

  cout << endl;
  if (diasRetraso < 0)
    {
      cout << "Titulo pagado antes de la fecha de vencimiento";
      cout << endl;
    }
  else if (diasRetraso == 0)
    cout << "Titulo pagado en la fecha de vencimiento" << endl;
  else
    {
      flexNum = (diasRetraso == 1) ? " dia" : " dias";
      cout << "Titulo pagado con " << diasRetraso;
      cout << flexNum << " de retraso" << endl;
    }

  cout << endl;
  cout << "Valor titulo .... EUR " << setw(10);
  cout << valorTitulo << endl;
  cout << "Valor intereses . EUR " << setw(10);
  cout << valorIntereses << endl;
  cout << "Valor recargos .. EUR " << setw(10);
  cout << valorRecargos << endl;
  cout << "Valor descuento . EUR " << setw(10);
  cout << valorDescuento << endl;
  cout << "Valor total ..... EUR " << setw(10);
  cout << valorFinal << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
