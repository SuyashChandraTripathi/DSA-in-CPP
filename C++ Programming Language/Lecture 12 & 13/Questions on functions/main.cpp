#include <iostream>
#include <cmath>
using namespace std ;

// Take 'n' and 'r' as input and print nCr .
    // int fun(int a){
    //     int fact = 1  ;
    //     for (int i = 1 ; i <= a ; i++){
    //         fact *= i ;
    //     }
    //     return fact ;
    // }
    // int main (){
    //     int n , r ;
    //     cin >> n >> r ;
    //     int ncr = (fun(n))/(fun(n-r)*fun(r)) ;
    //     cout << ncr ; 
    // }


// Draw a right angled pascal triangle like -->
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// int fun(int x){
//     int fact = 1 ;
//     for (int i= 1 ; i <= x ; i++){
//         fact *= i ;
//     }
//     return fact ;
// }
// int ncr(int n , int r){
//       return (fun(n))/(fun(n-r)*fun(r)) ;
// }
// int main (){
//     int n , r ;
//     cout << "Enter the value of n: " ;
//     cin >> n ;
//     for(int i = 0 ; i <= n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << ncr(i , j) << " ";
//         }
//         cout << endl ;
//     }
// }