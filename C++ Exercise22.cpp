#include <iostream>
#include <string>

using namespace std;

void isAlphaOrIsDigit(char c){
    if(+c >= 48 && +c <= 57)
        cout << "The character entered is a number";
    if(+c >= 65 && +c <= 90)
        cout << "The character entered is an Uppercase letter";
    if(+c >= 97 && +c <= 122)
        cout << "The character entered is an Lowercase letter";
}

int main(){
    isAlphaOrIsDigit('v');
}