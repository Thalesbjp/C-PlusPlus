#include <iostream>

using namespace std;

void piramide (int &n){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
		if (j==i)
			cout << j;
		else
			cout << j << " ";
		}
		if (n!=i)
			cout << endl;
	}    
}

int main(){
    int n;
    cin >> n;
    piramide(n);
    return 0;
}
