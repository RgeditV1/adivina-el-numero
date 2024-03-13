#include "src/heads/logica.h"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::cin;

//sel es para la eleccion, y mostrar es para mostrar el numero de intentos y nR es la variable que alamacenara el numero random
int sel, mostrar, nR;

int genRand(int n = 0) // Genera el numero random
{
	int nr = 1 + rand() % n;
	return nr;
}

int comprobar(int n, int r) //logica del programa
{
	int resultado = n-r;
	
	
	if (resultado == 0)
	{
		cout<<"\nCongratulaciones! has acertado.\n";
		return 0; //0 si acertaste
	}
	else if (resultado !=0 && resultado > 2 || resultado < -3)
	{
		cout << "\nIntenta de nuevo\n";
		return 1; //1 si no acertaste	
	}
	else
	{
		cout << "\nEstas muy cerca\n";
		
		return 1;
	}
}
//FIN DE COMPROBAR

//NIVELES DE DIFICULTADS Y FUNCIONES RECURSIVAS

void facil(int intentos = 10)
{
	int& mostrar = intentos;

	if(mostrar > 0) // si es mayor a cero se ejecutara todo aqui debajo
	{ 
		int op; //variable para insertar numero
		

		cout << "\nTienes " << mostrar <<" intentos";
		cout << "\nmmmm.. En que numero estoy pensado ahora?: ";

		cin >> op;

		

		int res = comprobar(op, nR); //dependiendo de lo que retorne, se repetira o no esta funcion

		if (res == 1) { return facil(intentos - 1); } //si el resultado retorna 1 entonces se restara un intento
	}
	else
	{
		cout << "\nHas Perdido, el numero era "<<nR;
	}
	
}

void normal(int intentos = 5)
{
	int& mostrar = intentos;

	if (mostrar > 0)
	{
		int op;

		cout << "\nTienes " << mostrar << " intentos";
		cout << "\nmmmm.. En que numero estoy pensado ahora?: ";

		cin >> op;

		int res = comprobar(op, nR);

		if (res == 1) { return facil(intentos - 1); }
	}
	else
	{
		cout << "\nHas Perdido, el numero era " << nR;
	}
}

void dificil(int intentos = 3)
{
	int& mostrar = intentos;

	if (mostrar > 0)
	{
		int op;

		cout << "\nTienes " << mostrar << " intentos";
		cout << "\nmmmm.. En que numero estoy pensado ahora?: ";

		cin >> op;

		int res = comprobar(op, nR);

		if (res == 1) { return facil(intentos - 1); }
	}
	else
	{
		cout << "\nHas Perdido, el numero era " << nR;
	}
}



void menu(void)
{
	bool on = true;
	while(on)
	{
		cout << "\n[1]Facil\n";
		cout << "[2]Medio\n";
		cout << "[3]Dificil\n";
		cout << "[4]Salir\n";

		cout << "!Ingresa un numero: "; cin >> sel;

		//Selector de dificultad
		switch (sel)
		{
		case 1:
			cout << "\n\tNivel Facil: adivina el numero del 1 al 10\n";
			nR = genRand(10);
			facil();
			break;

		case 2:
			cout << "\n\tNivel Normal: adivina el numero del 1 al 20\n";
			nR = genRand(20);
			normal();
			break;

		case 3:
			cout << "\n\tNivel Dificil: adivina el numero del 1 al 50\n";
			nR = genRand(50);
			dificil();
			break;

		case 4:
			on = false;
			break;

		default:
			cout << "Elije una opcion valida";
			break;
		}
	}
}