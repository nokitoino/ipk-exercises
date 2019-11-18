#include <iostream>
#include <string>

using namespace std;

int fiboIter(int n){ // n>=1 !!!
	int a=0, b=1, z=0;
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else if(n<=0){
		return -1;	
	}
	
	cout << a;
	
	cout << "," <<b;
	for(int i=2;i<n;i++){
		z=a+b;
		a=b;
		b=z;
		
		cout << "," << b;
	}
	return b;
	
}
int main(){
	cout << "Bitte geben sie n größer gleich 1 ein" << endl;
	int n;
	cin >> n;
	fiboIter(n);
	return 0;
}
