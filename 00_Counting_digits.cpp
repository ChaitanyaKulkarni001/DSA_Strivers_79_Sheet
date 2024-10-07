// #include<iostream.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int num = 4563487;
// Counting digits in a number
    // Solution 1
    /*
    int count = 0;
    while (num>0){
        // last_digit = num%10;
        num = num/10;
        count++;
    }
    cout<< "Numbers are "<< count;
    */

   // Solution 2
   /*
   cout << "NUmbers are "<< (int)log10(num)+1; // Time complexity = O(log10(n))
   */

    // Solution 3
    /*
    cout<< "Numbers are "<< to_string(num).length();
    */



 // Reversing a number
    cout<<"Hello";
    int num = 4563000;
    string number = "";
    string s= to_string(num);
    for (int i=s.length()-1; i>=0;i--){
        number += s[i];
    }
    int i =0;

      while (number[i] == '0') {
        i++;
    }
    
    number = number.substr(i);
    cout << number;





    return 0;
}
