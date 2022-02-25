#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	int menu;
	int salir;

	cout << "Bienvenido al consultorio dental, por favor seleccione una opcion del 1 al 6" << endl;
	cout << "1. Agendar cita" << endl;
	cout << "2. Modificar cita" << endl;
	cout << "3. Eliminar cita" << endl;
	cout << "4. Lista de citas vigentes" << endl;
	cout << "5. Limpiar pantalla" << endl;
	cout << "6. Salir" << endl;
	cin >> menu;

	switch (menu)
	{
	case 1: cout << "Selecccionaste: Agendar cita " << endl; break;
	case 2: cout << "Selecccionaste:Modificar cita " << endl; break;
	case 3: cout << "Selecccionaste: Eliminar cita " << endl; break;
	case 4: cout << "Selecccionaste: Lista de citas vigentes " << endl; break;
	case 5: cout << "Selecccionaste: Limpiar pantalla " << endl; break;
	case 6: cout << "Deseas salir? SI o NO" << endl;
		cout << "1. SI" << endl;
		cout << "2. NO" << endl;
		cin >> salir;
		if (salir == 1) 
		{
			return 0;
		}
		else
		{
			return main();
		}
		break;
	default: cout << "debes escoger una opcion valida";
	}
	system("pause");
}
