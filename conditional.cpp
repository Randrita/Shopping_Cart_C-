#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your age: "<<endl;
    cin >>x;
    
    if (x>110 || x<1){
        cout<<"Invalid age";
    }

    else if (x>=18){
        cout<<"You are eligible to vote";
    } 

    else{
        cout<<"You are not eligible to vote";
    }
    
    return 0;
}