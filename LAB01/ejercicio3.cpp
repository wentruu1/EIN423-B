#include <iostream>
using namespace std;

int main(){
	float x;
	cout<<"Ingrese la cantidad de memoria (en Gigabytes): ";
	cin>>x;
	cout<<x*1000<<" Megabytes | "<<x*1000000<<" Kilobytes | "<<x*1000000000<<" Bytes";
	return 0;
}
