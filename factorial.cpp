#include <iostream>
using namespace std;

  int factorial(int n){
      if(n==1){
          return 1;
      }
     return n*factorial(n-1);
  }
   
      

int main() {
    cout <<"enter a number =";
    int n;
    
    cin >> n;
     
   int b= factorial(n);
  cout <<b;
    return 0;
}
