#include <iostream>
#include <iterator>
#include <set>
#include <bits/stdc++.h>
using namespace std;

bool isSum(int arr[],int n)
{
  set<int> s;
  int pre_sum = 0;
  for(int i=0;i<n;i++){
    pre_sum = pre_sum + arr[i];
    if(s.find(pre_sum)!= s.end()){
      return 1;
    }
    if(pre_sum==0){
     return 1;      
    }
    s.insert(pre_sum);
  }
  return 0;
}


int main() {
  int arr[7] = {5, 3, 9, -4, -6, 7, -1};
  int n = 7;

  cout << isSum(arr,n);
  
}