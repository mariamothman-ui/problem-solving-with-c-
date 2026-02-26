#include <iostream>
#include<algorithm>
using namespace std ;
int main()
{
   while (1){
       int a , b ;
   cin >> a >> b ;
   if (a> 0 && b > 0){
       int sum = 0 ;
   for (int i = min(a,b) ; i <= max(a,b) ; i++){
       cout << i << " ";
       sum+= i ;
   }
   cout << "sum ="<< sum << endl ;
   }
   else {
       break ;
   }
   }
}
