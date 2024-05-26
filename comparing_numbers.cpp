#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter three numbers you want to compare : "<< endl;
    cin>>a>>b>>c;

    if(a>=b){
        if(a>=c){
            cout<<"The largest number is a"<< a <<endl;
        }
        else{
            cout<<"Ther largesty number is c"<<c<<endl;
        }
    }
    else{
        if(b>=c){
            cout<<"The largest number is b"<<b<<endl;
        }
        else{
            cout<<"The largest number is c"<<c<<endl;
        }
    }
    
    return 0;
}