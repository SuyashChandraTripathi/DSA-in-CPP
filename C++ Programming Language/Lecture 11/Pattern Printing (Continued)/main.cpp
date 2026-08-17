#include <iostream>
#include <cmath> 
using namespace std ;
int main (){

// Print the given pattern
// 1
// 0 1 
// 1 0 1 
// 0 1 0 1
    //  int r ;
    //  cout << "Enter the number of rows: " ;
    //  cin >> r ;
    //  for (int i = 1 ; i <= r ; i++){
    //     for (int j = 1 ; j <= i ; j++){
    //         if ((i==j) || ((i - j) % 2 == 0) || ((j - i) % 2 == 0)) cout << "1 " ;
    //         else cout << "0 " ;
    //         cout << "  " ;
    //     }
    //     cout << endl ;
    //  }


// Print the given pattern -->
//       *
//     * *
//   * * *
// * * * *
    //   int r ;
    //   cout << "Enter the number of rows: " ;
    //   cin >> r ;
    //   for (int i = 1 ; i <= r ; i++){
    //     for (int j = 1 ; j <= r ; j++){
    //         if ((i + j) > r) cout << "* " ;
    //         else cout << "  " ;
    //     }
    //     cout << endl ;

    
      int n ;
      cin >> n ;
      for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j<= n ; j++){
            if ((i == n) || (j == 1) || (i == j))cout << "* " ;
            else cout << "  " ;
            cout << "  " ;
        
        }
    cout << endl ;
    }
}