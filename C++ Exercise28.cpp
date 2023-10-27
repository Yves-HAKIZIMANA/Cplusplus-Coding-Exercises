#include <iostream>

using namespace std;

bool isPrime(int number){
    bool isPrime = true;
    if(number == 1 || number == 0) return false;
    else {
        for(int i = 2 ; i < number; i++){
            if(number % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int getNthPrimeNumber(int position){
    int index = 0;
    int number = 0;
    while(index <= position){
        if(isPrime(number)) index++;
        if(index == position) return number;
        number++;
    }
}

int main(){
    cout <<  "Prime number at nth position : " << getNthPrimeNumber(5) <<endl;
}