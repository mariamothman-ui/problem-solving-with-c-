#include <iostream>
using namespace std ;
int main()
{
   int n ; 
   cin >> n ;
   for (int i = 0 ; i < n ; i++){
       string x ;
       cin >> x ;
       for (int i = x.length()-1 ; i >= 0 ; i--){
           cout << x[i] << " ";
       }
       cout << endl ;
   }
}
