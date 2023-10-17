#include <iostream>

using namespace std;

void swap(int& a , int& b){
    int temp = a;
    a = b;
    b = temp;

}


int main(){
    cout << "Input the first number : ";
    int a, b;
    cin >> a;
    cout << "Input the second number : ";
    cin >> b;
    swap(a, b);
    cout << "First number after swapping : " << a << endl;
    cout << "Second number after swapping : " << b;
}