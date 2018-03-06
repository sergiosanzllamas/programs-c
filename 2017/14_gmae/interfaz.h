#ifndef __INTERFAZ_h__
#define __INTERFAZ_h__ 


#include "global.h"


#ifdef __cpplusplus
extern "C" {

    void pintar(int matriz[M][N]);
    void poblacion_inicial(int matriz[M][N]);
    void rellena(int matriz[M][N]);

#ifdef __cpplusplus 
}

#endif

#endif
