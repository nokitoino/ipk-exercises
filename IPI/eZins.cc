#include <iostream>

using namespace std;
const double e=2.718281;

double pow(double x,double y){
	double z=1;
	for(int i=0;i<y;i++){
		z*=x;
	}
	return z;
}
void differenzExp_d(double z){
	cout << " Differenz zu exp(z): " << z-pow(e,z) << " ";	
}
void differenzExp_f(float z){
	cout << " Differenz zu exp(z): " << z-pow(e,z) << " ";	
}
double zins(double z, int n){
	differenzExp_d(pow((1+z/(double)n),n)-1);
	cout << " effekt. Zinssatz:";
	return pow((1+z/(double)n),n)-1;
	
}
float zins(float z, int n){
	differenzExp_f(pow((1+z/n),n)-1);	
	cout << " effekt. Zinssatz:";
	return pow((1+z/n),n)-1;
}

int main(){
	float z_f=0.06;
	double z_d=0.06;
	float n[8]= {1,4,12,365,365*24,365*24*60,365*24*60*2,365*24*60*60};
	
		for(int i=0; i < 8; i++){
			cout << "Abrechnungsvorgänge: " << n[i] << endl;
			cout << "Double: Zinssatz:" << z_d << zins(z_d,n[i]) << endl;
			cout << "Float: Zinssatz:" << z_f << zins(z_f,n[i]) << endl;		
		}
	return 0;
}

