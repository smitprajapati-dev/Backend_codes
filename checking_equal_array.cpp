#include<bits/stdc++.h>

using namespace std;

bool checkArrays(int arr1[], int arr2[], int a , int b){
    if(a != b)
        return false;
    
    sort(arr1, arr1 + a);
    sort(arr2 , arr2 + b);
    for(int i = 0 ;i < a;i++){
        if(arr1[i] != arr2[i]) return false;


    }
    return true;
}

int main(){
    int arr1[] = {1,5,2,4,3,6};
    int arr2[] = {4,6,3,2,1,5};
    int N = sizeof(arr1) / sizeof(int);
    int M = sizeof(arr2) / sizeof(int);

    if(checkArrays(arr1, arr2, N, M))
        cout<<"Equal";
    else
        cout<<"not equal";
    
    return 0;
}