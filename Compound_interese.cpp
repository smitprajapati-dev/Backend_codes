#include<bits/stdc++.h>

using namespace std;

int main(){
    double principle = 10000,rate = 5, time = 2;
    double a = principle * ((pow((1 + rate/100),time)));
    double CI = a - principle;
    cout << "Compount interest is : " << CI ;

    return 0;
}
