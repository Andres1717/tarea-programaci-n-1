//programa hecho por : Andres Isai Vasquez Vasquez. Carnet VV18009

// sistema que uitliza las funciones de (fibonacci,taylor y que guarde cada opercion realizada y lo muestre )

#include <iostream>// esta librearia es de entrada y salida
#include <cstdlib>//Contiene los prototipos de las funciones, macros, y tipos para utilidades de uso general.
#include <math.h>// Contiene los prototipos de las funciones y otras definiciones para el uso y manipulación de funciones matemáticas.
#include <fstream> //Flujos hacia/desde ficheros. Permite la manipulación de archivos desde el programar, tanto leer como escribir en ellos.
#include <string>/*Parte de la STL relativa a contenedores tipo string;
 una generalización de las cadenas alfanuméricas para albergar cadenas de objetos.
 Muy útil para el fácil uso de las cadenas de caracteres, pues elimina muchas d elas dificultades que generan los char*/
#include <sstream> 
#include <conio.h>/*La librería conio se utiliza más que nada por sus comandos: 
getch(), clrscr(), gotoxy(), textcolor(), y textbackground(), */

#include <windows.h>//libreria para utlizar cosas de windows

using namespace std;
// tipos de variable que se utilizo en el sistema 
void menu();

void fibo(); 
void taylor();
double tay(int n, int x);
double factorial(int n);
void finalizar();
int escribir(int o, string n, string d, string r);
void leer();

int main(){
 
 system("color 0A");// esto sirve para cambiar el color en pantalla 
 
 
   menu();
  
}
void menu(){

    system("cls");// sirve para limpiar la pantalla 

	int n;

	cout<<"-- Menu Principal --"<<endl;// utilizamos un cout para el menu 
	cout<<endl;// salto de linea
	cout<<"1. Resolver Fibonacci"<<endl;//la primer opcion en el menu que es pedir el fibonacci 
	cout<<"2. Serie de Taylor"<<endl;//segunda opcion que es para la serie de taylor 
	cout<<"3. Ver resultados"<<endl;// opcion en donee mostrara el resultado de las dos operaciones anteriores 
	cout<<"4. Salir"<<endl;//opcion salir 
	cout<<endl;
	cout<<"Elija una opcion: "; cin>>n;
	system("cls");

	// aqui se empieza para el menu 
	switch(n){

		// caso 1 para el fibinacci 
		case 1:

			fibo();

			break;
		
		//caso 2 para taylor 
		case 2:

			taylor();

				break;
		
		//caso 3 leer operaciones 
		case 3:

		leer();

				break;
		
		//caso 4 finalizar 
		case 4:

		    finalizar();
			break;

	}

}
// esta funcion no devuelve ningun valor 
void fibo(){
	
	string nom = "Fibonacci";
 	//variables del fibonacci
    int i, n, cont = 0; 
    long long int a[100];
    
    stringstream ss;   
    a[0] = 0;
    a[1] = 1;
 
    cout << "Numero de terminos de la serie = "; 
    cin >> n; 
    cout << "\n";
    
    //ciclo for 
    for(i=1; i < n; i++){
 
        a[i+1] = a[i-1] + a[i]; 
    }
 
     for(i=0; i < n; i++){
 
        if (cont == 10){ 
 
            cout << "\n";
            cont = 0;           
        }
        cout << a[i] << " ";
        cont += 1;  
        
        
  	ss<< a[i] << " ";    
   
     }  
    cout << "\n";
     stringstream sq;    
  	sq<<"Terminos de la serie: "<<n;       
    string datos= sq.str();
    string res= ss.str();
    escribir(1, nom, datos, res);
    
    getch();
    menu();
}

//funcion no devuelve ningun valor 
void taylor(){
	
	//variables para la serie de taylor
	int n;
	int x;
	double res;
	string nom = "Serie de Taylor";
	cout<<"Ingrese valor de n: "; cin>> n;
	cout<<"Ingrese valor de x: "; cin>> x;
	cout<<endl;
    res = tay(n,x);
	cout<<"El valor de Taylor para n= "<<n<<" y x= "<<x<<" es igual a: "<<res<<endl;
	
	
    stringstream ss;    
  	ss<<"n= "<<n <<" y x= "<<x;       
    string datos= ss.str();
     stringstream sr;    
  	sr<<"El resultado es: "<<res;       
    string re= sr.str();
	escribir(2, nom, datos, re);
	
	getch();
	menu();
}

double tay(int n, int x){
	
	// variable la cual sirve para valores decimales 
	double t;
	double s;
	
	for (int i = 0; i < n; i++){
		
		t = pow(x, i) / factorial(i);
		s += t;
	}
	return s;
}

double factorial(int n){
	// variable la cual sirve para valores decimales 
	double fact =1;
	for(int i= 2; i<=n; i++){
		fact*=i;
	}
	return fact;
}
int escribir(int o, string n, string d, string r){
	
	fstream file("registro.txt", ios::in | ios::out | ios::app);
  
  if (!file.is_open()){
  	
  	cout<<"Error al abrir archivo";
  	
  }else{
  	
  	cout<<"Archivo abierto correctamente"<<endl;
  	
  	cout<<"Escribiendo en el archivo"<<endl;
  
  //guardando en el archivo
  //Convert TO STRING
    
    
    
    stringstream sa;
  	sa<<o;
  	string opcion= sa.str();
          
    string nombre = n;
  	string datos = d;
   
  	string resultado=r;
    	
  	file<<opcion<<" - "<<nombre<<" - "<<datos<<" - "<<resultado<<endl;
}
return 0;
}

void leer(){
	
		fstream file("registro.txt", ios::in | ios::out | ios::app);
  
  if (!file.is_open()){
  	
  	cout<<"Error al abrir archivo";
  	
  }else{
  	
  		file.seekg(0);
  	string line;
  	cout<<"-Registro-"<<endl;
  	while(file.good()){
  		
  		getline(file, line);
  		cout << line << endl;
	}
}
getch();
menu();

}
void finalizar(){

cout<<endl;
system("pause");// hace pausa en el sitema 
system("cls");// sirve para limpiar pantalla 

cout<<"*****************"<<endl;
cout<<"*  GRACIAS POR UTILIZAR NUESTROS SERVICIOS  *"<<endl;
cout<<"*****************"<<endl;

}
