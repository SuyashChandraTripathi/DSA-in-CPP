#include <iostream>
#include <iterator>
using namespace std ;
int main (){
    // int marks[] = {23,65,89,73,45,63} ;
    
    // cout << marks[1] << endl ; 
    
    // marks[1] = 54 ;
    // cout << marks[1] << endl ;
    
    // cout << "Enter the updated marks: " ;
    // cin >> marks[1] ;
    // cout << marks[1] << endl ; ;

// SIZE OF ARRAYS
     
    // cout << size(marks) << endl ; //valid only for compiler more updated than C++ 17
    // cout << sizeof(marks)/sizeof(marks[0]) << endl ;

// OUTPUT ARRAY
    
    // int arr[] = {54,33,24,56,8,4,56,78,21,11,99} ;
    // int n = sizeof(arr) / sizeof(arr[0]) ;
    // for (int i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " " ;
    // }

// GARBAGE VALUE

    // int arr[4] ;
    // cout << arr[0] ; // Garbage value

// INPUT

    // int n ;
    // cout << "Enter the size of array: " ;
    // cin >> n ;
    // int arr[n] ;
    // cout << "Enter the elements of array: " ;
    // for(int i = 0 ; i <= n-1 ; i++){
    //     cin >> arr[i] ;
    // }
    // cout << "The array given as input is: " ;
    // for(int i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " " ;
    // }

// INSUFFICIENT ENTRIES INSIDE AN ARRAY
    // int arr[10] = {12 , 23 , 55 , 60 , 53} ;
    // int n = sizeof(arr)/sizeof(arr[0]) ;  
    // for(int i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " " ;
    // }

// EXCESS ENTRIES INSIDE AN ARRAY(WILL GIVE AN ERROR)
    // int arr[5] = {12 , 15 , 65 , 77 , 32 , 45 , 23} ;
    // int n = sizeof(arr)/sizeof(arr[0]) ;
    // for(int i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " " ;
    // }

// AVOIDING GARBAGE VALUE IN AN ARRAY
    // int arr[10] = {} ;
    // int n = sizeof(arr)/sizeof(arr[0]) ;
    // for (int i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " " ;
    // }

// INDEX OUT OF BOUND
    // int arr[] = {12 , 34 , 65 , 77 , 53} ;
    // cout << arr[7] ; // Undefined Behaviour
    // cout << arr[-1] ; // Undefined Behaviour
}