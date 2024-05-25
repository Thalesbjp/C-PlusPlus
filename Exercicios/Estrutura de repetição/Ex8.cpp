/*Escreva um programa, que lê um conjunto de fichas, cada uma contendo a altura e o gênero de uma pessoa. O programa deve calcular e escrever a maior altura da turma, a menor altura da turma, a média de altura das mulheres, a média de altura dos homens e a média de altura da turma toda.

Entradas:

a quantidade de fichas (número inteiro positivo)
para cada ficha:
altura (número real positivo)
gênero (letra m ou f)
Saídas:

maior altura da turma
menor altura da turma
altura média entre as mulheres (se não houver mulheres, escrever "erro")
altura média entre os homens (se não houver homens, escrever "erro")
altura média da turma*/

#include <iostream>

using namespace std;

int main (){
	int qM=0, qF=0, n;
	float altura, mAM=0, mAF=0, maior, menor;
	string genero;
	
	cin>>n;
	
	cin>>altura>>genero;
	if (genero == "m"){
		mAM = altura;
		qM++;
	}	
	else{
		mAF = altura;
		qF++;
	}
	maior = altura;
	menor = altura;
	for (int i=1; i<n; i++){
		cin>>altura>>genero;
		
		if (genero == "m"){
			mAM+= altura;
			qM++;
		}	
		else{
			mAF+= altura;
			qF++;
		}
		if (altura < menor){
			menor = altura;
		}else if (altura > maior){
			maior = altura;
		}
		
	}
	cout << maior << endl
		<< menor << endl;
	if (qF == 0)
		cout << "erro" << endl;
	else 
		cout << mAF/qF << endl;
	if (qM == 0)
		cout << "erro" << endl;
	else 
		cout <<  mAM/qM << endl;
		
	cout << (mAF+mAM)/(qM+qF);
	
	
	return 0;
}
