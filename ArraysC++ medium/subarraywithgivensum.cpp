#include <iostream>
#include <iterator>
#include <set>
#include <bits/stdc++.h>
//Q. for subarray with given sum 

using namespace std;

bool isSum(int arr[],int n,int sum)
{
  set<int> s;
  int preSum=0;
  for(int i=0;i<n;i++){
    
    preSum = preSum + arr[i];
    if(preSum == sum){
      return 1;
    }

    if(s.find(preSum - sum)!=s.end()){
      return 1;      
    }
    s.insert(preSum);
  }
  return 0;
}
int main() {
  int arr [7] = {5, 3, 9, -4, -6, 7, -1};
  int n=7;
  int sum = 3;
  cout << isSum(arr,n,sum);
}