// APBEX04.CPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool esPalindromo(const string &frase) 
{
  string fraseLimpia;
  int inicio, fin;
  
  for (char c : frase)
    if (isalnum(c))
      fraseLimpia += tolower(c);
  
  inicio = 0;
  fin = fraseLimpia.length() - 1;

  while (inicio < fin) {
    if (fraseLimpia[inicio] != fraseLimpia[fin])
      return false;
    inicio++;
    fin--;
  }
  
  return true;
}

int main(void) 
{
  string frase;
  
  cout << "Ingrese una frase: ";
  getline(cin, frase);
  
  if (esPalindromo(frase))
    cout << "La frase es un palindromo." << endl;
  else
    cout << "La frase no es un palindromo." << endl;
  
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
