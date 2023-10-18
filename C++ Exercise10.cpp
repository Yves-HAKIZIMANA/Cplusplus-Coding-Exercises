#include <iostream>
using namespace std;

int area(int& length, int& width){
    return width * length;
}

int perimeter(int& length, int& width){
    return (2 * ( width + length));
}

int main(){
    cout << "Enter the length and the width : , " ;
    int length, width;
    cin >> length >> width;
    int pEremiter = perimeter(length, width);
    int aRea  = area(length, width);
    cout << "The area : " << aRea << " m ^ 2" << endl
        << "The Perimeter: " << pEremiter << " m";
}



