// C03EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b;

  cout << "Ingrese el valor <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el valor <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  
  if (int32_t r = a + b; r > 10)
    cout << "Resultado = " << r << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
