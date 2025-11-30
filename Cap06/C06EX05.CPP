// C06EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t a, *pa = &a;

  cout << "Introduzca un valor entero: ";
  cin >> *pa;
  cin.ignore(80, '\n');

  cout << "\nValor ingresado = " << a << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
