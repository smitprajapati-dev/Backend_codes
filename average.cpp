#include<iostream>

using namespace std;

int main(){
    double sum = 0;

    int arr[5] = {12,51,125,16,71} ;
    for(int i =0;i<=5;i++){
        sum += arr[i] / 5;
    }
    cout<<sum;

    return 0;
}