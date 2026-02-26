#include <iostream>
using namespace std ;
int main()
{
   int a , b ;
   cin >> a >> b ;
   bool found = false ;
   for (int i = a ; i <= b ; i++){
       bool p = true ;
       string x = to_string(i);
       for (int j = 0 ; j < x.length() ; j++){
           if (x[j]!= '7' && x[j]!= '4'){
               p = false ;
               break ;
           }
       }
       if (p == true){
           cout << i << " " ;
            found = true ;
       }
       
   }
   if (found == false){
       cout << -1 ;
   }
}
/*ف الاول بنمسكهم رقم رقم ونحوله ل سترينج */ 
/*نمسك كل سترنج لو فيه حرف واحد مش 4 او 7 منطلعهوش غير كد نطبعه */
