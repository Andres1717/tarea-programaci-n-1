#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){


     srand(time(NULL));

    int matriz[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    for( int i = 0; i < 3; i++ ){

        for( int j = 0; j < 3; j++ ){

            matriz[i][j] = rand() % 101;

            cout<<matriz[i][j]<<"   ";

        }

        cout<<endl;
    }

    cout<<endl;


    for( int i = 0; i < 3; i++ ){

        for( int j = 0; j < 3; j++ ){

            matriz2[i][j] = rand() % 101;

            cout<<matriz2[i][j]<<"   ";

        }

        cout<<endl;
    }

    cout<<endl;
    cout<<"RESULTADO: "<<endl;
    cout<<endl;
    
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            
            resultado[i][j] = matriz[i][j] + matriz2[i][j];
            cout<<resultado[i][j]<<"   ";

        }

        cout<<endl;
        
    }
    


    return 0;
}