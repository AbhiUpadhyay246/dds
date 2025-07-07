#include <iostream>
using namespace std;
#define size 6
int stack[size];
int top=-1;
void push(int num){
    if(top<size){
        top++;
        stack[top]=num;
        cout<<" push can sucessful\n";
    }
    else{
        cout<<"stack is over flow";
    }
}
void pop(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"pop can sucesssful"<< stack[top--]<< endl;
    }
}

int main() {
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    pop();
    pop();
    pop();
pop();
    return 0;
}
