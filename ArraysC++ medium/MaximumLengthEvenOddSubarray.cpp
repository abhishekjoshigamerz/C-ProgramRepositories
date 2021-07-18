//Given an array a[] of N integers, the task is to find the length of the longest Alternating Even Odd subarray present in the array.
#include <iostream>
#include<cmath>
using namespace std;

int MaxSubarrayEvenOdd(int arr[],int n){
  int res=1;
  int current=1;

  for(int i=1;i<n;i++){
    if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0)){
      current++;
      res = max(res,current);
    }else{
      current =1;
    }
  }
  return res;
}

int main() {
 int arr[]={5,10,20,6,3,8};
 int n=6;
 cout << MaxSubarrayEvenOdd(arr,n);
}