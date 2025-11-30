// C06EX16.CPP

#include <iostream>

using namespace std;

int32_t suma(int32_t a, int32_t b)
{
  return a + b;
}

int32_t resta(int32_t a, int32_t b)
{
  return a - b;
}

int32_t (*operacion(char operador))(int32_t, int32_t)
{
  if (operador == '+')
    return suma;
  if (operador == '-')
    return resta;
  return nullptr;
}

int main(void)
{

  char operador;
  int32_t a, b;

  cout << "Ingrese el operador (+ o -): ";
  cin >> operador;
  cin.ignore(80, '\n');

  int32_t (*funcion)(int32_t, int32_t) = operacion(operador);

  if (operador == '+' || operador == '-')
    {

      cout << "Ingrese el 1er numero: ";
      cin >> a;
      cin.ignore(80, '\n');

      cout << "Ingrese el 2do numero: ";
      cin >> b;
      cin.ignore(80, '\n');

      cout << "Resultado: " << funcion(a, b) << endl;

    }
  else
    {
       cout << endl;
       cerr << "Operador invalido." << endl;
    }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}   
