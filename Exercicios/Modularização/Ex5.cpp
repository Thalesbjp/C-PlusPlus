/*#include <iostream>

using namespace std;

int maior (int);

int main(){
    int n[5], m;
    for (int i=0; i<5; i++){
	 cin >> n[i];
	}  
	for (int i=0; i<5; i++){
	 cout<<n[i] << " ";
	}  
	m = maior(n);
	cout << endl << m;
    
    return 0;
}

int maior (int *n){
	int m = n[0];
	for (int i=1; i<5; i++){
		if (n[i] > m)
			m = n[i];
	}   
	return m; 
}
*/
#include <iostream>
using namespace std;

// Função para calcular o maior elemento dentre cinco inteiros
int maiorElemento(int a, int b, int c, int d, int e) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;
    return maior;
}

// Módulo principal para entrada e saída de dados
int main() {
    int numeros[5];

    // Entrada de dados
    for (int i = 0; i < 5; ++i) {
        cin >> numeros[i];
    }

    // Processamento: Encontrar o maior número
    int maior = maiorElemento(numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    // Saída de dados
    for (int i = 0; i < 5; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl<< maior << endl;

    return 0;
}
