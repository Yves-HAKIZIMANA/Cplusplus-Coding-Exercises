#include <iostream>

using namespace std;

void checkNumber(int number){
    if(number > 0)  cout << "The number is positive";
    else if( number < 0) cout << "The number is negative";
    else cout << "The number is zero";
}

int main(){
    checkNumber(-2);
}