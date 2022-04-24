#include "header.h"

int main()
{
    int resultado;
    char cadena[10] = "123568";
    int cant = 10;
    resultado = miAtoi(cadena, cant);
    printf("%d", resultado);
    return 0;
}
