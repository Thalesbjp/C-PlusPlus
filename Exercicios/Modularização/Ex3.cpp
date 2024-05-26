#include <iostream>

using namespace std;

float absoluto (float &numero){
    if (numero >=0)
		return numero;
	else 
		return -numero;
}

int main(){
    int quantidade;
    float *numeros;

    cin >> quantidade;
    numeros = new float[quantidade];
    
    for (int i=0; i<quantidade; i++){
		cin>>numeros[i];
	} 
	
	 for (int i=0; i<quantidade; i++){
		cout << absoluto(numeros[i]) << " ";
	} 

    return 0;
}
