// C02EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{
  bool x = true;

  cout << boolalpha;

  cout << "Valor de X como verdadero ...: " << x << endl;

  x = false;
  cout << "Valor de X como falso .......: " << x << endl;

  cout << noboolalpha;

  x = true;
  cout << "Valor de X como verdadero ...: " << x << endl;

  x = false;
  cout << "Valor de X como falso .......: " << x << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}

