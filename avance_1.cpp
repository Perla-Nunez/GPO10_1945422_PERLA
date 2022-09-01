

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
    int numartc, year, opcion, confirmar;
    float  p_u, iva;
    string artc, name, clas, caract, descr, genre;

    system("color 5F");
    cout << "\t\t ///HIPPO GAMES/// \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulos vigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero del juego \n";
        cin >> numartc;
        cout << "ingrese el nombre del juego\n";
        cin.ignore();
        getline(cin, artc);
        cout << "ingrese el año de lanzamiento del juego\n";
        cin.ignore();
        cin >> year;
        cout << "ingrese el descripcion del juego\n";
        cin.ignore();
        getline(cin, descr);
        cout << "ingrese la clasificacion del juego\n";
        cin.ignore();
        getline(cin, clas);
        cout << "ingrese las caracteristicas del juego\n";
        cin.ignore();
        getline(cin, caract);
        cout << "Realice una descripcion del juego\n";
        cin.ignore();
        getline(cin, descr);
        cout << "Especifique el genero del juego\n";
        cin.ignore();
        getline(cin, genre);
        cout << "ingrese el precio unitario del articulo\n";
        cin >> p_u;
        iva = p_u * .16;
        cout << "impuesto:\t" << iva << endl;
        cout << "Precio total:\t" << iva + p_u << "\n\n";
        //Agregar 2do articulo
        cout << "Desea ingresar otro articulo?(Maximo 3)\n Si es asi presione 1, si no otro presione otro numero\n";
        cin >> confirmar;

        if (confirmar == 1)
        {
            cout << "Ingrese el numero del juego \n";
            cin >> numartc;
            cout << "ingrese el nombre del juego\n";
            cin.ignore();
            getline(cin, artc);
            cout << "ingrese el año de lanzamiento del juego\n";
            cin.ignore();
            cin >> year;
            cout << "ingrese el descripcion del juego\n";
            cin.ignore();
            getline(cin, descr);
            cout << "ingrese la clasificacion del juego\n";
            cin.ignore();
            getline(cin, clas);
            cout << "ingrese las caracteristicas del juego\n";
            cin.ignore();
            getline(cin, caract);
            cout << "Realice una descripcion del juego\n";
            cin.ignore();
            getline(cin, descr);
            cout << "Especifique el genero del juego\n";
            cin.ignore();
            getline(cin, genre);
            cout << "ingrese el precio unitario del articulo\n";
            cin >> p_u;
            iva = p_u * .16;
            cout << "impuesto:\t" << iva << endl;
            cout << "Precio total:\t" << iva + p_u << "\n\n";
           
            //Agregar tercer articulo
            cout << "Desea ingresar otro articulo?\nSi es asi presione 1, si no presione otro numero\n";
            cin >> confirmar;

            if (confirmar == 1)
            {
                cout << "Ingrese el numero del juego \n";
                cin >> numartc;
                cout << "ingrese el nombre del juego\n";
                cin.ignore();
                getline(cin, artc);
                cout << "ingrese el año de lanzamiento del juego\n";
                cin.ignore();
                cin >> year;
                cout << "ingrese el descripcion del juego\n";
                cin.ignore();
                getline(cin, descr);
                cout << "ingrese la clasificacion del juego\n";
                cin.ignore();
                getline(cin, clas);
                cout << "ingrese las caracteristicas del juego\n";
                cin.ignore();
                getline(cin, caract);
                cout << "Realice una descripcion del juego\n";
                cin.ignore();
                getline(cin, descr);
                cout << "Especifique el genero del juego\n";
                cin.ignore();
                getline(cin, genre);
                cout << "ingrese el precio unitario del articulo\n";
                cin >> p_u;
                iva = p_u * .16;
                cout << "impuesto:\t" << iva << endl;
                cout << "Precio total:\t" << iva + p_u << "\n\n";

                cout << "registro finalizado\n";
                system("pause");
            }
            else
            {
                cout << "registro finalizado\n";
                system("pause");
            }

        }
        else
        {
            cout << "registro finalizado\n";
            system("pause");
        }
        return main();
        break;

    case 2: //Modificar Articulo
        cout << "opcion no disponible";
        break;

    case 3://Eliminar Articulo
        cout << "opcion no disponible";
        break;

    case 4: //Lista de Articulos
        cout << "opcion no disponible";
        break;

    case 5: //Limpiar Pantalla
        system("cls");
        return main();
        break;

    case 6: //salir
        cout << "\tGracias por visitar Hippo games \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n\n";
        return main();

    }

}
