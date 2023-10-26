#include <iostream>
#include <string>

using namespace std;

void reverseString(string& sentence){
    int start = 0;
    int end = sentence.length() - 1;
    while(start < end){
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }
}

int main(){
    string name = "yves";
    reverseString(name);
    cout << name << endl;
}