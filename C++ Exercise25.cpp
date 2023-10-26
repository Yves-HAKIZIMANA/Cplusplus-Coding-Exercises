#include <iostream>

using namespace std;

int calculateLengthOfString(const string& sentence){
    int count = 0;
    const char* cString = sentence.c_str();
    while(*cString != '\0')  {
        count++;
        cString++;
    }
    return  count;
}

int main(){
    int length = calculateLengthOfString("I am called yves hakizimana");
    cout << "The length of string is : " << length << endl;
}