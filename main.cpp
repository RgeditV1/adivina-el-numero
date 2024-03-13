#define TITLE 'Adivina el numero'
#define AUTHOR 'RgeditV1'
#define VERSION '1.1'

#include "src/heads/logica.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
	//Mensaje de Bienvenida
	cout << "\tBIENVENIDO A ADIVINA EL NUMERO\n";
	cout << "Selecciona el nivel de dificultad\n";
	
	menu();


} //END MAIN


/*----------------------------------------------------------------------------------------------------------------------*/

// antigua logica
#if 0
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
#endif