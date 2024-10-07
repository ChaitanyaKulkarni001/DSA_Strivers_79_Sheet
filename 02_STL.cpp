#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/*
Cpp STL
1. Algorithm
2. Containers
3. Functions
4. Iterators
*/
// int main(){
    

//     // Pairs

//     // pair <int,int> pair_one =  {3,5};
//     // cout << pair_one.first;
//     // cout << pair_one.second;
//     // cout << pair_one; will not work

//     // pair <int,string> names[] = {{1,"Chaitanya"},{2,"Chinmay"}};
//     // int i = 0;
//     // while (i<2){
//     //     cout << names[i].first << " is " << names[i].second << endl;
//     //     i++;
//     // }

// //     for (const auto& p : vec) {
// //     std::cout << p.first << " " << p.second << std::endl;
// // }

//     return 0;
// }


// Vectors
int main(){

    vector <int> v;
    v.push_back(4);
    v.emplace_back(8);
    // cout << v[1] << endl;
    for (int i =0 ;i<5;i++){
        
        v.push_back(i*4);
    }

    // vector <int>::iterator it = v.begin();
    // cout << "number is "<< *it;

    // while (it !=v.end()){
    //     cout << " "<< *it;
    //     it++;
    // }
    // cout<< endl;


    for (auto it = v.begin();it !=v.end();it++){
        cout << " "<< *it; // here it is iterator
    }

    cout <<endl;
    for (auto it :v){
        cout << it << " ";
    }
    // it = v.rend() = it will give first element -1
    // it = v.rbegin() = it will give last element
    // vector <int>::iterator vend  = v.end();
    // cout << *vend;  // THis is pointing to the last+1 part

    // To print last number we can do follow
    // --vend;
    // cout <<endl<< *vend; 

    // vector <pair<int,string>> vp ;
    // vp.push_back({5,"RItesh"});
    // cout<< vp[0];

    return 0;

}