#include <iostream>
using namespace std;
float cal(int a,int b,char op){
    switch(op){
        case '+':
        return a+b;
        break;
        case '-':
        return a-b;
        break;
        case '*':
        return a*b;
        break;
        case '/':
        return b==0 ? -1: a/b;
        break;
        default:
        return -1;
    }
}
int main(){
    int a,b;
    char op;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    cout<<"enter operator : ";
    cin>>op;
    float result = cal(a,b,op);
    if(result == -1){
        cout<<"invalid operator";
    }
    else{
        cout << "Result is: " << result << "\n";
    }

}
