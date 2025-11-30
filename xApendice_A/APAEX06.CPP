// APAEX06.CPP
// Algoritmo de Computus

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

string calcularPascua(uint16_t ano) {
  uint16_t siglo = ano / 100;
  uint16_t a = ano - 100 * siglo;
  uint16_t x = (5 * siglo + a) / 19;
  uint16_t aLunar = 5 * siglo + a - 19 * x;
  uint16_t bisiesto = (3 * (siglo + 25)) / 4;
  uint16_t posBisiesto = 3 * (siglo + 25) - 4 * bisiesto;
  uint16_t octa = (8 * (siglo + 11)) / 25;
  x = (19 * aLunar + bisiesto - octa) / 30;
  uint16_t dia = 19 * aLunar + bisiesto - octa - 30 * x;
  uint16_t mes = (aLunar + 11 * dia) / 319;
  uint16_t aPosMes = (60 * (5 - posBisiesto) + a) / 4;
  uint16_t dPosano = 60 * (5 - posBisiesto) + a - 4 * aPosMes;
  x = (2 * aPosMes - dPosano - dia + mes) / 7;
  uint16_t diaPasc = 2 * aPosMes - dPosano -
      dia + mes - 7 * x;
  uint16_t mesPasc = (dia - mes + diaPasc + 110) / 30;
  uint16_t diaPascFinal = dia - mes + diaPasc + 110 - 30 *
      mesPasc;
  uint16_t diaFinal = diaPascFinal + 5 - mesPasc;
  string diaFmt = (diaFinal < 10) ? "0" +
         to_string(diaFinal) : to_string(diaFinal);
  string mesFmt = (mesPasc < 10) ? "0" +
         to_string(mesPasc) : to_string(mesPasc);
  string anoFmt = to_string(ano);
  return diaFmt + "/" + mesFmt + "/" + anoFmt;
}

int main(void)
{
  uint16_t ano;
  string fechaPascua;
  uint64_t jd;

  do {
    cout << "Introduzca ano (1583-9999): ";
    cin >> ano;
    cin.ignore(80, '\n');

   if (ano < 1583 or ano > 9999)
     cout << "ano fuera del intervalo." << endl;

  } while (not (ano >= 1583 and ano <= 9999));

  fechaPascua = calcularPascua(ano);
  jd = fechaAJuliano(fechaPascua);

  cout << endl;
  cout << "Pascua en ..........: ";
  cout << fechaPascua << endl;
  cout << "Corpus Christi en ..: ";
  cout << julianoAFecha(jd + 60) << endl;

  cout << endl;
  cout << "Presione <Enter> para terminar... ";
  cin.get();
  return 0;
}
