// C06EX14.CPP

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

int main(void)
{

  int32_t (*funcionPunt)(int32_t, int32_t);
  int32_t resultado;

  funcionPunt = suma; // o funcionPunt = &suma;
  resultado = funcionPunt(5, 2);
  cout << "Resultado de la suma ....: " << resultado << endl;

  funcionPunt = resta; // o funcionPunt = &resta;
  resultado = funcionPunt(5, 2);
  cout << "Resultado de la resta ...: " << resultado << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}  
