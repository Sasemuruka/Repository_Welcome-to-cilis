#include<iostream> 
#include <string>
#include<string.h>
#include <limits>

using namespace std;



char z[100], espacio;
string nombre[30], cla[100], car[100], des[100], gen[100];
int a = 0, i = 0, e = 0, f = 0, j = 0, k = 0, l = 0;
bool b = true;
void main()
{
	while (b)
	{

		system("color 7D");                                         // todo esto pertenece al menu//
		cout << "\n\t====Menu Principal====" << endl;
		cout << "\n\t1. Alta" << endl;
		cout << "\n\t2. limpiar pantalla" << endl;
		cout << "\n\t3. Salir" << endl;
		cout << "\n     ingrese un digito para continuar...";



		cin >> a;                                                              // agregar el valor para la opcion en el switch//




		switch (a)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				e++;
				cout << "\njuego: " << e;


				cout << "\nnombre del juego: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, nombre[29]);

				cout << "\nfecha de lanzamiento: ";
				cin >> f;


				cout << "\nclasificacion: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, cla[99]);

				cout << "\ncaracteristicas del juego: ";
				getline(cin, car[99]);

				cout << "\ndescripcion del juego: ";
				getline(cin, des[99]);

				cout << "\ngeneros: ";
				getline(cin, gen[99]);

				cout << "\nprecio unitario: ";
				cin >> j;

				cout << "\nimpueto del juego: ";
				cin >> k;

				cout << "\n$total$: ";
				cin >> l;



			}
			break;


		case 2:


			system("cls");
			break;

		case 3:

			system("color 72");
			b = false;
			break;

		default:
			cout << "Error... el digito no es valido vuelvelo a intentar...";

		}



		system("pause>null");


	}
}
