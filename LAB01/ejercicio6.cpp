#include <iostream>
using namespace std;
int main(){
	//1234
	int x, s = 0;
	cout<<"Ingrese un numero: ";
	cin>>x;
	s += x/1000;
	s += (x/100)%10;
	s += (x/10)%10;
	s += x%10;
	cout<<"La suma de sus digitos es: "<<s;
	
	return 0;
}
