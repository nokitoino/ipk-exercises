#include <iostream>

using namespace std;
double determiante(double a, double b, double c, double d){
	return a*d-b*c;
}

int main(int argc, char** argv){

	float i=0.01;
	
	
	//cout.precision(17);
	cout << (1000000*100)-i << endl;
	cout << (double)(determiante(atof(argv[1]),atof(argv[2]),atof(argv[3]),atof(argv[4]))) << endl;
	return 0;
}

//Float hat eine Genauigkeit von 6-7 Ziffern. Bei 100*100 sind wir bei 5 Ziffern, d.h noch eine Genauigkeit von 2 Nachkommastellen wären möglich, aber die dritte Nachkommastelle ist 0 => es wird abgerundet.
