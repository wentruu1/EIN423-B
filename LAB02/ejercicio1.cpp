#include <iostream>

using namespace std;

int main(){
	int x,y;
	cout<<"Ingrese un numero: ";
	cin>>x;
	cout<<"Ingrese otro numero: ";
	cin>>y;
	if(x>y){
		cout<<x<<" es mayor.";
	}
	else{
		cout<<y<<" es mayor.";
	}
	return 0;
}
