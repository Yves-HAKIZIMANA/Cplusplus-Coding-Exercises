#include <iostream>
#include <string>
using namespace std;

int detectNumberOfSpaces(const string& sentence){
    int count = 0;
    for(char i : sentence) if(+i == 32) count++;
    return count;
}

int main(){
    int numberOfSpaces  = detectNumberOfSpaces("I am called yves");
    cout << "Number of spaces is : " << numberOfSpaces << endl;
}
