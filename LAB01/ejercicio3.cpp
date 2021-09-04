#include <iostream>
using namespace std;

int main(){
	float x;
	cout<<"Ingrese la cantidad de memoria (en Gigabytes): ";
	cin>>x;
	cout<<x*1024<<" Megabytes | "<<x*1048576<<" Kilobytes | "<<x*1073741824<<" Bytes";
	return 0;
}
