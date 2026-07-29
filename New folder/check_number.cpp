#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        cout<<"The number is positive."<<endl;

    
        if(num%2==0){
            cout<<"The number is even.\n";
        }
        else{
            cout<<"The number is odd.";

        
        }
}
    else if(num<0){
        cout<<"Number is non-positive."<<endl;
    }
    else{
        cout<<"The number is zero."<<endl;
    }
}
