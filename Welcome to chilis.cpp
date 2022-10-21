#include<iostream> 
#include <string>
#include<string.h>
#include <limits>
#include <conio.h>

using namespace std;


struct sophisticate
{
	float total, precio, impuesto;
	int id, anio;
	string nombre, car, des, gen;
	char cla;
}witt[100];

string usuarios[10];
char clasificacion;
int a = 0, contador = 1, e, detener, wawa, busqueda;
bool b = true, loop = true, buscar = false;

void main()
{
	while (b)
	{

		system("color 0D");                                  // todo esto pertenece al menu//

		cout << "\n Welcome to Chilis " << endl;

		cout << "\n\t====Menu Principal====" << endl;
		cout << "\n\t1. Alta" << endl;
		cout << "\n\t2. limpiar pantalla" << endl;
		cout << "\n\t3. Salir" << endl;
		cout << "\n\t4. lista de articulos vigentes" << endl;
		cout << "\n\t5. borrar articulo" << endl;
		cout << "\n     ingrese un digito para continuar...";



		cin >> a;                                                              // agregar el valor para la opcion en el switch//




		switch (a)
		{
		case 1:

			for (int i = 0; i < contador; i++)
			{

				cout << "\n numero del articulo o id: " << i + 1 << endl;
				witt[i].id = i + 1;

				cout << "\nnombre del juego: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, witt[i].nombre);

				cout << "\nfecha de lanzamiento: ";
				cin >> witt[i].anio;

				cout << "\nclasificacion: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cin >> witt[i].cla;

				cout << "\ncaracteristicas del juego: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, witt[i].car);

				cout << "\ndescripcion del juego: ";
				getline(cin, witt[i].des);

				cout << "\ngeneros: ";
				getline(cin, witt[i].gen);

				cout << "\nprecio unitario: ";
				cin >> witt[i].precio;

				witt[i].impuesto = witt[i].precio * 0.16;
				cout << "\nimpueto del juego: " << witt[i].impuesto;


				witt[i].total = witt[i].impuesto + witt[i].precio;

				cout << "\n$total$: " << witt[i].total;

				cout << "\ndeseas agregar otro producto?: " << endl;
				cout << "selecciona 1 para continuar o 2 para volver al menu: " << endl;

				cin >> detener;

				if (detener == 1)
					contador++;

				if (detener == 2)
					contador = i;
			}
			break;


		case 2:


			system("cls");
			break;

		case 3:

			system("color 72");
			b = false;
			break;


		case 4:

			while (loop)
			{

				cout << "\n Escoge una forma de busqueda " << endl;

				cout << "\n\t Lista completa" << endl;
				/*cout << "\n\t1. Generos" << endl;
				cout << "\n\t2. Clasificaciones" << endl;*/

				cin >> busqueda;



				switch (busqueda)
				{
				case 1:

					for (int i = 0; i < 100; i++)
					{
						cout << "\n numero de ID; " << witt[i].id << endl;
						cout << "\n nombre; " << witt[i].nombre << endl;
						cout << "\n año de salida; " << witt[i].anio << endl;
						cout << "\n clasificacion; " << witt[i].cla << endl;
						cout << "\n caracteristicas; " << witt[i].car << endl;
						cout << "\n descripcion; " << witt[i].des << endl;
						cout << "\n genero; " << witt[i].gen << endl;
						cout << "\n precio; " << witt[i].precio << endl;
						cout << "\n impuesto; " << witt[i].impuesto << endl;
						cout << "\n $total$" << witt[i].total << endl;
					}




					/*	cout << "\ningresa la clsificacin o genero que deseas buscar; " << endl;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cin >> clasificacion;

					for (int i = 0; i < 100; i++)
					{



						if (witt[i].cla == clasificacion)
						{
							cout << "\n numero de ID; " << witt[i].id << endl;
							cout << "\n nombre; " << witt[i].nombre << endl;
							cout << "\n año de salida; " << witt[i].anio << endl;
							cout << "\n clasificacion; " << witt[i].cla << endl;
							cout << "\n caracteristicas; " << witt[i].car << endl;
							cout << "\n descripcion; " << witt[i].des << endl;
							cout << "\n genero; " << witt[i].gen << endl;
							cout << "\n precio; " << witt[i].precio << endl;
							cout << "\n impuesto; " << witt[i].impuesto << endl;
							cout << "\n $total$" << witt[i].total << endl;

							buscar = true;
						}
					}

					if (buscar == false)

					{
						cout << "no se encontro ningun juego... " << endl;
					}

					if (buscar == true)

					{
						loop = false;
					}*/

					break;






				default:
				{
					cout << "El valor agregado no es ecistente, vuelvalo a intentar...";
				}
				break;
				}


			}


			break;
		case 5:

			cout << "Para poder borrar un articulo ingresa su año; " << endl;
			cin >> wawa;

			for (int i = 0; i < 100; i++)
			{
				if (witt[i].anio == wawa)
				{
					witt[i].id = 0;
					witt[i].nombre = "0";
					witt[i].anio = 0;
					witt[i].cla = 0;
					witt[i].car = "0";
					witt[i].des = "0";
					witt[i].gen = "0";
					witt[i].precio = 0;
					witt[i].impuesto = 0;
					witt[i].total = 0;
				}
				if (witt[i].nombre == "0")
				{
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
				}


			}
			break;

		default:
			cout << "Error... el digito no es valido vuelvelo a intentar...";

		}

		system("pause>null");


	}
}