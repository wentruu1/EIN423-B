#include <iostream>

using namespace std;

int main(){
	int x, suma;
	cout<<"Ingrese un numero: ";
	cin>>x;
	suma = x;
	while(x>1){
		suma += x-1;
		x -= 1;
	}
	cout<<"El resultado de la sumatoria es: "<<suma;
}
