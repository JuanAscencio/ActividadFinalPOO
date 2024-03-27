#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "variablesGlobales.h"
#include<string>
#include<cctype>
#include<cstdlib>
#include<iostream>

using namespace std;
bool EsNumero(string x);
int ConvertirStringNumero(string x);


bool EsNumero(string x) {
    int xSize=x.size();

    while(s.size() > 1 && x[0] == ' ')
        x.erase(x.begin());

    int ini = x[0] == '-';

    for(int i=ini;i<xSize;i++)
        if('0' <= x[i] && x[i] <= '9')
            continue;
        else
            return false;

    return true;

}

int ConvertirStringNumero(string x) {
    int xSize=x.size();

    while(s.size() > 1 && x[0] == ' ')
        x.erase(x.begin());

    int ini = x[0] == '-', res = 0;

    for(int i=ini;i<xSize;i++) {
        res *= 10;
        res += x[i] - '0';
    }

    //opcionMenuPrincipal=ini;

    return ini?-res:res;

}

#endif // FUNCIONES_H_INCLUDED
