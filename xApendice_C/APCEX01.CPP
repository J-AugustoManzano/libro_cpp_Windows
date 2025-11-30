// APCEX01.CPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int segundosDia(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return h * 3600 + m * 60 + s;
}

void reloj(int segundos)
{
  int h = segundos / 3600;
  int m = (segundos % 3600) / 60;
  int s = segundos % 60;
  cout << setfill('0');
  cout << setw(2) << h << ":";
  cout << setw(2) << m << ":";
  cout << setw(2) << s;
  cout << setfill(' ');
}

bool formatoHora(const string &hora)
{
  if (hora.length() != 8)
    return false;
  if (hora[2] != ':' or hora[5] != ':')
    return false;
  for (int i = 0; i <= 7; ++i) {
    if (i == 2 or i == 5)
      continue;
    if (not isdigit(hora[i]))
      return false;
  }
  return true;
}

bool entradaValida(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return (h >= 8 and h <= 22) and
         ((h != 22) or (m == 0 and s == 0)) and
         (m >= 0 and m <= 59) and
         (s >= 0 and s <= 59);
}

bool salidaValida(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return (h >=  8 and h < 23) or
         (h == 23 and m == 0 and s == 0);
}

float calcularCobro(int segundos) {
  const int  SEGS_PRIMERA_HORA = 3600;
  const float VLR_PRIMERA_HORA = 5.00;
  const float VLR_HORA_ADIC    = 1.50;
  if (segundos <= SEGS_PRIMERA_HORA)
    return VLR_PRIMERA_HORA;
  else
    return VLR_PRIMERA_HORA + ceil((segundos - SEGS_PRIMERA_HORA)
           / 3600.0) * VLR_HORA_ADIC;
}

int main(void)
{
  string entrada, salida;
  int segEnt, segSal, difSegs;

  cout << fixed << setprecision(2);
  cout << "Estacionamiento XPTO-Park" << endl;
  cout << "-------------------------" << endl;
  cout << endl;

  do {
    cout << "Informe hora de entrada (HH:MM:SS) ..: ";
    cin >> entrada;
    cin.ignore(80, '\n');
  } while (not formatoHora(entrada) or 
           not entradaValida(entrada));

  do {
    do {
      cout << "Informe hora de salida (HH:MM:SS) .: ";
      cin >> salida;
      cin.ignore(80, '\n');
    } while (not formatoHora(salida) or 
             not salidaValida(salida));

    segEnt = segundosDia(entrada);
    segSal = segundosDia(salida);

    if (segSal <= segEnt) {
      cout << "Hora (salida) debe ser mayor ";
      cout << "que hora (entrada)" << endl;
    }
  } while (segSal <= segEnt);

  difSegs = segSal - segEnt;

  cout << "Permanencia ........................: ";
  reloj(difSegs);
  cout << endl;

  cout << "Valor cobrado ......................: $ ";
  cout << setw(5) << calcularCobro(difSegs) << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
