#include <iostream>

using namespace std;

int sumOfEven(){
    int sum = 0;
    for(int i = 0; i < 100; i++){
        if(i % 2 == 0) sum += i;
   }
    return sum;
}

int main(){
    int sum = sumOfEven();
    cout << "The sum of even numbers below 100 : " << sum << endl;
}