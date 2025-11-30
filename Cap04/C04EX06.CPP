// C04EX06.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  uint16_t n, fat;
  char resp {'S'};
  
  while (toupper(resp) == 'S')
  {
    cout << "Programa Factorial" << endl << endl;
    
    cout << "Factorial de que valor: "; 
    cin >> n;
    cin.ignore(80, '\n');
    
    fat = 1;
    for (uint16_t i = 1; i <= n; ++i)
      fat *= i;
    
    cout << endl;
    cout << "Factorial de " << n << " = " << fat << endl;
    
    cout << endl << "¿Desea continuar?" << endl;
    cout << "Presione [S] para SI | otra letra para NO: ";
    cin.get(resp); 
    cin.ignore();
    cout << endl;
  }
  
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
