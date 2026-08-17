# include <iostream> 
# include <cmath> 
using namespace std ;
int main () {
int A , B , single_digit_1 , single_digit_2 , count_1 = 0 , count_2 = 0 , absolute_difference = 0 , factor = 0 ;
cin >> A ;
while (A != 0){
    single_digit_1 = A % 10 ;
    count_1 = count_1*10 + single_digit_1 ;
    A /= 10 ;
    
    }
cin >> B ;
while (B != 0){
    single_digit_2 = B % 10 ;
    count_2 = count_2*10 + single_digit_2 ;
    B /= 10 ;
    
}
if (count_1 > count_2) absolute_difference = (count_1 - count_2) ;
else absolute_difference = (count_2 - count_1) ;

for (int i = 1 ; i <= absolute_difference ; i++){
    if (absolute_difference % i == 0) {
    factor++ ;
}    
}
if ( factor >= 3) cout << "Composite" ;
else if (absolute_difference == 0) cout << "Not Prime" ;
else cout << "Prime" ;
}