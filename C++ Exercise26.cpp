#include <iostream>

using namespace std;

string  convertToUppercase(string& sentence){
    string newSentence;
    for( char i : sentence) {
        if (+i >= 'a' && +i <= 'z'){
            newSentence += i - ('a' - 'A');
        }
        else
            newSentence += i;
    }
    return  newSentence;
}

int main(){
    string sentence = "Hello, this is a lowercase string.";
    std::string newSentence = convertToUppercase(sentence);
    std::cout << "Original Sentence: " << sentence << std::endl;
    std::cout << "Uppercase Sentence: " << newSentence << std::endl;

}