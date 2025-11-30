// C06EX08.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t a = 1;
  int32_t *pa = &a;

  cout << "Direccion actual ..............: " << pa << endl;

  *(pa += 10);
  cout << "Siguiente direccion adelante ..: " << pa << endl;

  *(pa += 10);
  cout << "Siguiente direccion adelante ..: " << pa << endl;

  *(pa -= 10);
  cout << "Direccion anterior atras ......: " << pa << endl;

  *(pa -= 10);
  cout << "Direccion anterior atras ......: " << pa << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
