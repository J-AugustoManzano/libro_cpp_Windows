// APBEX05.CPP

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool esPalindromo(const string &frase) 
{
  string fraseLimpia, fraseReversa;

  for (char c : frase)
    if (isalnum(c))
      fraseLimpia += tolower(c);

  fraseReversa = fraseLimpia;
  reverse(fraseReversa.begin(), fraseReversa.end());

  return fraseLimpia == fraseReversa;
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
