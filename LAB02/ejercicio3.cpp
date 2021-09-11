#include <iostream>

using namespace std;

int main(){
	int x, producto;
	cout<<"Ingrese un numero: ";
	cin>>x;
	producto = x;
	while(x>1){
		producto *= (x-1);
		x -= 1;
	}
	cout<<"El factorial del numero es "<<producto<<".";
	return 0;
}
