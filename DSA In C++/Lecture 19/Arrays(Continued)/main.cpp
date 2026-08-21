#include <iostream>
using namespace std ;

// MEMORY ALLOCATION OF AN ARRAY

// When an array is declared, contiguous memory locations are allocated to store all its elements. The amount of 
// memory depends on the number of elements × size of each element.
// If an int occupies 4 bytes, then:
// Memory allocated = 5 × 4 = 20 bytes
// The elements are stored one after another in memory:

// arr[0] → arr[1] → arr[2] → arr[3] → arr[4]

// The address of each next element is obtained by adding the size of the data type. This contiguous 
// allocation makes accessing an array element using its index very fast, i.e. O(1) time complexity.


// PASSING ARRAY AND SIZE TO FUNCTION

// When we come to the common datatypes of C++ we see that if we take any input in the main fuction , write the same function 
// in any other function(other than main), change the input taken in the main and print in from the main function , in that case 
// the value of the variable remains same as given in the main fuction . But in the case of arrays it is not like this and the 
// value will change as per the input in the other fuction(if we change there).
 
    // void change(int y[]){
    // y[2] = 48 ;
    // }
    // int main(){
    //      int arr[] = {23 , 45 , 88 , 92} ;
    //      change(arr) ;
    //     cout << arr[2] ;
    // }


