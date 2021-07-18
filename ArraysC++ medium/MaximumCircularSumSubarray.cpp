//The task is to find maximum circular sum subarray of a given array.// Level really difficult


// To solve it the ideal way to do it is to divide your array sum calculations into 2 parts. Calcuate normal array sum using kadane algo and then approach it with calculating sum of a circular array and add both and get your circular sum actual score.Uff really tough one


#include <iostream>
#include<cmath>
using namespace std;
int NormalMaxSum(int arr[],int n){

  int res=arr[0];
  int maxEnding = arr[0];
  for(int i=1;i<n;i++){
    maxEnding = max(maxEnding+arr[i],arr[i]);
    res = max(maxEnding,res);
  }

  return res;
}

int MaxCircularSum(int arr[],int n){
  int max_normal = NormalMaxSum(arr,n);
  if(max_normal<0){
    return max_normal;
  }
  int arr_sum=0;
  for(int i=0;i<n;i++){
    arr_sum += arr[i];
    arr[i] = -arr[i];
  }
  int max_circular = arr_sum + NormalMaxSum(arr, n);
  return max(max_circular,max_normal);
}



int main() {
  int arr[]={8,-4,3,-5,4},n=5;
  cout << MaxCircularSum(arr,n);
}