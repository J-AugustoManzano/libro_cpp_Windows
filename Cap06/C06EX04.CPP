// C06EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  char    c, *pc;
  int32_t i, *pi;
  int16_t s, *ps;
  float   f, *pf;
  double  d, *pd;
  int64_t l, *pl;
  bool    b, *pb;

  cout << "Tamano 'char' ..........: " << sizeof(c);
  cout << " byte.\n";
  cout << "Tamano 'int' ...........: " << sizeof(i);
  cout << " bytes.\n";
  cout << "Tamano 'short' .........: " << sizeof(s);
  cout << " bytes.\n";
  cout << "Tamano 'float' .........: " << sizeof(f);
  cout << " bytes.\n";
  cout << "Tamano 'double' ........: " << sizeof(d);
  cout << " bytes.\n";
  cout << "Tamano 'long double' ...: " << sizeof(l);
  cout << " bytes.\n";
  cout << "Tamano 'bool' ..........: " << sizeof(b);
  cout << " byte.\n";
  cout << endl;

  cout << "Tamano 'p char' ........: " << sizeof(pc);
  cout << " bytes.\n";
  cout << "Tamano 'p int' .........: " << sizeof(pi);
  cout << " bytes.\n";
  cout << "Tamano 'p short' .......: " << sizeof(ps);
  cout << " bytes.\n";
  cout << "Tamano 'p float' .......: " << sizeof(pf);
  cout << " bytes.\n";
  cout << "Tamano 'p double' ......: " << sizeof(pd);
  cout << " bytes.\n";
  cout << "Tamano 'p long double' .: " << sizeof(pl);
  cout << " bytes.\n";
  cout << "Tamano 'p bool' ........: " << sizeof(pb);
  cout << " bytes.\n";

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
