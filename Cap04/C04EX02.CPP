// C04EX02.CPP

#include <iostream>
#include <cctype> // para usar: toupper()

using namespace std;

int main(void)
{
  uint16_t n, i, fat; 
  char resp {'S'};

  while (toupper(resp) == 'S')
    {
      cout << "Programa Factorial" << endl << endl;
      cout << "Factorial de que valor: "; cin >> n;
      cin.ignore(80, '\n');

      fat = 1; i = 1;
      while (i <= n)
        {
          fat *= i;
          ++i;
        }

      cout << endl;
      cout << "Factorial de " << n << " = "<< fat << endl;
      cout << endl;

      cout << "¿Desea continuar?" << endl;
      cout << "Presione [S] para SI | otra letra para NO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
