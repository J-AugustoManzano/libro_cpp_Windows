// C01EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
#if __cplusplus == 199711L
	cout << "Soporta C++98" << endl;
#elif __cplusplus == 201103L
	cout << "Soporta C++11" << endl;
#elif __cplusplus == 201402L
	cout << "Soporta C++14" << endl;
#elif __cplusplus == 201703L
	cout << "Soporta C++17" << endl;
#elif __cplusplus == 202002L
	cout << "Soporta C++20" << endl;
#elif __cplusplus == 202302L
	cout << "Soporta C++23" << endl;
#elif __cplusplus > 202302L
	cout << "Soporta una version futura de C++" << endl;
#endif
	
	cout << "Presione <Enter> para cerrar... ";
	cin.get();
	
	return 0;
}

