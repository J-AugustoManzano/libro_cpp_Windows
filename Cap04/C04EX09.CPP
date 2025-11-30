// C04EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{
  float n;

  while (true)
  {
    cout << "Ingrese un valor numerico: ";
    if (cin >> n)
      break;
    else
    {
      cout << "Error: ingrese solo valor numerico" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
  }

  cin.ignore(80, '\n');

  cout << "Resultado = " << n + 5 << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
