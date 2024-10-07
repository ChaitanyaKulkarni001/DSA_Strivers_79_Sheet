#include<iostream>
using namespace std;

// Solution 2
/*
int ecludian(int m , int n){
        if (m == 0){
            return n;
        }
        int max_val = max(m,n);
        int min_val = min(m,n);
        return ecludian(max_val%min_val,min_val);
    }
*/
int main(){

    // Solution 1 for HCF
    /*
    int num1 = 11;
    int num2 = 13;
    cout<< " Highest Common Factor -> ";
    int HCF = 1;
    // cout << min(num1,num2);
    for (int i=1;i<=min(num1,num2);i++){

        if (num1%i == 0 && num2%i == 0){
            HCF = i;
        }
    }
    cout << "HCF is " << HCF ;
    */

    // Solution 2 for HCF
    /*
    int num1 = 11;
    int num2 = 13;
    cout << ecludian(num1,num2);
    */
     
    return 0;
}

