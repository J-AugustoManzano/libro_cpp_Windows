// C04EX04.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  uint16_t n, i;
  uint16_t fat;
  char resp {'S'};

  do
    {
      cout << "Programa Factorial" << endl << endl;
      cout << "Factorial de que valor: "; cin >> n;
      cin.ignore(80, '\n');

      i = 1;
      fat = 1;
      do
        {
          fat *= i;
          ++i;
        }
      while (i <= n);

      cout << endl;
      cout << "Factorial de " << n << " = "<< fat << endl;
      cout << endl;

      cout << "¿Desea continuar?" << endl;
      cout << "Teclee [S] para SI | otra letra para NO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }
  while (toupper(resp) == 'S');

  cout << "Teclee <Enter> para finalizar... ";
  cin.get();
  return 0;
}
