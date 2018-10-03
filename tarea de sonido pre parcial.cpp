//programa hecho por :Andres Isai Vasquez Vasquez, #carnet VV18009
//Ultima fecha de modificacion 10/09/18

//programa para calcular el salario del empleado segun la ventas realizadas

//libreira deentradas y salidas.
#include <iostream>
//libreria para utilizar decimales. 
#include <iomanip>
#include <windows.h>


using namespace std;

int main() {
	
system("color 0a");
	
	//variable para venta 
	float venta ;
	//variable para sueldo 
	float sueldo ;

	//venta de usuario
do{	
	cout << " ingrese la venta que hizo el vendedor $: "<< endl;
	cin >> venta;	
}	
	
//se valida si el usuario a ingresado un dato mayor que cero
while(venta<=0);
	
	
//venta de $0 a $500000	
if (venta > 0 and venta <= 500000  ) {
//sueldo 
cout <<" su sueldo es de $80.000; ";
}	

//venta de $5000001 a $1000000	
else if (venta > 500001 and venta <= 1000000  ) {
//sueldo
cout <<" su sueldo es de  $160.000; ";
}		
	
//venta de $1000001 a $1500000	
else if (venta > 1000001 and venta <= 1500000  ) {
//sueldo
cout <<" su sueldo es de  $320.000; ";
}		

//venta de $1500001 a $2500000	
else if (venta > 1500001 and venta <= 2500000  ) {
//sueldo
cout <<" su sueldo es de  $450.000; ";
}		

//venta de $2500001 a $4000000	
else if (venta > 2500001 and venta <= 4000000 ) {
//sueldo
cout <<" su sueldo es de  $550.000; ";

}

//venta mayor de $4000000					
else if ( venta > 4000000) {
sueldo = venta * 0.20;

}				
					
//sueldo cuando es mayor que 4000000
cout << fixed << setprecision (8) << " su sueldo es de " << sueldo<<endl;			



	//Impresion de sonido 
	Beep(800,500);
	Beep(587.33,1000);
	Beep(698.46,500);
	Beep(880,500);
	Beep(587.33,1000);
	Beep(698.46,500);
	Beep(880,250);
	Beep(1046.50,250);
	Beep(987.77,500);
	Beep(783.99,500);
	Beep(698.46,250);
	Beep(783.99,250);
	Beep(880,500);
	Beep(587.33,500);
	Beep(523.25,250);
	Beep(659.26,250);
	Beep(587.33,750);


system("pause");
							
return 0;
}
	
