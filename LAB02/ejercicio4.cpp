#include <iostream>

using namespace std;

bool es_Primo(int x);

int main(){
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
