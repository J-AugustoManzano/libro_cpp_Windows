// C06EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t  a = 1;
  int32_t  *pa = nullptr;

  pa = &a;

  cout << "Direccion actual .............: " << pa << endl;

  pa++;
  cout << "Siguiente direccion adelante .: " << pa << endl;

  pa++;
  cout << "Siguiente direccion adelante .: " << pa << endl;

  pa--;
  cout << "Direccion anterior atras .....: " << pa << endl;

  pa--;
  cout << "Direccion anterior atras .....: " << pa << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
