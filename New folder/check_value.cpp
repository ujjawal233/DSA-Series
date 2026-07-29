#include<iostream>
using namespace std;    
int main() {
    int x,y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    if(x>10 && y>20){
        cout<<"x is greater than 10 and y is greater than 20";
    }
    else if(x>10 || y>20){
        cout<<"x is greater than 10 or y is greater than 20";
    }
    else{
        cout<<"x is not greater than 10 and y is not greater than 20";
    }
}