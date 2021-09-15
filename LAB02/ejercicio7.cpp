#include <iostream>
#include <time.h>

using namespace std;

int main(){
	char flag = 'S';
	while(flag == 'S'){
		srand(time(NULL));
		int num = 1 + rand()%100, i = 0, c;
		bool band = false;
		cout<<"\nAdivina el numero!\n"<<endl;
		while(i<5 && not band){
			cout<<"[Intento "<<i+1<<"] Ingresa un numero: ";
			cin>>c;
			if(c==num){
				band = true;
			}
			else if(c>num){
				cout<<"El numero que estas buscando es menor al que ingresaste"<<endl;
			}
			else{
				cout<<"El numero que estas buscando es mayor al que ingresaste"<<endl;
			}
			i+=1;
		}
		if(band){
			cout<<"\n¡Felicidades! Adivinaste el numero ("<<num<<") en "<<i<<" intentos.";
		}
		else{
			cout<<"\nTe quedaste sin intentos :(";
		}
		cout<<"\n¿Quieres seguir jugando? (S/N): ";
		cin>>flag;
	}
}
