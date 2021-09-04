#include <iostream>
using namespace std;
int main(){
	int hh,mm,ss;
	cout<<"Horas (0-23): ";
	cin>>hh;
	cout<<"Minutos (0-59): ";
	cin>>mm;
	cout<<"Segundos (0-59): ";
	cin>>ss;
	cout<<"Faltan "<<23-hh<<" Horas, "<<59-mm<<" Minutos, "<<60-ss<<" Segundos.";
}
