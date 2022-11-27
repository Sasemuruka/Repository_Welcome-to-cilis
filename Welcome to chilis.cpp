#include<iostream> 
#include <string>
#include<string.h>
#include <limits>
#include <conio.h>
#include <fstream>

using namespace std;


struct sophisticate
{
	float total, precio, impuesto;
	int id, anio;
	string nombre, car, des, gen, cla;

}witt[100];


void leer();
void guardar();
void agregar();
void mostrar();
void borrar();
void modificar();

string linea = "";
string usuarios[10], g;
char clasificacion;
int a = 0, contador = 0, e, detener, wawa, busqueda, y = 0, mod;
bool b = true, loop = true, buscar = false, AGRE = true, MOS = true, si = 1, tu = 1, papa = 1;
string like;

void main()
{
	leer();



	while (b)
	{
		AGRE = true;

		system("color 0D");                                  // todo esto pertenece al menu//

		cout << "\n Welcome to Chilis " << endl;

		cout << "\n\t====Menu Principal====" << endl;
		cout << "\n\t1. Agregar articulo" << endl;
		cout << "\n\t2. Modificar articulo" << endl;
		cout << "\n\t3. Borrar articulo" << endl;
		cout << "\n\t4. Lista de articulos vigentes" << endl;
		cout << "\n\t5. Salir" << endl;
		cout << "\n\t6. Limpiar pantalla" << endl;
		cout << "\n  Ingrese un digito para continuar...";


		while (si)

		{
			cin >> a;                                                              // agregar el valor para la opcion en el switch//
			if (!cin.good())
			{
				cout << "\nERROR intenta con otro digito de preferencia un entero....\n";
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}



		switch (a)
		{
		case 1:

			agregar();
			break;


		case 2:


			modificar();
			break;

		case 3:

			borrar();
			break;


		case 4:

			mostrar();
			break;

		case 5:

		
			guardar();
			system("color 72");
			b = false;
			break;

		case 6:
		{

			system("cls");
			break;
		}



		default:
			cout << "Error... el digito no es valido vuelvelo a intentar...";
			break;
		}




	}
	system("pause>null");
}

void agregar()
{
	while (AGRE)
	{

		cout << "\n  numero del articulo o id: " << contador + 1 << endl;
		witt[contador].id = contador + 1;

		cout << "\n  nombre del juego: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, witt[contador].nombre);

		cout << "\n  fecha de lanzamiento: ";

		while (tu)
		{
			cin >> witt[contador].anio;
			if (!std::cin.good())
			{
				std::cout << "\nERROR, ingresa el anio de salida\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}


		cout << "\n  clasificacion: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin >> witt[contador].cla;

		cout << "\n  caracteristicas del juego: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, witt[contador].car);

		cout << "\n  descripcion del juego: ";
		getline(cin, witt[contador].des);

		cout << "\n  generos: ";
		getline(cin, witt[contador].gen);

		cout << "\n  precio unitario: ";

		while (true)
		{
			cin >> witt[contador].precio;
			if (!std::cin.good())
			{
				std::cout << "\nERROR...ingresa el precio sin caracteres o simbolos, solo se permiten enteros\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}



		witt[contador].impuesto = witt[contador].precio * 0.16;
		cout << "\n  impueto del juego: " << witt[contador].impuesto;


		witt[contador].total = witt[contador].impuesto + witt[contador].precio;

		cout << "\n  $total$:\t " << witt[contador].total;

		cout << "\ndeseas agregar otro producto?: " << endl;
		cout << "selecciona 1 para continuar o 2 para volver al menu: " << endl;

		while (true)
		{
			cin >> detener;
			if (!std::cin.good())
			{
				std::cout << "\nERROR...ingresa el precio sin caracteres o simbolos, solo se permiten enteros\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}
		if (detener == 1)
		{
			contador++;
		}

		if (detener == 2)
		{
			contador++;

			AGRE = 0;
		}
	}
}

void mostrar()
{
	loop = 1;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (loop)
	{

		cout << "\n Escoge una forma de busqueda " << endl;

		cout << "\n\t1. Lista completa" << endl;
		cout << "\n\t2. Lista por clasificacion" << endl;
		cout << "\n\t3. Lista por genero" << endl;
		cout << "\n\t4. salir de la busqueda" << endl;

		while (true)
		{
			cin >> busqueda;
			if (!std::cin.good())
			{
				std::cout << "ERROR, ingresa solo un valor de tipo entero\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}


		switch (busqueda)
		{
		case 1:
			MOS = 1;
			y = 0;
			cout << "\n>>>lista completa<<<" << endl;

			while (MOS)
			{

				cout << "\n numero de ID; " << witt[y].id << endl;
				cout << "\n nombre; " << witt[y].nombre << endl;
				cout << "\n año de salida; " << witt[y].anio << endl;
				cout << "\n clasificacion; " << witt[y].cla << endl;
				cout << "\n caracteristicas; " << witt[y].car << endl;
				cout << "\n descripcion; " << witt[y].des << endl;
				cout << "\n genero; " << witt[y].gen << endl;
				cout << "\n precio; " << witt[y].precio << endl;
				cout << "\n impuesto; " << witt[y].impuesto << endl;
				cout << "\n $total$" << witt[y].total << endl;

				cout << "\n\n";

				y++;

				if (witt[y].id == 0)
				{
					MOS = 0;
				}


			}
			break;

		case 2:
		{
			string hope;
			bool pik = 1, hub = 1;
			int p = 0;

			cout << "\n>>>lista por clasificacion<<<" << endl;

			while (hub)
			{

				cout << "\ningresa la clasificacion a buscar" << endl;

				cin >> hope;

				for (int p = 0; p < 100; p++)
				{
					if (hope == witt[p].cla)
					{
						cout << "\n numero de ID; " << witt[p].id << endl;
						cout << "\n nombre; " << witt[p].nombre << endl;
						cout << "\n año de salida; " << witt[p].anio << endl;
						cout << "\n clasificacion; " << witt[p].cla << endl;
						cout << "\n caracteristicas; " << witt[p].car << endl;
						cout << "\n descripcion; " << witt[p].des << endl;
						cout << "\n genero; " << witt[p].gen << endl;
						cout << "\n precio; " << witt[p].precio << endl;
						cout << "\n impuesto; " << witt[p].impuesto << endl;
						cout << "\n $total$" << witt[p].total << endl;

						cout << "\n\n";

					}
					if (witt[p].id == 0)
					{
						p = 100;
					}

				}

				cout << "buscar otra clasificacion o salir de la busqueda: " << endl;

				cout << "selecciona 1 para continuar o 2 para volver al menu de busqueda: " << endl;

				while (true)
				{
					cin >> detener;
					if (!std::cin.good())
					{
						std::cout << "ERROR\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					else
						break;
				}


				if (detener == 1)
				{
					hub = 1;
				}

				if (detener == 2)
				{

					hub = 0;
				}

			}

			break;
		}

		case 3:
		{

			bool pik = 1, hub = 1;
			int p = 0;

			cout << "\n>>>lista por genero<<<" << endl;

			while (hub)
			{

				cout << "\ningresa la genero a buscar" << endl;

				cin >> like;

				for (int p = 0; p < 100; p++)
				{
					if (like == witt[p].gen)
					{
						cout << "\n numero de ID; " << witt[p].id << endl;
						cout << "\n nombre; " << witt[p].nombre << endl;
						cout << "\n año de salida; " << witt[p].anio << endl;
						cout << "\n clasificacion; " << witt[p].cla << endl;
						cout << "\n caracteristicas; " << witt[p].car << endl;
						cout << "\n descripcion; " << witt[p].des << endl;
						cout << "\n genero; " << witt[p].gen << endl;
						cout << "\n precio; " << witt[p].precio << endl;
						cout << "\n impuesto; " << witt[p].impuesto << endl;
						cout << "\n $total$" << witt[p].total << endl;

						cout << "\n\n";

					}
					if (witt[p].id == 0)
					{
						p = 100;
					}

				}

				cout << "buscar otra genero o salir de la busqueda: " << endl;

				cout << "selecciona 1 para continuar o 2 para volver al menu de busqueda: " << endl;

				cin >> detener;

				if (detener == 1)
				{
					hub = 1;
				}

				if (detener == 2)
				{

					hub = 0;
				}

			}
			break;
		}

		case 4:
		{
			loop = false;
			break;
		}

		default:
		{
			cout << "El valor agregado no es ecistente, vuelvalo a intentar...";
		}
		break;
		}

	}
}

void borrar()
{
	cout << "\n Ingresa el año que desas borrar: " << endl;

	while (true)
	{
		cin >> wawa;
		if (!std::cin.good())
		{
			std::cout << "ERROR\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}

	for (int i = 0; i < 100; i++)
	{
		if (witt[i].anio == wawa)
		{

			witt[i].nombre = "0";
			witt[i].anio = 0;
			witt[i].cla = "0";
			witt[i].car = "0";
			witt[i].des = "0";
			witt[i].gen = "0";
			witt[i].precio = 0;
			witt[i].impuesto = 0;
			witt[i].total = 0;
		}
		if (witt[i].nombre == "0")
		{
			/*for (int i = 0; i < 99; i++)
			{*/
			witt[i].id = witt[i + 1].id;
			witt[i].nombre = witt[i + 1].nombre;
			witt[i].anio = witt[i + 1].anio;
			witt[i].cla = witt[i + 1].cla;
			witt[i].car = witt[i + 1].car;
			witt[i].des = witt[i + 1].des;
			witt[i].gen = witt[i + 1].gen;
			witt[i].precio = witt[i + 1].precio;
			witt[i].impuesto = witt[i + 1].impuesto;
			witt[i].total = witt[i + 1].total;
			/*}*/
		}


	}
	cout << "tu articulo a sido borrado si es que existe verifiaca en la parte de lista de articulos" << endl;
}

void modificar()
{
	cout << "lista de articulos para modificar" << endl;
	MOS = 1;
	y = 0;
	while (MOS)
	{

		cout << "\n numero de ID; " << witt[y].id << endl;
		cout << "\n nombre; " << witt[y].nombre << endl;
		cout << "\n año de salida; " << witt[y].anio << endl;
		cout << "\n clasificacion; " << witt[y].cla << endl;
		cout << "\n caracteristicas; " << witt[y].car << endl;
		cout << "\n descripcion; " << witt[y].des << endl;
		cout << "\n genero; " << witt[y].gen << endl;
		cout << "\n precio; " << witt[y].precio << endl;
		cout << "\n impuesto; " << witt[y].impuesto << endl;
		cout << "\n $total$" << witt[y].total << endl;

		cout << "\n\n";

		y++;

		if (witt[y].id == 0)
		{
			MOS = 0;
		}

	}

	contador = 0;

	papa = 1;
	while (papa)
	{
		cout << "ingresa el id del articulo a modificar" << endl;

		while (true)
		{
			cin >> mod;
			if (!cin.good())
			{
				cout << "ERROR, usa un numero entero\n";
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				break;
		}

		for (int j = 0; j < 100; j++)
		{
			if (mod == witt[j].id)
			{
				cout << "\nnombre del juego: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, witt[j].nombre);

				cout << "\nfecha de lanzamiento: ";

				while (tu)
				{
					cin >> witt[j].anio;
					if (!cin.good())
					{
						cout << "\nERROR, ingresa el anio de salida\n";
						cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					else
						break;
				}


				cout << "\nclasificacion: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cin >> witt[j].cla;

				cout << "\ncaracteristicas del juego: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, witt[j].car);

				cout << "\ndescripcion del juego: ";
				getline(cin, witt[j].des);

				cout << "\ngeneros: ";
				getline(cin, witt[j].gen);

				cout << "\nprecio unitario: ";

				while (true)
				{
					cin >> witt[j].precio;
					if (!std::cin.good())
					{
						std::cout << "\nERROR...ingresa el precio sin caracteres o simbolos, solo se permiten enteros\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					else
						break;
				}



				witt[j].impuesto = witt[j].precio * 0.16;
				cout << "\nimpueto del juego: " << witt[j].impuesto;


				witt[j].total = witt[j].impuesto + witt[j].precio;

				cout << "\n$total$: " << witt[j].total;

				cout << "\n¿Quieres modificar otro articulo? \nselecciona 1 para continuar o 2 para volver al menu: " << endl;

				while (true)
				{
					cin >> detener;
					if (!std::cin.good())
					{
						std::cout << "\nERROR...ingresa el precio sin caracteres o simbolos, solo se permiten enteros\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					else
						break;
				}
				if (detener == 1)
				{
					papa = 1;

				}

				if (detener == 2)
				{
					j = 100;
					papa = 0;
				}


			}



		}

		cout << "\nlista con el articulo modificado" << endl;

		MOS = 1;
		y = 0;
		while (MOS)
		{

			cout << "\n numero de ID; " << witt[y].id << endl;
			cout << "\n nombre; " << witt[y].nombre << endl;
			cout << "\n año de salida; " << witt[y].anio << endl;
			cout << "\n clasificacion; " << witt[y].cla << endl;
			cout << "\n caracteristicas; " << witt[y].car << endl;
			cout << "\n descripcion; " << witt[y].des << endl;
			cout << "\n genero; " << witt[y].gen << endl;
			cout << "\n precio; " << witt[y].precio << endl;
			cout << "\n impuesto; " << witt[y].impuesto << endl;
			cout << "\n $total$" << witt[y].total << endl;

			cout << "\n\n";

			y++;

			if (witt[y].id == 0)
			{
				MOS = 0;
			}

		}
	}



}

void leer()
{
	ifstream archivo;
	archivo.open("welcometochilis.txt");


	if (archivo.fail())
	{
		cout << "\nNo se encontro ningun archivo" << endl;
		system("pause");
		return;
	}

	int i = 0;
	while (!archivo.eof())
	{
		getline(archivo, linea);
		witt[i].id = stoi(linea);
		getline(archivo, linea);
		witt[i].nombre = linea;
		getline(archivo, linea);
		witt[i].anio = stoi(linea);
		getline(archivo, linea);
		witt[i].cla = linea;
		getline(archivo, linea);
		witt[i].car = linea;
		getline(archivo, linea);
		witt[i].des = linea;
		getline(archivo, linea);
		witt[i].gen = linea;
		getline(archivo, linea);
		witt[i].precio = stof(linea);
		getline(archivo, linea);
		witt[i].impuesto = stof(linea);
		getline(archivo, linea);
		witt[i].total = stof(linea);

		i++;
		cout << "\n\n";
	}
	cout << "\nEl archivo se cargo correctamente.\n";
	archivo.close();
}

void guardar()
{
	ofstream archivo;
	archivo.open("welcometochilis.txt");

	if (archivo.fail())
	{
		cout << "\nNo se pudo encontrar el archivo." << endl;

	}
	MOS = 1;
	y = 0;
	while (MOS)
	{
		archivo << "numero de id: " << witt[y].id << endl;
		archivo << "nombre: " << witt[y].nombre << endl;
		archivo << "año del juego: " << witt[y].anio << endl;
		archivo << "clasificacion: " << witt[y].cla << endl;
		archivo << "caracteristicas: " << witt[y].car << endl;
		archivo << "descripcion: " << witt[y].des << endl;
		archivo << "generos: " << witt[y].gen << endl;
		archivo << "precio: " << witt[y].precio << endl;
		archivo << "impuesto: " << witt[y].impuesto << endl;
		archivo << "precio total: " << witt[y].total << endl;

		cout << "\n\n";

		y++;

		if (witt[y].id == 0)
		{
			MOS = 0;
			cout << "\nSe guardo correctamente el archivo." << endl;
			system("pause");
		}
	}
	archivo.close();
}