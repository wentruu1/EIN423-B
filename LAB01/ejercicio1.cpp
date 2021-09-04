#include <iostream>
using namespace std;
int main(){
	int x, y, area, perimetro;
	cout<<"Ingrese el largo del rectangulo: ";
	cin>>x;
	cout<<"Ingrese el ancho del rectangulo: ";
	cin>>y;
	area = x*y;
	perimetro = 2*x + 2*y;
	cout<<"Perimetro: "<<perimetro<<" | Area: "<<area<<endl;
	return 0;
}
