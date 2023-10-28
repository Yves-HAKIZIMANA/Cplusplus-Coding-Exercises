#include <iostream>
#include <cmath>

using namespace std;

int differenceOfSumAndSquareOfSums(int limit){
    int sumOfSquares = 0;
    int sumSquared = 0;
    int i = 1;
    while(i <= limit){
        sumSquared += i;
        sumOfSquares += pow(i,2);
        i++;
    }
    sumSquared = pow(sumSquared, 2);
    return sumSquared - sumOfSquares;
}

int main(){
    int sum = differenceOfSumAndSquareOfSums(10);
    cout << sum;
}