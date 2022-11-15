

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int* item, * year, registros, desicion, n = 1;
string* name, * clas, * caract, * genre, * descr;
float* subtotal, * iva, * total;

//funciones void 
void alta();
void eliminar();
void lista();
void modificacion();
void archivo();

int main()
{
	system("color 5F");
	int opcion;
	printf("\t ///HIPPO GAMES///  \n");
	printf(" 1.-Agregar Articulo \n 2.-Lista Articulos vigentes\n 3.-Eliminar Articulo\n 4.-Modificar articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		alta();
		system("pause");
		return main();
		break;
	case 2:
		lista();
		system("pause");
		return main();
		break;
	case 3:
		eliminar();
		system("pause");
		return main();
		break;
	case 4:
		modificacion();
		system("pause");
		return main();
		break;
	case 5:
		system("cls");
		break;
	case 6:
		archivo();
		exit(1);
		break;
	default:
		printf("Ingrese una opcion valida \n");
		system("pause");
		break;
	}
}

void alta()
{
	printf("Cuantos registros desea dar de alta? \n");
	scanf_s("%d", &registros);
	item = new int[registros];
	year = new int[registros];
	name = new string[registros];
	clas = new string[registros];
	caract = new string[registros];
	genre = new string[registros];
	descr = new string[registros];
	subtotal = new float[registros];
	iva = new float[registros];
	total = new float[registros];
	//arreglo

	for (int i = 0; i < registros; i++)
	{
		printf("ingrese el numero del articulo \n");
		scanf_s("%d", &item[i]);

		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("El articulo ya existe \n");
				printf("Ingrese el articulo \n");
				scanf_s("%d", &item[i]);
			}

		} while (n < registros);

		printf("Ingrese el nombre del juego \n");
		cin.ignore();
		getline(cin, name[i]);
		printf("Ingrese el a%co de lanzamiento \n", 164);
		scanf_s("%d", &year[i]);
		printf("Realice una descripcion del juego \n");
		cin.ignore();
		getline(cin, descr[i]);
		printf("Ingrese la clasificacion del juego \n");
		cin.ignore();
		getline(cin, clas[i]);
		printf("Ingrese las caracteristicas del juego \n");
		cin.ignore();
		getline(cin, caract[i]);
		printf("Indique el genero del juego \n");
		cin.ignore();
		getline(cin, genre[i]);
		printf("ingrese el precio unitario del producto \n");
		scanf_s("%f", &subtotal[i]);
		iva[i] = subtotal[i] * .16;
		total[i] = subtotal[i] + iva[i];
		system("pause");
		system("cls");
		if ((registros - 1) == i)//registro extra

		{
			int desicion;
			printf("desea dar de alta otro registro?\n si=1 \n");
			scanf_s("%d", &desicion);
			if (desicion == 1)
			{
				registros = registros + 1;
			}
		}
	}
}


void eliminar()
{
	int eliminar;
	printf("Ingrese el numero de articulo que desea eliminar \n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == item[i])
		{
			item[i] = 0;
		}
	}
}

void lista()
{
	int opcion2,busqueda2;
	string busqueda;

	printf("ingrese la opcion deseada de busqueda \n 1.-Articulos Vigentes \n 2.-Clasificacion \n 3.-Genero \n 4.-Numero de articulo \n 5.- Salir \n");
	scanf_s("%d", &opcion2);
	system("cls");
	switch (opcion2)//siwtch para las opciones de busqueda
	{
	case 1://imprime todos
		for (int i = 0; i < registros; i++)
		{
			if (item[i] != 0)
			{
				printf("ARTICULO: %d \n", item[i]);
				printf("Nombre: %s \n", name[i].c_str());
				printf("A%co: %d \n", 164, year[i]);
				printf("Descripcion: %s\n", descr[i].c_str());
				printf("Clasificacion: %s\n", clas[i].c_str());
				printf("Caracteristicas: %s\n", caract[i].c_str());
				printf("Genero: %s\n", genre[i].c_str());
				printf("subtotal: %f \n", subtotal[i]);
				printf("iva: %f \n", iva[i]);
				printf("total: %f \n ", total[i]);
			}
		}
		system("pause");
		break;
	case 2://imrpime x clasificacion
		printf("ingrese la clasificacion del articulo \n");
		cin.ignore();
		getline(cin, busqueda);
		for (int i = 0; i < registros; i++)
		{
			if (clas[i] == busqueda)
			{
				if (item[i] != 0)
				{
					printf("ARTICULO: %d \n", item[i]);
					printf("Nombre: %s \n", name[i].c_str());
					printf("A%co: %d \n",164, year[i]);
					printf("Descripcion: %s\n", descr[i].c_str());
					printf("Clasificacion: %s\n", clas[i].c_str());
					printf("Caracteristicas: %s\n", caract[i].c_str());
					printf("Genero: %s\n", genre[i].c_str());
					printf("subtotal: %f \n", subtotal[i]);
					printf("iva: %f \n", iva[i]);
					printf("total: %f \n ", total[i]);
				}
			}
		}
		system("pause");
		break;

	case 3://imprime x genero
		printf("ingrese el genero del articulo \n");
		cin.ignore();
		getline(cin, busqueda);
		for (int i = 0; i < registros; i++)
		{
			if (genre[i] == busqueda)
			{
				if (item[i] != 0)
				{
					printf("ARTICULO: %d \n", item[i]);
					printf("Nombre: %s \n", name[i].c_str());
					printf("A%co: %d \n",164, year[i]);
					printf("Descripcion: %s\n", descr[i].c_str());
					printf("Clasificacion: %s\n", clas[i].c_str());
					printf("Caracteristicas: %s\n", caract[i].c_str());
					printf("Genero: %s\n", genre[i].c_str());
					printf("subtotal: %f \n", subtotal[i]);
					printf("iva: %f \n", iva[i]);
					printf("total: %f \n ", total[i]);
				}
			}
		}
		system("pause");
		break;
	case 4://imprimir x numero d articulo
		printf("ingrese el numero del articulo a buscar \n");
		scanf_s("%d", &busqueda2);
		for (int i = 0; i < registros; i++)//imprime el buscado
		{
			if (item[i] == busqueda2)
			{
				if (item[i] != 0)
				{
					printf("ARTICULO: %d \n", item[i]);
					printf("Nombre: %s \n", name[i].c_str());
					printf("A%co: %d \n", 164, year[i]);
					printf("Descripcion: %s\n", descr[i].c_str());
					printf("Clasificacion: %s\n", clas[i].c_str());
					printf("Caracteristicas: %s\n", caract[i].c_str());
					printf("Genero: %s\n", genre[i].c_str());
					printf("subtotal: %f \n", subtotal[i]);
					printf("iva: %f \n", iva[i]);
					printf("total: %f \n ", total[i]);
				}
			}
		}
		system("pause");
		break;
	case 5:
		printf("Saliendo... \n");
		system("pause");
		break;

	default:
		printf("Opcion no valida \n");
		system("pause");
		break;
	}


}

void modificacion()
{
	int modificar;
	//switch
	do
	{
		printf("ingrese el numero de articulo a modificar \n");
		scanf_s("%d", &modificar);
	} while (modificar <= 0);

	for (int i = 0; i < registros; i++)
	{
		if (modificar == item[i])
		{
			printf("Ingrese el nombre del juego \n");
			cin.ignore();
			getline(cin, name[i]);
			printf("Ingrese el a%co de lanzamiento \n",164);
			scanf_s("%d", &year[i]);
			printf("Realice una descripcion del juego \n");
			cin.ignore();
			getline(cin, descr[i]);
			printf("Ingrese la clasificacion del juego \n");
			getline(cin, clas[i]);
			printf("Ingrese las caracteristicas del juego \n");
			getline(cin, caract[i]);
			printf("Indique el genero del juego \n");
			getline(cin, genre[i]);
			printf("ingrese el precio unitario del producto \n");
			scanf_s("%f", &subtotal[i]);
			iva[i] = subtotal[i] * .16;
			total[i] = subtotal[i] + iva[i];
		}
	}
}

void archivo()
{
	ofstream archivo;
	string nombrearchivo;

	printf("Ingrese el nombre del archivo \n");
	getline(cin, nombrearchivo);

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
		system("pause");
		exit(1);
	}

	for (int i = 0; i < registros; i++)
		if (item[i] != 0)
		{
			archivo << "dato\n" << i + 1 << endl;
			archivo << "\t" << "item[i]" << endl;
			archivo << "\t" << "name:" << endl;
			archivo << "\t" << "year:" << endl;
			archivo << "\t" << "descripcion:" << endl;
			archivo << "\t" << "clasificacion:" << endl;
			archivo << "\t" << "caracteristicas:" << endl;
			archivo << "\t" << "genero:" << endl;
			archivo << "\t" << "subtotal:" << endl;
			archivo << "\t" << "iva:" << endl;
			archivo << "\t" << "total:" << endl;
		}

	archivo.close();
}
