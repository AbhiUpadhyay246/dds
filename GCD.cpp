#include <iostream>
using namespace std;
  void printcommond(int a,int b){
      if(b==0){
          cout << a;
          return;
      }
      int c = a%b;
      printcommond(b,c);
    
   
    }   

int main() {
    
    int a=12;
    int b=18;
     
    printcommond(a,b);
  
    return 0;
}
