#include <iostream>

using namespace std;
float pow(float x,float y){
	int z=1;
	for(int i=0;i<y;i++){
		z*=x;
	}
	return z;
}
float npow(float x, float y){ //für negative Potenz
	int z=1;
	for(int i=0;i<y;i++){
		z*=x;
	}
	return 1/z;
}
int main(){
	int n = 6;
	cout.precision(17);
	while(n<=14){
		cout << (pow(10,n)+pow(-10,n))+npow(10,n) << " " << pow(10,n)+(pow(-10,n)+npow(10,n)) << endl;	
	n++;	
	}
	cout << "a, b, c" << endl << pow(10,9) << " " << pow(-10,9) << " " << npow(10,9) << endl;
	return 0;
}

//Für n=10, da float Grenze überstiegen wird
// Dürfen wir demnächst auch die <cmath> Bibliothek verwenden? für pow, sqrt ...
