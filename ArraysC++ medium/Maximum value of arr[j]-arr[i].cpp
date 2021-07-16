//Maximum value of arr[j]-arr[i] such that j is greater than i.
#include <iostream>
#include<cmath>
using namespace std;
int max(int arr[],int n){

  int result=arr[1]-arr[0];
  int minVal = arr[0];

  for(int i=1;i<n;i++){
    result = max(result, arr[i]-minVal);
    minVal = min(minVal,arr[i]);
  }

  return result;
}

int main() {
  int arr[] = {2,3,10,6,4,8,1};
  int n=7;

  int number = max(arr,n);
  cout << number;
}