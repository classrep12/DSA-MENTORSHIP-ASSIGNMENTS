#include<iostream>
using namespace std;

    int main(){

        int i;
        cout<<"Enter marks"<<endl;
        cin>>i;

        if(i>90){
            cout<<"excellent"<<endl;
        }
        if(i>80&i<=90){
            cout<<"good"<<endl;
        }
        if(i>70&i<=80){
            cout<<"fair"<<endl;
         }
        if(i>60&i<=70){
            cout<<"meets expectations"<<endl;
        }
        if(i<=60){
            cout<<"below par"<<endl;
        }
    }
