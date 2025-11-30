// C02EX13.CPP

/**
  El siguiente programa demuestra el uso de líneas de
  comentarios usados en un código de programa escrito en
  el lenguaje de programación C++. El programa presenta la
  cantidad de bits de cada tipo de dato soportado en C++.
 */

#include <iostream> // para uso de "cin", "cout" y "endl"
#include <iomanip>  // para uso de setw()

using namespace std;

/**
  Función principal.
  @return 0 si el programa se ejecuta correctamente.
 */

int main(void)
{
	// Declaración de variables para varios tipos de datos.
	int8_t        ipos08;
	uint8_t       ineg08;
	int16_t       ipos16;
	uint16_t      ineg16;
	int32_t       ipos32;
	uint32_t      ineg32;
	int64_t       ipos64;
	uint64_t      ineg64;
	char          cpos08;
	unsigned char cneg08;
	wchar_t       cwid16;
	float         fdec32;
	double        fdec64;
	long double   fdec99;
	bool          lboo08;
	
	// Configura la formateación de salida.
	cout << "Tipos de datos y sus tamaños en bits.\n";
	cout << endl;
	
	// Muestra los tamaños de los tipos de datos en bits.
	cout << "entero (+) ........: ";
	cout << setw(3) << sizeof(ipos08) * 8 << " bits\n";
	cout << "entero (-) ........: ";
	cout << setw(3) << sizeof(ineg08) * 8 << " bits\n";
	cout << "entero (+) ........: ";
	cout << setw(3) << sizeof(ipos16) * 8 << " bits\n";
	cout << "entero (-) ........: ";
	cout << setw(3) << sizeof(ineg16) * 8 << " bits\n";
	cout << "entero (+) ........: ";
	cout << setw(3) << sizeof(ipos32) * 8 << " bits\n";
	cout << "entero (-) ........: ";
	cout << setw(3) << sizeof(ineg32) * 8 << " bits\n";
	cout << "entero (+) ........: ";
	cout << setw(3) << sizeof(ipos64) * 8 << " bits\n";
	cout << "entero (-) ........: ";
	cout << setw(3) << sizeof(ineg64) * 8 << " bits\n";
	cout << "caracter (+) ......: ";
	cout << setw(3) << sizeof(cpos08) * 8 << " bits\n";
	cout << "caracter (-) ......: ";
	cout << setw(3) << sizeof(cneg08) * 8 << " bits\n";
	cout << "caracter amplio ...: ";
	cout << setw(3) << sizeof(cwid16) * 8 << " bits\n";
	cout << "flotante simple ...: ";
	cout << setw(3) << sizeof(fdec32) * 8 << " bits\n";
	cout << "flotante doble ....: ";
	cout << setw(3) << sizeof(fdec64) * 8 << " bits\n";
	cout << "flotante largo ....: ";
	cout << setw(3) << sizeof(fdec99) * 8 << " bits\n";
	cout << "lógico ...........: ";
	cout << setw(3) << sizeof(lboo08) * 8 << " bits\n";
	cout << endl;
	
	// Espera la entrada del usuario para finalizar.
	cout << "Presione <Enter> para finalizar... ";
	cin.get();
	return 0;
}

