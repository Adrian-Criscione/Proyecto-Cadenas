////#############################################################################
// ARCHIVO : Cadenas.h
// AUTOR : Jose Adrian Criscione
// FECHA DE CREACION : 10/5/2016.
// ULTIMA ACTUALIZACION: 10/5/2016.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Esta libreria sera utilizada para el uso de cadenas
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#include <iostream>
#include <sstream>
using namespace std;

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : int strLen(char *cad)
// ACCION : Cuenta la cantidad de caracteres que integran una cadena
// PARAMETROS: cad: cadena de caracteres
// DEVUELVE : int: un entero que representa la cantidad de caracteres.
//---------------------- -------------------------------------------------------
int strLen(char *cad)
{
    int tam = 0;
    while (cad[tam]!= '\0')
    {
        tam++;
    }
    return tam;
}
//---------------------- -------------------------------------------------------
// FUNCION : void strCpy(char*destino, char*fuente)
// ACCION : copia una cadena en otra.
// PARAMETROS: cad: cadena destino.
//             cad: cadena fuente.
// DEVUELVE : nada.
//---------------------- -------------------------------------------------------

void strCpy(char fuente[20], char dest[20])
{
    int tam = 0;
    while (fuente[tam]!= '\0')
    {
        dest[tam] = fuente[tam];
        tam++;
    }
    dest[tam] = '\0';
    cout << "Cadena copia: " << dest;
    return ;
}

//---------------------- -------------------------------------------------------
// FUNCION : void strCat(char *cad1, char *cad2)
// ACCION : concatena dos cadenas.
// PARAMETROS: cad1: cadena destino.
//             cad2: cadena fuente.
// DEVUELVE : nada.
//---------------------- -------------------------------------------------------
void strCat(char *cad1, char *cad2)
{
    char cadtemp[20] = "";
    int x = 0;
    int i = 0;
    for(i=0; cad1[i]!='\0'; i++)
    {
        cadtemp[x] = cad1[i];
        x++;
    }
    for(i=0; cad2[i]!='\0'; i++)
    {
        cadtemp[x] = cad2[i];
        x++;
    }
    cad1 = cadtemp;
    cout <<"Cadena concatenada:  " << cad1 << endl;
}
//---------------------- -------------------------------------------------------
// FUNCION : int strCmp(char *cad1, char *cad2)
// ACCION : compara dos cadenas.
// PARAMETROS: cad1: cadena destino.
//             cad2: cadena fuente.
// DEVUELVE : int: un entero que representa la el resultado.
//---------------------- -------------------------------------------------------
int strCmp(char *cad1, char *cad2)
{
    int resultado = 0;
    int tam1 = 0;
    int tam2 = 0;
    for(int i=0; cad1[i]!='\0'; i++)
    {
        tam1 ++;
    }
    for(int i=0; cad2[i]!='\0'; i++)
    {
        tam2 ++;
    }
    if(tam1 == tam2) resultado = 0;
    else if(tam1 > tam2) resultado = 1;
    else if(tam1 < tam2) resultado = -1;
    return resultado;
}
//---------------------- -------------------------------------------------------
// FUNCION : strFind(char *cad, char *car)
// ACCION : busca un caracter dentro de una cadena.
// PARAMETROS: cad: cadena buscada.
//             car: caracter a buscar.
// DEVUELVE : int: La posicion donde se produce la primera ocurrencia.
//---------------------- -------------------------------------------------------
int strFind(char *cad, char *car)
{
    for(int i = 0; cad[i]!='\0'; i++)
    {
        if(cad[i] == car[0])
        {
            return i+1;
        }
    }
    return -1;
}
//---------------------- -------------------------------------------------------
// FUNCION : strCnt(char *cad, char *car)
// ACCION : cuenta cuántas de veces que aparece un carácter dentro de una cadena
// PARAMETROS: cad: cadena buscada.
//             car: caracter a buscar.
// DEVUELVE : int :la cantidad de veces que aparece el carácter en la cadena.
//---------------------- -------------------------------------------------------
int strCnt(char *cad, char *car)
{
    int x = 0;
    for(int i = 0; cad[i]!='\0'; i++)
    {
        if(cad[i] == car[0]) x++;
    }
    return x;
}
//---------------------- -------------------------------------------------------
// FUNCION : strInv(char *cad)
// ACCION : invierte los caracteres de una cadena
// PARAMETROS: cad: cadena a invertir.
//
// DEVUELVE : nada.
//---------------------- -------------------------------------------------------
void strInv(char *cad)
{
    int tam = 0;
    for(int i=0; cad[i]!='\0'; i++)
    {
        tam++;
    }
    char cadtemp[sizeof(cad)];
    for(int x=0; cad[x]!='\0'; x++)
    {
        int t = tam;
        cadtemp[t-1] = cad[x];
        tam--;
    }
    cout <<"Cadena invertida: " << cadtemp << endl;
}

//---------------------- -------------------------------------------------------
// FUNCION : strRpl(char *cad, char car, int pos)
// ACCION : reemplaza el carácter de una posición dada de una cadena por otro.
// PARAMETROS: cad: cadena,
//             char: nuevo carácter,
//             int: posición
// DEVUELVE : nada.
//---------------------- -------------------------------------------------------
void strRpl(char *cad, char *car, int pos)
{
    int t = pos -1;
    cad[t] = car[0];
    cout << "Reemplazo: " << cad << endl;
}
//---------------------- -------------------------------------------------------
// FUNCION : strTrunc(char *cad, int pos)
// ACCION : trunca una cadena en una posición dada.
// PARAMETROS: cad: cadena,
//             int: posición
// DEVUELVE : nada.
//---------------------- -------------------------------------------------------
void strTrunc(char *cad, int pos)
{
    cad[pos++] = '\0';
    cout << cad << endl;
}

int strSub(char *cad1, char *cad2)
{
    int resultado = 0;
    //int pos = 0;
    int x = 0;
    for(int i=0; cad1[i]!='\0'; i++)
    {
        //pos = 0;
        x = 0;
        if(cad1[i] == cad2[x])
        {
            resultado = i;
            for(int x=0; cad2[x]!='\0'; x++)
            {
                if(cad1[i+x] != cad2[x]) resultado = -1;
            }
        }
    }
    return resultado+1;
}

void strToUpper(char *cad)
{
    for(int i=0; cad[i]!='\0'; i++)
    {
        cad[i]=char(((int)cad[i])-32);
    }
    cout << "Cadena Mayuscula: " << cad << endl;
}

void strToLower(char *cad)
{
    for(int i=0; cad[i]!='\0'; i++)
    {
        cad[i]=char(((int)cad[i])+32);
    }
    cout <<"Cadena minuscula: " << cad << endl;
}

int strToInt(char *cad){
	std::stringstream ss;
	int t[sizeof(cad)];
	for(int x; cad[x]!='\0';x++)
	{
		t[x] = cad[x];
	}
	for (unsigned i = 0; i < sizeof t / sizeof t [0]; ++i)
        ss << t [i];

    	int resultado;
    	ss >> resultado;
    	return resultado;
}
/*
    void strToStr(char *cad)
    {
    	// MA O MENU QUE NO ENTENSHI
    }
    */

#endif // CADENAS_H_INCLUDED
