#include <iostream>
using namespace std;
  void printcommond(int a,int b){
      if(b==0){
          cout <<"greatest common divisr is=";
          cout << a;
          return;
      }
      int c = a%b;
      printcommond(b,c);
    
   
    }   

int main() {
    
    int a;
    int b;
    cout<<"enter a value of a=";
    cin >> a;
    
    cout << "enter a value of b=";
     cin>> b;
    printcommond(a,b);
  
    return 0;
}
