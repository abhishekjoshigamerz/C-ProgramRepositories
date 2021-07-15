#include <iostream>
using namespace std;
//Question: Left Rotate a array by D elements byreversalmethods 
#include<math.h>
void reverse(int arr[], int low , int high){
  while(low < high){
    swap(arr[high],arr[low]);
    low++;
    high--;
  }
}
int main() {
  int arr[]={1,2,3,4,5};
  int d = 2;
  int n = 5;

  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout << arr[i] << "\n";
  }
}