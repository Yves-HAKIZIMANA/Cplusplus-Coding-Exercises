#include <iostream>
#include <vector>
#include <limits>

using namespace std;



int minDistance(int number){
    vector<int > numbers;
    for(int i = 1; i <= number; i++){
        if(number % i == 0) numbers.push_back(i);
    }

    int min = numeric_limits<int>::max();
    for(int i = 1; i < numbers.size(); i++){
        if((numbers[i] - numbers[i -1]) < min)
            min = numbers[i] - numbers[i - 1];
    }
    return min;
}

int main(){
    int result = minDistance(13013);
    cout << "minDistance(13013) = " << result << endl;

    result = minDistance(8);
    cout << "minDistance(8) = " << result << endl;
}

