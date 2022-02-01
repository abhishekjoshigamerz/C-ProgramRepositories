#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    string output;
    for(auto x: S){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
            output.push_back(x);
        }        
    }
    return output;
    
} 