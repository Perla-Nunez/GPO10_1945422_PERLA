



#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;

struct tiendaVG
{

	int idnumartc, year;
	string artc, name, clas, caract, descr, genre;
	float subtotal, iva, total;
};

int main()
{
	tiendaVG juegos[3];
	int opcion, busqueda, opcion2, opcion3;

	do
	{
		printf("\t ///HIPPO GAMES///  \n");
		printf(" 1.-Agregar Articulo \n 2.-Lista Articulos vigentes\n 3.-Eliminar Articulo\n 4.-Modificar articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{
		case 1:
			//capturar y guardar los datos por posicion
			for (int i = 0; i < 3; i++)
			{
				//int salida = 1;
				do
				{
					printf("ingrese el numero del articulo \n");
					scanf_s("%d", &juegos[i].idnumartc);
					/*	if (juegos[i].idnumartc == juegos[i - 1].idnumartc || juegos[i].idnumartc == juegos[i - 2].idnumartc)
						{
							printf("el numero de articulo ya existe \n");

						}
						else
						{
							salida = 2;
						}
					} while (salida == 1);*/
				} while (juegos[i].idnumartc == juegos[i - 1].idnumartc || juegos[i].idnumartc == juegos[i - 2].idnumartc);

				printf("Ingrese el nombre del juego \n");
				cin.ignore();
				getline(cin, juegos[i].name);
				printf("Ingrese el año de lanzamiento \n");
				scanf_s("%d", &juegos[i].year);
				printf("Realice una descripcion del juego \n");
				cin.ignore();
				getline(cin, juegos[i].descr);
				printf("Ingrese la clasificacion del juego \n");
				cin.ignore();
				getline(cin, juegos[i].clas);
				printf("Ingrese las caracteristicas del juego \n");
				cin.ignore();
				getline(cin, juegos[i].caract);
				printf("Indique el genero del juego \n");
				cin.ignore();
				getline(cin, juegos[i].genre);
				printf("ingrese el precio unitario del producto \n");
				scanf_s("%f", &juegos[i].subtotal);
				juegos[i].iva = juegos[i].subtotal * .16;
				juegos[i].total = juegos[i].subtotal + juegos[i].iva;
				//juegos[i].total =juegos[i].subtotal*1.16;
				system("pause");
				system("cls");
			}

			break;

				case 2: //lista
					do
					{
						system("cls");
						printf("ingrese la opcion deseada de busqueda \n 1.-Por Num OC \n 2.-Listas Vigentes \n 3.- Salir \n");
						scanf_s("%d", &opcion2);
						system("cls");
						switch (opcion2)//siwtch para las opciones de busqueda
						{
						case 1:
							//imprimir los datos por posicion 
							printf("ingrese el num oc \n");
							scanf_s("%d", &busqueda);
							for (int i = 0; i < 3; i++)//imprime el buscado
							{
								if (busqueda == juegos[i].idnumartc)
								{
									printf("Numero del articulo: %d \n", juegos[i].idnumartc);
									printf("Nombre: %s \n", juegos[i].name.c_str());
									printf("Año: %d \n", juegos[i].year);
									printf("Descripcion: %s\n", juegos[i].descr.c_str());
									printf("Clasificacion: %s\n", juegos[i].clas.c_str());
									printf("Caracteristicas: %s\n", juegos[i].name.c_str());
									printf("Genero: %s\n", juegos[i].genre.c_str());
									printf("subtotal: %f \n", juegos[i].subtotal);
									printf("iva: %f \n", juegos[i].iva);
									printf("total: %f \n ", juegos[i].total);
								}
							}
							system("pause");
							break;

						case 2://imprime todos
							for (int i = 0; i < 3; i++)
							{
								if (juegos[i].idnumartc != 0)
								{
									printf("Numero del articulo: %d \n", juegos[i].idnumartc);
									printf("Nombre: %s \n", juegos[i].name.c_str());
									printf("Año: %d \n", juegos[i].year);
									printf("Descripcion: %s\n", juegos[i].descr.c_str());
									printf("Clasificacion: %s\n", juegos[i].clas.c_str());
									printf("Caracteristicas: %s\n", juegos[i].name.c_str());
									printf("Genero: %s\n", juegos[i].genre.c_str());
									printf("subtotal: %f \n", juegos[i].subtotal);
									printf("iva: %f \n", juegos[i].iva);
									printf("total: %f \n \n", juegos[i].total);
								}
							}
							system("pause");
							break;
						case 3:
							printf("Saliendo... \n");
							system("pause");
							break;

						default:
							printf("la opcion es incorrecta \n");
							system("pause");
							break;
						}
					} while (opcion2 != 3);
					system("pause");
					system("cls");
					break;

				case 3:
					do
					{
						system("cls");

						printf("ingrese el num oc \n");
						scanf_s("%d", &busqueda);

						for (int i = 0; i < 3; i++)
						{
							if (busqueda == juegos[i].idnumartc)
							{
								juegos[i].idnumartc = 0;//al darle valor 0 no existe
								printf("Eliminado... \n");
								system("pause");
							}
						}
						printf("desea eliminar otro registro 1.- si 2.- n \n");
						scanf_s("%d", &opcion3);
					} while (opcion3 == 1);
					system("pause");
					system("cls");
					break;

				case 4://modificar articulo
					printf("opcion aun no disponible\n");
					system("cls");
					break;

				case 5: //limpiar
					system("cls");
					break;
				case 6://salir
					printf("saliendo... \n");
					break;
				default:
					printf("intente denuevo... \n");
					break;
				}
			} while (opcion != 6);
			system("pause");
		}