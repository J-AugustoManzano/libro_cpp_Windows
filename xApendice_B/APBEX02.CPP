// APBEX02.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string palabra;
  
  cout << "Ingrese una palabra: ";
  cin >> palabra;
  cin.ignore(80, '\n');

  for (size_t i = 0; i <= palabra.length(); ++i)
    cout << palabra.substr(0, i) << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
