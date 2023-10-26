#include <iostream>

using namespace std;

string removeSpaces(const string& sentence){
    string newString;
    for(char i : sentence){
        if(+i == 32) continue;
        else newString += i;
    }
    return newString;
}

int main(){
    string sentence = "I am callled Hakizimana yves";
    string newSentence = removeSpaces(sentence);
    cout << newSentence;
}