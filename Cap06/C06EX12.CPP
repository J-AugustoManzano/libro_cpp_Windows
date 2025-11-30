// C06EX12.CPP

#include <iostream>

using namespace std;

int main (void)
{
	
  int32_t a = 1;
  int32_t b = 1;

  int32_t *pa = nullptr;
  int32_t *pb = nullptr;

  pa = &a;
  pb = &b;

  cout << "Valor A = " << *pa << " en la direccion " << &pa;
  cout << "." << endl;
  cout << "Valor B = " << *pb << " en la direccion " << &pb;
  cout << "." << endl;
  cout << endl;

  if (pa > pb)
    cout << "PA esta adelante de *PB.";
  else
    cout << "PA no esta adelante de *PB.";
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
