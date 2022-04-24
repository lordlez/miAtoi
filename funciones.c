#include "header.h"

int validaCadena(const char cad){
    return cad >= '0' && cad <= '9';
}


int miAtoi(const char *cad, int cant){
    int i = cant-1, entero = 0, pos = 1;
    while(i>=0){
        while(validaCadena(cad[i])){
            entero = entero + (cad[i] - 48) * pos;
            pos = pos * 10;
            i--;
        }
        pos = 1;
        i--;
    }
    return entero;
}
