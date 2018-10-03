#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
 int main() {
	float notas[5];
	float suma = 0;
	for(int i=0;i<=4;i++){
		do{
		
			system("cls");
			cout << "Ingrese la nota " << i+1 << endl;
			cin >> notas[i];
		}while(notas[i]<0 || notas[i]>10);
		suma=suma+notas[i];//acumulador
	}
	system("cls");//Limpia la pantalla
	for (int i=0;i<=4;i++){
		cout << "N " << i+1 << ": " << notas[i] << endl;
	}
	cout << endl << "El promedio de notas es de: " << suma/5 << endl << endl;
	
	system("pause");
	return 0;	
}

