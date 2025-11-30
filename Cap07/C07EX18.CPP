// C07EX18.CPP

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

struct PersFisica {
  char nif_f[10]; 
  char tipo_nif; 
};

struct PersJuridica {
  char nif_j[10]; 
};

union Persona {
  PersFisica fis; 
  PersJuridica jur; 
};

struct RegCliente {
  string nombre;
  char tipo;
  Persona pers;
};

int main(void)
{
  RegCliente cte;

  cout << "Ingrese el nombre: ";
  getline(cin, cte.nombre);
  cout << endl;

  cout << "Ingrese el tipo de entidad" << endl;
  cout << endl;
  cout << "Pers Fisica (F/f)" << endl;
  cout << "Pers Juridica (J/j)" << endl;
  cout << endl;

  cout << "Que tipo de Pers: ";
  cin >> cte.tipo;
  cin.ignore();

  if (toupper(cte.tipo) == 'F')
  {
    cout << endl;
    cout << "Tipo de NIF para Persona Fisica" << endl;
    cout << endl;
    cout << "Ciudadano (DNI) (C/c)" << endl;
    cout << "Extranjero (NIE) (E/e)" << endl;
    cout << endl;

    cout << "Tipo de NIF: ";
    cin >> cte.pers.fis.tipo_nif;
    cin.ignore();

    cout << endl;
    if (toupper(cte.pers.fis.tipo_nif) == 'C') {
      cout << "Ingrese el DNI (Ciudadano): ";
    } else if (toupper(cte.pers.fis.tipo_nif) == 'E') {
      cout << "Ingrese el NIE (Extranjero): ";
    } else {
      cout << "Tipo de NIF no valido!" << endl;
      return 1;
    }

    cin.getline(cte.pers.fis.nif_f, 
      sizeof(cte.pers.fis.nif_f));

  }
  else if (toupper(cte.tipo) == 'J')
  {
    cout << endl;
    cout << "Ingrese el NIF de la empresa: ";
    cin.getline(cte.pers.jur.nif_j, 
      sizeof(cte.pers.jur.nif_j));
  }
  else
  {
    cout << "Tipo de entidad no valido!" << endl;
    return 1;
  }

  cout << "\nSalida de Datos" << endl;
  cout << endl;

  cout << "Nombre .................: " << cte.nombre << endl;
  if (toupper(cte.tipo) == 'F') {
    cout << "Entidad ................: Persona Fisica" << endl;
    cout << "NIF (";
    if (toupper(cte.pers.fis.tipo_nif) == 'C') {
      cout << "DNI - Ciudadano) ..: ";
    } else if (toupper(cte.pers.fis.tipo_nif) == 'E') {
      cout << "NIE - Extranjero) .: ";
    }
    cout << cte.pers.fis.nif_f << endl;
  } else if (toupper(cte.tipo) == 'J') {
    cout << "Entidad ................: Persona Juridica" << endl;
    cout << "NIF (Empresa) ..........: " << cte.pers.jur.nif_j << endl;
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
