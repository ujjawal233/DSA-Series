#include<iostream>
using namespace std;
int main() {
    int age;
    bool isCitizenship;

    cout<<"Enter your age: ";
    cout<<"Are you a citizen? (1 for yes, 0 for no): ";

    cin>>age;
    cin>>isCitizenship;
    if(age>=18 && isCitizenship==1){
        cout<<"Old enough to vote."<<endl;
        cout<<"And you are a citizen, so you can vote!";
    }
    else{
        cout<<"Not old enough to vote.";
    }
}