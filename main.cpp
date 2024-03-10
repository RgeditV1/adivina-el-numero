/*Juego de Adivinar el numero*/

//Author: RgeditV1
//Version: 1.0

/*
 puedes hacer PR en este repositorio creando tu propia carpeta,
 se que aun faltan cositas como el contador de intentos, hacer que el numero random entre en un ciclo para que vuelva a generar si fallas...
 pero puedes comentar algunas mejoras o agregar features
 
 en las proximas veriones agregare algunas mejoras, eso si tengo tiempo..
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/* NIVELES DE DIFICULTAD*/

void facil();

void medio();

void dificil();

/*FIN DE LOS PROTOTIPOS*/
int main()
{
	//Mensaje de Bienvenida
	cout<<"\tBIENVENIDO A ADIVINA EL NUMERO"<<endl;
	cout<<"Selecciona el nivel de dificultad\n";
	
	//Variable donde se almacenara la opcion
	int sel = 0;
	
	//Este bucle nos permitirar evaluar cual es la difultad que queremos
	do
	{
		cout<<"[1]Facil"<<endl;
		cout<<"[2]Medio"<<endl;
		cout<<"[3]Dificil"<<endl;
		cout<<"[5]Salir"<<endl;
		
		cout<<"!Ingresa un numero: "; cin>>sel;
		
	}while(sel > 3  || sel < 0);//mientras que sel sea mayor que tres o menor que cero, el bucle continuara
	
	//Evaluara que dificultad va a llamar dependiendo del numero almacenado en la variable sel
	if(sel == 1)
	{
		cout<<"\nTe dare numeros del 1 al 10, tendras que adivinar, Listo?\n";
		cout<<"mmm... en que numero estoy pensando ahora?\n";
		facil();
	}
	else if(sel == 2)
	{
		cout<<"\nTe dare numeros del 1 al 30, tendras que adivinar, Listo?\n";
		cout<<"mmm... en que numero estoy pensando ahora?\n";
		medio();
	}
	else if(sel == 3)
	{
		cout<<"\nTe dare numeros del 1 al 50, tendras que adivinar, Listo?\n";
		cout<<"mmm... en que numero estoy pensando ahora?\n";
		dificil();
	}
	
	return 0;
}

/*	AQUI SE DEFINIRAN LAS FUNCIONES PARA QUE EL JUEGO FUNCIONE */

void facil()
{
	int n = 1 +rand() %10; //Genera un numero aleatorio del 1 hasta el 10
	int res = 0;
	
	cin>>res;
	
	if(res !=n)
	{
		cout<<"Nop.. Fallaste, el numero era: "<<n<<endl;
	}
	else
	{
		cout<<"Grandioso, Acertaste";
	}
		
}

void medio()
{
	int n = 1 +rand() %30;//genera un numero aleatorio del 1 al 30
	int res = 0;
	
	cin>>res;
	
	if(res !=n)
	{
		cout<<"Nop.. Fallaste, el numero era: "<<n<<endl;
	}
	else
	{
		cout<<"Grandioso, Acertaste";
	}
}

void dificil()
{
	int n = 1 +rand() %50;//genera un numero aleatorio del 1 al 50
	int res = 0;
	
	cin>>res;
	
	if(res !=n)
	{
		cout<<"Nop.. Fallaste, el numero era: "<<n<<endl;
	}
	else
	{
		cout<<"Grandioso, Acertaste";
	}
	
}
