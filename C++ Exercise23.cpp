#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Detecting number of spaces in the word
int spacesCount(const string& sentence){
    int count = 0;
    for(char i : sentence) if(+i  == 32) count++;
    return count;
}

// Returning number of spaces and words in a sentence
void reportWordsUsage(const string& sentence){
    int spaces = spacesCount(sentence);
    int words = sentence.length() - spaces;
    int length = sentence.length();

    cout << left << setw(10) << "Number of spaces : " << right << setw(10) << spaces << endl;
    cout << left << setw(10) << "Number of Words without spaces : " << right << setw(10) << words << endl;
    cout << left << setw(10) << "Total words with spaces : " << right << setw(10) << length << endl;
}


int main(){
    reportWordsUsage(" I am called cyberknight");
}