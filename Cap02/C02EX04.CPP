// C02EX04.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string nombre;
	
	cout << "Hola.\nCual es tu nombre? ";
	getline(cin, nombre);
	
	cout << endl;
	cout << "Hola " << nombre << ", vamos a estudiar." << endl;
	cout << endl;
	
	cout << "Presione <Enter> para finalizar... ";
	cin.get();
	return 0;
}

