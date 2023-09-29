#include<iostream>
using namespace std;
int main(){
    int l,h;
    //here l is low no and h is high no 
    cout<<"enter low no";
    cin >> l;
    cout<<"enter high no";
    cin >> h;
    for(int n=l; n<=h; n++){
        int f = 0;
        for(int div=2; div*div<=n; div++){
            if(n%div==0){
                f=f+1;
                break;
            }
        }
        if(f==0){
            cout<<n<<endl;
        }
    }
}
