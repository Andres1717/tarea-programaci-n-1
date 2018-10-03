#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	int x[4][4];
	
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			x[i][j]=0;
		}
	}
	for(int i=0;i<=3;i++){
		x[0][1]=3;
		if(i=3){
			x[3][2]=1;
			x[3][3]=33;
		}
	}
	
	cout << x[0][1] << endl;
	system("pause"); 
	return 0;
}
