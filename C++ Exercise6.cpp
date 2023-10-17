#include <iostream>
using namespace std;

long long oddProduct(){
    long long product = 1;
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 1 ) product *= i;
    }
    return product;
}

int main(){
    long long product = oddProduct();
    cout << "The product of all odd numbers between 1 and 20 : " << product << endl;
    return 0;
}
