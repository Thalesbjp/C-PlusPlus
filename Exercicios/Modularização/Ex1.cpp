#include <iostream>

using namespace std;

float maior (float n1, float n2){
    if (n1 > n2)
        return n1;
    else
    return n2;
}

int main(){
    float a,b;

    cin >> a >> b;

    cout << maior(a,b);

    return 0;
}