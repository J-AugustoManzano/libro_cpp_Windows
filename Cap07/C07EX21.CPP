// C07EX21.CPP

#include <iostream>

using namespace std;

int main(void)
{
  enum class Meses {
    ENERO = 1,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
  };

  Meses mes;
  uint16_t numMes;

  cout << "Prueba de acceso, lista enumerada" << endl;
  cout << endl;

  cout << "Ingrese el numero del mes (1-12): ";
  cin >> numMes;
  cin.ignore();

  mes = static_cast<Meses>(numMes);

  cout << "Mes definido = " << static_cast<int>(mes);
  cout << " en extenso equivale a ";

  switch (mes) {
    case Meses::ENERO:      cout << "enero";        break;
    case Meses::FEBRERO:    cout << "febrero";      break;
    case Meses::MARZO:      cout << "marzo";        break;
    case Meses::ABRIL:      cout << "abril";        break;
    case Meses::MAYO:       cout << "mayo";         break;
    case Meses::JUNIO:      cout << "junio";        break;
    case Meses::JULIO:      cout << "julio";        break;
    case Meses::AGOSTO:     cout << "agosto";       break;
    case Meses::SEPTIEMBRE: cout << "septiembre";   break;
    case Meses::OCTUBRE:    cout << "octubre";      break;
    case Meses::NOVIEMBRE:  cout << "noviembre";    break;
    case Meses::DICIEMBRE:  cout << "diciembre";    break;
    default:                cout << "Mes invalido"; break;
  }

  cout << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();

  return 0;
}
