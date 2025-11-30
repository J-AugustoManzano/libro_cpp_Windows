// FECHA.H
// Encabezado para control de fechas

#pragma once

class Fecha {
  private:
    uint16_t dia, mes, ano;
    bool fechaValida;

  public:
    enum class Mes { FEBRERO = 2, JULIO = 7 };

    bool esBisiesto() const;
    char ultimoDiaDelMes() const;
    void validaFecha();
    void alteraFecha(uint16_t d, uint16_t m, uint16_t a);
    void muestraFecha() const;
    Fecha();
};
