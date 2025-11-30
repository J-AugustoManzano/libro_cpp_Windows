// APBEX03.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string palabra;
  int tamano;
    
  cout << "Ingrese una palabra: ";
  cin >> palabra;
  cin.ignore(80, '\n');
    
  tamano = palabra.length();
    
  for (int i = 0; i < tamano; ++i) {
    for (int j = 0; j < tamano - i - 1; ++j)
      cout << " ";
    cout << palabra.substr(tamano - i - 1) << endl;
  }
    
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
