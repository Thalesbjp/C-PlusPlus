#include <iostream>

using namespace std;

float media (float n1, float n2){
    return (n1+n2)/2;
}

int main(){
    float a,b;

    cin >> a >> b;

    cout << media(a,b);

    return 0;
}
