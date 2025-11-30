// C05EX02.CPP
// Programa Calculadora

#include <iostream>
#include <iomanip>
using namespace std;

float resultado, valorA, valorB;

void pausa(void)
{
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

void entrada(void)
{
  cout << "\n";
  cout << "Ingrese un valor - variable [A]: "; cin >> valorA;
  cin.ignore(80, '\n');
  cout << "Ingrese un valor - variable [B]: "; cin >> valorB;
  cin.ignore(80, '\n');
}

float calcular(float valorA, float valorB, char operador)
{
  switch (operador)
  {
    case '+': return valorA + valorB;
    case '-': return valorA - valorB;
    case '*': return valorA * valorB;
    case '/': return valorA / valorB;
    default: return 0.0; // Valor de retorno por defecto
  }
}

void salida(void)
{
  cout << "\n";
  cout << "El resultado entre A y B = " << setw(8);
  cout << resultado << endl;
  pausa();
}

void rutinaSuma(void)
{
  cout << "\n";
  cout << "Rutina de Suma" << endl;
  cout << "--------------" << endl;
  entrada();
  resultado = calcular(valorA, valorB, '+');
  salida();
}

void rutinaResta(void)
{
  cout << "\n";
  cout << "Rutina de Resta" << endl;
  cout << "---------------" << endl;
  entrada();
  resultado = calcular(valorA, valorB, '-');
  salida();
}

void rutinaMultiplicacion(void)
{
  cout << "\n";
  cout << "Rutina de Multiplicacion" << endl;
  cout << "------------------------" << endl;
  entrada();
  resultado = calcular(valorA, valorB, '*');
  salida();
}

void rutinaDivision(void)
{
  cout << "\n";
  cout << "Rutina de Division" << endl;
  cout << "------------------" << endl;
  entrada();
  if (valorB == 0)
  {
    cout << "\n";
    cout << "Error de division" << endl;
    pausa();
  }
  else
  {
    resultado = calcular(valorA, valorB, '/');
    salida();
  }
}

int main(void)
{
  uint16_t opcion = 0;
  while (opcion != 5)
  {
    cout << setprecision(2) << right << fixed;
    cout << "\n";
    cout << "--------------------" << endl;
    cout << "Programa Calculadora" << endl;
    cout << "   Menu Principal   " << endl;
    cout << "--------------------" << endl;
    cout << "\n";
    cout << "[1] - Suma" << endl;
    cout << "[2] - Resta" << endl;
    cout << "[3] - Multiplicacion" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - Fin del Programa" << endl;
    cout << "\n";
    cout << "Elija una opcion: "; cin >> opcion;
    cin.ignore(80, '\n');
    if (opcion != 5)
    {
      switch (opcion)
      {
        case 1: rutinaSuma();           break;
        case 2: rutinaResta();          break;
        case 3: rutinaMultiplicacion(); break;
        case 4: rutinaDivision();       break;
      }
    }
  }
  return 0;
}
