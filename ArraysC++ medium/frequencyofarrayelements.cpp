#include <iostream>
#include <iostream>
#include <iterator>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int FrequenicesofElement(int arr[],int n){
  unordered_map<int,int> hashmap;
  for(int i=0;i<n;i++){
    hashmap[arr[i]]++;
  }

  for(auto e : hashmap){
    cout << e.first << " has " << e.second << endl; 
  }
  
  return 0;
}


int main() {
  int arr[]={10,10,10,20,20,20,50,60};
  int n=8;
  FrequenicesofElement(arr,n);
}