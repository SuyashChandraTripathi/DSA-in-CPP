#include <iostream>
#include <cmath> 
using namespace std ;
int main(){

// Make an array by taking the entries input and print the negative elements of the array.
    int a ;
    cout << "Enter the size of the array: ";
    cin >> a ;
    int arr[a] ;
    cout << "Enter the elements of the array: " ;
    for(int i = 0 ; i <= a-1 ; i++){
        cin >> arr[i] ;
    }
    cout << "The negative element of array is: " ;
    for (int i = 0 ; i <= a-1 ; i++){
        if (arr[i] < 0) {cout << arr[i] << " " ;
        } 
    }
}