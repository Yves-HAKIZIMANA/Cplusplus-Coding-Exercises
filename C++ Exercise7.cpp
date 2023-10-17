#include <iostream>

using namespace std;

bool checkIsPrime(int number){
    if(number == 1 || number == 0) return false;
    bool flag = true;
    for(int j = 2; j < number ; j++){
        if(number % j == 0 ) {
            flag = false;
            break;
        }
    }
    return flag;
}


size_t product(){
    long product = 1;
    for(int i = 1; i < 100; i++){
        if(checkIsPrime(i)) product *= i ;
    }
    return product;
}

int main(){
    size_t result;
    result = product();
    cout << "The product of prime numbers btn 1 and 100 is " << result;
}