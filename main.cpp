#include <iostream>
using namespace std;

int main() {
   int n=0, x1=0, x2=1, x3=x1+x2;
   cin >> n;
   if (!(n==0)){
      cout << x2 << endl;
      for (int i=2; i<=n; i++){
         if (x3<=n){
            cout << x3 << endl;
            x1 = x2;
            x2 = x3;
            x3 = x1 + x2;
          }
       }
   }  
   return 0;
}
