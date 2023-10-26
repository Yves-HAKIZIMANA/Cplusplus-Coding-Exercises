#include <iostream>

using namespace std;

void readPrint(){
    int a , b , c;
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout << a;
    }
    else if( b > c){
        cout << b;
    }
    else {
        cout << c;
    }
}




int main(){
    readPrint();
}