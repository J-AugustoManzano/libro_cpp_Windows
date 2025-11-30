// C06EX15.CPP

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

int32_t operacion(int32_t (*funcion)(int32_t, int32_t),
  int32_t a, int32_t b) {
  return funcion(a, b);
}

int main(void)
{

  int32_t resultado1 = operacion(suma, 5, 2);
  int32_t resultado2 = operacion(resta, 5, 2);

  cout << "Resultado de la suma ...: " << resultado1 << endl;
  cout << "Resultado de la resta ..: " << resultado2 << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
