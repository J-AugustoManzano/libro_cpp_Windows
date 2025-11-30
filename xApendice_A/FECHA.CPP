// FECHA.CPP
// Código para control de fechas

#include <iostream>
#include "fecha.h"

Fecha::Fecha() : dia(0), mes(0), ano(0), fechaValida(false) {}

bool Fecha::esBisiesto() const {
  return
  (
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

char Fecha::ultimoDiaDelMes(void) const {
  if (mes == static_cast<uint16_t>(Mes::FEBRERO))
    return (esBisiesto()) ? 29 : 28;
  else if (mes <= static_cast<uint16_t>(Mes::JULIO))
    return (mes % 2 != 0) ? 31 : 30;
  else
    return (mes % 2 != 0) ? 30 : 31;
}

void Fecha::validaFecha(void) {
  fechaValida = (ano >=    1) and
                (ano <= 9999) and
                (mes >=    1) and
                (mes <=   12) and
                (dia >=    1) and
                (dia <= ultimoDiaDelMes()) and
           not ((ano == 1582) and
                (mes ==   10) and
                (dia >=    5) and
                (dia <=   14));
}

void Fecha::alteraFecha(uint16_t dia, uint16_t mes, uint16_t ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
  validaFecha();
}

void Fecha::muestraFecha(void) const {
  if (fechaValida == true)
    {
      std::cout.fill('0');
      std::cout.width(2); std::cout << dia << '/';
      std::cout.width(2); std::cout << mes << '/';
      std::cout.width(4); std::cout << ano << std::endl;
    }
  else
    std::cout << "**/**/****" << std::endl;
}
