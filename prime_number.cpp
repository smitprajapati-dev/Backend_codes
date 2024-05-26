// #include<iostream>

// using namespace std;

// bool isPrime(int n){
//     if(n <=1)
//         return false;
    
//     for(int i = 2; i<=n / 2; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
    
//     return true;

// }

// int main(){
//     isPrime(11) ? cout<<"true \n": cout<<"false \n";
//     isPrime(15) ? cout<<"true \n": cout<<"false \n";

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n == 1 || n==0) return false;

    for(int i = 2 ; i < n; i++){
        if(n % i ==0) return false;
    }
    return true;
}

int main(){
    int n = 100;    

    for (int i = 0; i <=n; i++)
    {
       if(isPrime(i)){
        cout << i <<" ";
       }
    }
    


    return 0;
}

// // C++ program to display 
// // Prime numbers till N
// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n)
// {
// 	if(n == 1 || n == 0) return false;

// 	for(int i = 2; i <= n / 2; i++) 
// 	{
// 		if(n % i == 0) return false;
// 	}
// 	return true;
// }


// int main()
// {
// 	int N = 100;


// 	for(int i = 1; i <= N; i++)
// 	{
// 		if(isPrime(i)) 
// 		{
// 		cout << i << " ";
// 		}
// 	}

// 	return 0;
// }
