#include <iostream>
#include <string>

using namespace std;
int a=0;
int b=1;
int fiboRekursiv(int n){ // n>=1 !!!
	if(n<=0){
		return -1;	
	}
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;	
	} else {
		return fiboRekursiv(n-2)+fiboRekursiv(n-1);
	}
	
	
}
int main(){
	cout << "Bitte geben sie n größer gleich 1 ein" << endl;
	int n;
	cin >> n;
	cout << fiboRekursiv(n);
	return 0;
}
