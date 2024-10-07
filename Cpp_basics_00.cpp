#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sum(int* a, int* b){
    // pass by reference
    cout << "Pointers are "<< a<<"and "<< *a;
    *a = *a +*b;
    cout<<"Sum is "<< *a;

}
int main(){	
    // cout << "Hello World" << endl;
    // int x;
    // cin >> x;
    // cout << "The number enterd is "<<x;
    // long long x = 9;
    // cout << "size of x is "<<sizeof(x);
    // string s;
    // getline(cin,s);
    // cout << s;
    int a =10;
    int b = 20;
    // cout << "address "<< &a;
    sum (&a,&b);
    // cout<<"SUm at outer is "<< a;
    return 0;
}