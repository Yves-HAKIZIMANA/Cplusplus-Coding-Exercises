#include <iostream>

using namespace std;

int computeQuotient(int& first, int& second){
    return first / second;
}
int computeRemainder(int& first, int& second){
    return first % second;
}

int main(){
    int first = 10;
    int second = 3;
    int quotient = computeQuotient(first, second);
    int remainder = computeRemainder(first, second);
    cout << "Quotient : " << quotient << endl
        << "Remainder : " << remainder << endl;
}