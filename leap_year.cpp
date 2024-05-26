// #include <iostream>

// using namespace std;

// bool checkYear(int year)
// {
//     if (year % 400 == 0)
//     {
//         return true;
//     }
//     else if (year % 100 == 0)
//     {
//         return false;
//     }
//     else if (year % 4 == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int year = 2024;
//     checkYear(year) ? cout << "leap Year" : cout << "not a lear year";
//     return 0;
// }

// Odd and Even number logic
#include <iostream>

using namespace std;

bool isEven(int n){
    return (n%2 == 0);
}

int main(){
    int n = 100;
    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}