#include <iostream>
#include <set>

using namespace std;

int countDigits(int number, int nbr){
    if(number < 0) return -1;
    int count = 0;
    if(number % 10 == number && number == nbr) return count+1;
    bool  found = false;
    int remainder = 0;
    set<int> unique;
    while(number > 0 ){
        remainder = number % 10;
        if(remainder == nbr && !(unique.insert(remainder).second)) {
            found = true;
            count++;
        };

        number /= 10;
    }
    if(found) return count+1;
    else return 0;
}


int main(){
    int digits = countDigits(3, 3);
    cout << digits;
}

