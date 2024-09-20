//#############################################################################
// ARCHIVO             : main.cpp
// AUTOR/ES            : Jose Adrin Cricione
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : 10/05/2016.
// ULTIMA ACTUALIZACION: 10/05/2016.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
#ifndef _WIN32
# define _WIN32
#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
//#ifndef _LINUX
//  # define _LINUX
//#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
// objetos cin, cout y endl.

#include <cstdlib>  // Libreria estandar que contiene la funcion exit().



//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include "cadenas.h" // Libreria para multiplataforma.
#include "presentacion.h" // Libreria de presentacion y menu.

//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------

using namespace std;

//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------
int main()
{
    bool salir = false;
    char op;

    iniPres();

    while (!salir)
    {
        menu();
        cout << "Ingrese una opcion: ";
        cin.get (op);
        cin.ignore();
        switch (op)
        {
        case 'a':
        case 'A':
        {
            cargarstrLen ();
            //llamar a strlen
        }
        break;
        case 'b':
        case 'B':
        {
            cargarstrCpy ();
            //llamar a strCpy
        }
        break;
        case 'c':
        case 'C':
        {
            sys::cls();
            cargarstrCat();
            //llamar a strCat
        }
        break;
        case 'd':
        case 'D':
        {
            sys::cls();
            cargarstrCmp();
            //llamar a strCmp
        }
        break;
        case 'e':
        case 'E':
        {
            sys::cls();
            cargarstrFind();
            //llamar a strFind
        }
        break;
        case 'f':
        case 'F':
        {
            sys::cls();
            cargarstrCnt();
            //llamar a strCnt
        }
        break;
        case 'g':
        case 'G':
        {
            sys::cls();
            cargarstrInv();
            //llamar a strInv
        }
        break;
        case 'h':
        case 'H':
        {
            sys::cls();
            cargarstrRpl();
            //llamar a strRpl
        }
        break;
        case 'i':
        case 'I':
        {
            sys::cls();
            cargarstrTrunc();
            //llamar a strTrunc
        }
        break;
        case 'j':
        case 'J':
        {
            sys::cls();
            cargarstrSub();
            //llamar a strSub
        }
        break;
        case 'k':
        case 'K':
        {
            sys::cls();
            cargarstrToUpper();
            //llamar a strToUpper
        }
        break;
        case 'l':
        case 'L':
        {
            sys::cls();
            cargarstrToLower();
            //llamar a strToLower
        }
        break;
        case 'm':
        case 'M':
        {
            sys::cls();
            cargarstrToInt();
            //llamar a strToInt
        }
        break;
        case 'n':
        case 'N':
        {
            sys::cls();

            //llamar a intToStr
        }
        break;
        case 's':
        case 'S':
        {
            salir = true;
            salirProg();

        }
        break;
        default:
        {
            sys::cls();
            cout << "-------------------" << endl;
            cout << "Opcion incorrecta." << endl;
            cout << "-------------------" << endl;
        }


        }
        cin.get();

    }

    //--------------------------------------------------------------------------
    // FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;
}

//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
