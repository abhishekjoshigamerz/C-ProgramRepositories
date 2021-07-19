//Majority Element in the program. Return -1 if no majority element is there.
#include <iostream>
#include<cmath>
using namespace std;

int findMajority(int arr[],int n){
  //Let us assume the first element is actually the majority element.
  int count = 1, res=0;
  for(int i=1;i<n;i++){
    if(arr[res]==arr[i]){
      count++;
    }else{
      count--;
    }

    if(count==0){
      res=i;
      count = 1;
    }
  }
  count = 0;
  //Now we will check if the element is really a majority element or not 
  for(int i=0;i<n;i++){
    if(arr[res]==arr[i]){
      count++;
    }
  }
  if(count <= n/2){
    return -1;
  }
  return res;
}

int main() {
  int arr[] = {8, 8, 6, 6, 6, 4, 6}, n = 7;
  cout << findMajority(arr,n);
}