// C02EX05.CPP
 
#include <iostream>
 
using namespace std;
 
int main(void)
{
  int32_t a, b, r;
 
  cout << "Informe el valor para la variable <A>: "; 
  cin >> a;
  cin.ignore(80, '\n');
 
  cout << "Informe el valor para la variable <B>: "; 
  cin >> b;
  cin.ignore(80, '\n');
 
  r = a + b;
 
  cout << "Resultado = " << r << endl;
  cout << endl;
 
  cout << "Presiona <Enter> para finalizar... ";
  cin.get();
  return 0;
}
