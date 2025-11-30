// APAEX07.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

uint16_t indiceSemana(uint16_t dia, uint16_t mes, 
                      uint16_t ano)
{
  uint16_t indice, k, j;

  if (mes < 3)
  {
    mes += 12;
    ano--;
  }
  k = ano % 100;
  j = ano / 100;
  indice = ((dia + 13 * (mes + 1) / 5 + k + k / 4 +
             j / 4 - 2 * j) % 7) + 1;
  return (indice + 5) % 7;
}

void muestraCalendario(uint16_t ano)
{
  string nombreMes;
  uint16_t diasEnMes, diaSemana;

  if (ano >= 1583 and ano <= 9999)
    {
      cout << "Calendario de " << ano << ":" << endl;
      cout << endl;

      for (uint16_t mes = 1; mes <= 12; ++mes)
        {
          cout << "---------------------------" << endl;
          switch (mes)
            {
              case  1: nombreMes = "Enero";        break;
              case  2: nombreMes = "Febrero";      break;
              case  3: nombreMes = "Marzo";        break;
              case  4: nombreMes = "Abril";        break;
              case  5: nombreMes = "Mayo";         break;
              case  6: nombreMes = "Junio";        break;
              case  7: nombreMes = "Julio";        break;
              case  8: nombreMes = "Agosto";       break;
              case  9: nombreMes = "Septiembre";   break;
              case 10: nombreMes = "Octubre";      break;
              case 11: nombreMes = "Noviembre";    break;
              case 12: nombreMes = "Diciembre";    break;
              default: nombreMes = "Mes invalido"; break;
            }
          cout << nombreMes << endl;
          cout << "---------------------------" << endl;
          cout << "Dom Lun Mar Mie Jue Vie Sab" << endl;

          diasEnMes = ultimoDiaDelMes("01/" + to_string(mes) +
                        "/" + to_string(ano));
          diaSemana = indiceSemana(1, mes, ano);

          // Rellenar los espacios vacios en el inicio del mes
          for (uint16_t i = 0; i < diaSemana; ++i)
            cout << "    ";

          for (uint16_t dia = 1; dia <= diasEnMes; ++dia)
            {
              cout << setw(3) << dia << " ";

              ++diaSemana;
              if (diaSemana > 6)
                {
                  diaSemana = 0;
                  cout << endl;
                }
            }

           cout << endl << endl;
        }
    }
  else
    cout << "ano invalido!" << endl;

}

int main(void)
{
  uint16_t ano;

  cout << "Introduzca ano entre 1583 y 9999: ";
  cin >> ano;
  cin.ignore(80, '\n');
  cout << endl;

  muestraCalendario(ano);

  cout << endl;
  cout << "Presione <Enter> para terminar... ";
  cin.get();
  return 0;
}
