#include <iostream>

using namespace std;

bool es_Primo(int x);

int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	//"n" primeros numeros primos
	int x = 2, k = n;
	cout<<"Los primeros "<<n<<" numeros primos son: "<<endl;
	while(k>0){
		if(es_Primo(x)){
			cout<<x<<" ";
			k-=1;
		}
		x+=1;
	}
	//Factorial de n
	int producto = n, i = n - 1;
	while(i>1){
		producto *= i;
		i -= 1;
	}
	cout<<"\nEl factorial de "<<n<<" es: "<<producto<<endl;
	//Sumatoria de n
	int suma = n, j = n - 1;
	while(j>0){
		suma += j;
		j-=1;
	}
	cout<<"Y la sumatoria de 1 hasta "<<n<<" es: "<<suma;
	return 0;
}

bool es_Primo(int x){
	if(x==4 || x==1){
		return false;
	}
	int y = 2;
	bool band = true;
	while(y<x/2){
		if(x%y == 0){
			band = false;
		}
		y+=1;
	}
	return band;
}
