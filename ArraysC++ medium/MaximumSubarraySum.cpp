
//Maximum subarray sum 
#include <iostream>
#include<cmath>

using namespace std;
int maxSubArraySum(int arr[],int n){
  int result = arr[0];
  int maxEnding = arr[0];
  for(int i=1;i<n;i++){
    maxEnding = max(maxEnding+arr[i],arr[i]);
    result = max(maxEnding,result);
  }
  return result;
}
int main() {
  int arr[]={1, -2, 3, -1, 2}, n = 5;
  cout << maxSubArraySum(arr, n);
}