#ifndef PRESENTACION_H_INCLUDED
#define PRESENTACION_H_INCLUDED
#include <iostream>
#include "CSYSTEM/csystem.h"
#include "cadenas.h"

using namespace std;
void iniPres ()
{
    int t = 1;
    cout << " __^__                                                                                               __^__" << endl;
    cout << "( ___ )---------------------------------------------------------------------------------------------( ___ )" << endl;
    cout << " | / |                                                                                               | / |" << endl;
    cout << " | / |                                                                                               | / |" << endl;
    cout << " | / |   ######    ###  #######  #     #  #     #  #######  #     #  ###  ######   #######   #####   | / |" << endl;
    cout << " | / |    #     #   #   #        ##    #  #     #  #        ##    #   #   #     #  #     #  #     #  | / |" << endl;
    cout << " | / |    #     #   #   #        # #   #  #     #  #        # #   #   #   #     #  #     #  #        | / |" << endl;
    cout << " | / |    ######    #   #####    #  #  #  #     #  #####    #  #  #   #   #     #  #     #   #####   | / |" << endl;
    cout << " | / |    #     #   #   #        #   # #   #   #   #        #   # #   #   #     #  #     #        #  | / |" << endl;
    cout << " | / |    #     #   #   #        #    ##    # #    #        #    ##   #   #     #  #     #  #     #  | / |" << endl;
    cout << " | / |   ######    ###  #######  #     #     #     #######  #     #  ###  ######   #######   #####   | / |" << endl;
    cout << " | / |                                                                                               | / |" << endl;
    cout << " |___|                                                                                               |___|" << endl;
    cout << "(_____)---------------------------------------------------------------------------------------------(_____)" << endl;
    sys::msleep(t);
}
void menu ()
{
    sys::cls();
    cout << "----------------MENU----------------" << endl;
    cout << "* A - strLen                       -" << endl;
    cout << "* B - strCpy                       -" << endl;
    cout << "* C - strCat                       -" << endl;
    cout << "* D - strCmp                       -" << endl;
    cout << "* E - strFind                      -" << endl;
    cout << "* F - strCnt                       -" << endl;
    cout << "* G - strInv                       -" << endl;
    cout << "* H - strRpl                       -" << endl;
    cout << "* I - strTrunc                     -" << endl;
    cout << "* J - strSub                       -" << endl;
    cout << "* K - strToUpper                   -" << endl;
    cout << "* L - strToLower                   -" << endl;
    cout << "* M - strToInt                     -" << endl;
    cout << "* N - intToStr                     -" << endl;
    cout << "* S - Salir                        -" << endl;
    cout << "------------------------------------" << endl;

}
void salirProg()
{
    sys::cls();
    cout << "------------------------------------" << endl;
    cout << "   ##    #####   #   ####    ####   " << endl;
    cout << "  #  #   #    #  #  #    #  #       " << endl;
    cout << " #    #  #    #  #  #    #   ####   " << endl;
    cout << " ######  #    #  #  #    #       #  " << endl;
    cout << " #    #  #    #  #  #    #  #    #  " << endl;
    cout << " #    #  #####   #   ####    ####   " << endl;
    cout << "------------------------------------" << endl;
}

void cargarstrLen ()
{
    sys::cls();
    char cad[50];
    int l;
    cout << "-----------FUNCION--strLen--------------------------------------------" << endl;
    cout << "3.1 strLen" << endl;
    cout << "3.1.1 Accion: cuenta la cantidad de caracteres que integran una cadena." << endl;
    cout << "3.1.2 Parametros: cadena de caracteres." << endl;
    cout << "3.1.3 Devuelve: un entero que representa la cantidad de caracteres." << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Ingrese un  texto: ";
    sys::getline(cad,50);
    l = strlen(cad);
    cout << "Cantidad de caracteres: " <<  l << endl;
    cout << endl;
}
void cargarstrCpy ()
{
    sys::cls();
    char cad1[20] = "";
    char cad2[20] = "";

    cout << "-----------FUNCION--strCpy--------------------------------------------" << endl;
    cout << "3.2 strCpy" << endl;
    cout << "3.2.1 Accion: copia una cadena en otra." << endl;
    cout << "3.2.2 Parametros: cadena destino, cadena fuente." << endl;
    cout << "3.2.3 Devuelve: nada." << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Ingrese un  texto: ";
    sys::getline(cad1,20);
    strCpy(cad1,cad2);
}
void cargarstrCat()
{
    sys::cls();
    char cad1[20] = "";
    char cad2[20] = "";
    cout << "-----------FUNCION--strCat------------------------------------------------------" << endl;
    cout << "3.3 strCat" << endl;
    cout << "3.3.1 Accion: concatena dos cadenas dejando el resultado en la cadena inicial. " << endl;
    cout << "3.3.2 Parametros: cadena inicial, cadena final."<< endl;
    cout << "3.3.3 Devuelve: nada" << endl;
    cout << "Nota: la cadena inicial debe ser tan larga como la suma de la longitud de ambas "<< endl;
    cout << "cadenas." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese otra cadena: ";
    sys::getline(cad2,20);
    strCat(cad1,cad2);
}
void cargarstrCmp()
{
    sys::cls();
    int l;
    cout << "-----------FUNCION--strCmp------------------------------------------------------" << endl;
    cout << "3.4 strCmp" << endl;
    cout << "3.4.1 Accion: compara dos cadenas." << endl;
    cout << "3.4.2 Parametros: cadena 1, cadena 2.. " << endl;
    cout << "3.4.3 Devuelve:"<< endl;
    cout << "3.3.3 Devuelve: nada" << endl;
    cout << "Nota: la cadena inicial debe ser tan larga como la suma de la longitud de ambas "<< endl;
    cout << "cadenas." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "caca";
    char cad2[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese otra cadena: ";
    sys::getline(cad2,20);
    l = strCmp(cad1,cad2);
    cout <<"Comparacion de cadenas: " << l << endl;
}

void cargarstrFind()
{
    sys::cls();
    int l;
    cout << "-----------FUNCION--strFIND------------------------------------------------------" << endl;
    cout << "3.5 strFind" << endl;
    cout << "3.5.1 Accion: busca un caracter dentro de una cadena." << endl;
    cout << "3.5.2 Parametros: cadena, caracter."<< endl;
    cout << "3.5.3 Devuelve:" << endl;
    cout << "La posicion donde se produce la primera ocurrencia."<< endl;
    cout << "Un –1 si no lo encuentra." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    char cad2[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese otra cadena: ";
    sys::getline(cad2,20);
    l = strFind(cad1,cad2);
    cout <<"Posicion del caracter" << l ;
}

void cargarstrCnt()
{
    sys::cls();
    int l;
    cout << "-----------FUNCION--strCnt------------------------------------------------------" << endl;
    cout << "3.6 strCnt" << endl;
    cout << "3.6.1 Accion: cuenta cuantas de veces que aparece un caracter dentro de una cadena." << endl;
    cout << "3.6.2 Parametros: cadena, caracter."<< endl;
    cout << "3.6.3 Devuelve: la cantidad de veces que aparece el caracter en la cadena." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    char cad2[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese otra cadena: ";
    sys::getline(cad2,20);
    l = strCnt(cad1,cad2);
    cout <<"Cantidad de repeteciones: " << l << endl;
}

void cargarstrInv()
{
    sys::cls();
    cout << "-----------FUNCION--strInv------------------------------------------------------" << endl;
    cout << "3.7 strInv" << endl;
    cout << "3.7.1 Accion: invierte los caracteres de una cadena." << endl;
    cout << "3.7.2 Parametros: cadena"<< endl;
    cout << "3.7.3 Devuelve: nada." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    strInv(cad1);
}

void cargarstrRpl()
{
    sys::cls();
    cout << "-----------FUNCION--strRpl------------------------------------------------------" << endl;
    cout << "3.8 strRpl" << endl;
    cout << "3.8.1 Accion: reemplaza el carácter de una posición dada de una cadena por otro." << endl;
    cout << "3.8.2 Parametros: cadena, nuevo carácter, posición"<< endl;
    cout << "3.8.3 Devuelve: nada." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char letra[1] = "";
    int pos = 0;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese una letra: ";
    sys::getline(letra,1);
    cout << "Ingrese posicion: ";
    cin >>pos;
    cin.ignore();
    strRpl(cad1,letra,pos);
}

void cargarstrTrunc()
{
    sys::cls();
    cout << "-----------FUNCION--strTrunc------------------------------------------------------" << endl;
    cout << "3.9 strTrunc" << endl;
    cout << "3.9.1 Accion: trunca una cadena en una posición dada." << endl;
    cout << "3.9.2 Parametros: cadena, posición."<< endl;
    cout << "3.9.3 Devuelve: nada." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    int pos = 0;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese posicion: ";
    cin >>pos;
    cin.ignore();
    strTrunc(cad1,pos);
}

void cargarstrSub()
{
    sys::cls();
    int l;
    cout << "-----------FUNCION--strSub------------------------------------------------------" << endl;
    cout << "3.10 strSub" << endl;
    cout << "3.10.1 Acción: busca una subcadena dentro de una cadena." << endl;
    cout << "3.10.2 Parámetros: cadena, subcadena."<< endl;
    cout << "3.10.3 Devuelve:" << endl;
    cout << "La posición inicial de la subcadena." << endl;
    cout << "Un –1 si no se encuentra." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    char cad2[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    cout << "Ingrese otra cadena: ";
    sys::getline(cad2,20);
    l = strSub(cad1,cad2);
    cout << "Posicion inicial de la subcadena" << l ;
}

void cargarstrToUpper()
{
    sys::cls();
    cout << "-----------FUNCION--strToUpper------------------------------------------------------" << endl;
    cout << "3.11 strToUpper" << endl;
    cout << "3.11.1 Acción: convierte una cadena a mayúsculas." << endl;
    cout << "3.11.2 Parámetros: cadena."<< endl;
    cout << "3.11.3 Devuelve: nada." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    strToUpper(cad1);
}

void cargarstrToLower()
{
    sys::cls();
    cout << "-----------FUNCION--strToLower------------------------------------------------------" << endl;
    cout << "3.12 strToLower" << endl;
    cout << "3.12.1 Acción: convierte una cadena a minúsculas." << endl;
    cout << "3.12.2 Parámetros: cadena."<< endl;
    cout << "3.12.3 Devuelve: nada." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    strToLower(cad1);
}

void cargarstrToInt()
{
    sys::cls();

    cout << "-----------FUNCION--strToInt------------------------------------------------------" << endl;
    cout << "3.13 strToInt" << endl;
    cout << "3.13.1 Acción: convierte una cadena de caracteres a un número entero." << endl;
    cout << "3.13.2 Parámetros: cadena"<< endl;
    cout << "3.13.3 Devuelve: el número entero." << endl;
    cout << "Nota: los elementos de la cadena deben ser caracteres cuyo código ASCII se" << endl;
    cout << "encuentre en el rango 48..57." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    char cad1[20] = "";
    cout << "Ingrese una cadena: ";
    sys::getline(cad1,20);
    int l = 0;
    l = strToInt(cad1);

    cout <<l;

}
#endif // PRESENTACION_H_INCLUDED
