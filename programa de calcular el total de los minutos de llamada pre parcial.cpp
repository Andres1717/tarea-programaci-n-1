//programa hecho por :Andres Isai Vasquez Vasquez, #carnet VV18009

//programa para calcular el total a pagar por cada llamada 

//libreira de entradas y salidas.
#include <iostream>
//libreria para utilizar decimales. 
#include <iomanip>
//libreria para utlizar cosas de windows
#include <windows.h>


float pagarTotal(float llamada);

float pagarTotal(float llamada){
	float resul;
	resul= llamada * 0.05;
	
	return resul;
}

using namespace std;

int main() {

					
cout << "Desarrollado por :@ Andres Isai Vasquez Vasquez: "<< endl; 
					
 
system("pause");

system("color 0A");
	
	//variable para los minutos de la llamada
	float llamada;
	float paga;
	//total de minutos de la llamada
do{	
	cout << "ingresar la cantida de minutos de la llamada : "<< endl;
	cin >> llamada;	
}	
	
//se valida si el usuario a ingresado un dato mayor que cero
while(llamada<=0);
	
	
//minutos de llamada de 1 a 10...	
if (llamada > 1  and llamada <=10   ) {
//total
	cout <<"El total a pagar es de: "<<pagarTotal(llamada);
}	

//minutos de llamada de 11 a 15...
else if (llamada >= 11  and llamada < 15 ) {
//total
paga = llamada * 0.08;
cout <<"El total a pagar es de: "<<paga<<endl;

}		
	
//minutos de una llamada de 15 minutos a mas 	
else if (llamada >= 15   ) {
//total
paga = llamada * 0.10;

//total cuando es mayor de 15 minutos 
cout << fixed << setprecision (2)<< " total a pagar es de: $ " << pagarTotal<<endl;	
}		
			
													
return 0;
}
					
						
