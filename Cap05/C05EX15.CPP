// C05EX15.CPP

#include <iostream>

using namespace std;

extern int16_t a;
extern int16_t b;

extern void adicion(void);

int main(void)
{

  cout << "Entre el 1er numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre el 2do numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  adicion();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;

}
