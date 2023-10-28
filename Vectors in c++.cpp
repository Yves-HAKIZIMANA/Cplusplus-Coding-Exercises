// Vectors in c++
#include <iostream>
#include <vector>

// What is Vector in c++
/* It is the class template in c++ that contains the vector class and its member functions, and it is a dynamic array with the ability to resize itself, when an element is deleted or inserted
 * begin(): returns an iterator pointing to the first element in the vector
 * end(): returns an iterator pointing to the last element in the vector
 * rbegin(): return a reverse iterator pointing to the last element in the vector
 * rend(): return a reverse iterator pointing to the theoretical element in the vector
 * */

using namespace  std;


int main(){
    vector<int> numbers;
    for(int i = 1; i <= 10; i++)
        numbers.push_back(i);
    cout << "Output of begin and end : ";
    for(auto i = numbers.begin(); i != numbers.end(); ++i){
        cout << *i << " ";
    }
    cout << "Output from  cbegin to cend : ";
    for(auto i = numbers.cbegin(); i != numbers.cend(); ++i){
        cout << *i << " ";
    cout << "Output from rbegin to rend: ";
    }for(auto i = numbers.rbegin(); i != numbers.rend(); ++i){
        cout << *i << " ";
    cout << "Output from crbegin to crend: ";
    }for(auto i = numbers.crbegin(); i != numbers.crend(); ++i){
        cout << *i << " ";
    }

    /* Useful functions to know about the vectors
     * size(): returns number of elements in the vector
     * max_size(): returns number of elements the vector can hold
     * capacity(): returns the size of the storage capacity currently allocated to vector expressed as number of elements
     * resize(n) :resizes the container, so it contains n elements
     * shrink_to_fit(): reduces to the capacity of the container to fit its size and destroys all  elements beyond the capacity
     * reserve(): requests the vector capacity to be latest enough to contain n elements;
     * */
}