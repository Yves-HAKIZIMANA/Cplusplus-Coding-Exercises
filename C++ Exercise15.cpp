#include <iostream>
#include <string>

using namespace std;

void inputNames(string firstname, string lastname){
    cout << "Name in reverse is " << lastname << " " << firstname << endl;
}

int main(){
    string firstname, lastname;
    cout << "Input First Name: " ;
    cin >> firstname;
    cout << "Input Last Name: ";
    cin >> lastname;
    inputNames(firstname, lastname);
}