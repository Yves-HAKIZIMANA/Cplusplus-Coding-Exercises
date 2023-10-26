#include <iostream>
#include <string>

using namespace  std;

bool checkPalindrome(string sentence){
    int start = 0;
    int end = sentence.length() -1;
    while(start < end){
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }
    return (start == end);
}

int main(){
    cout << checkPalindrome("nursesru");
}
