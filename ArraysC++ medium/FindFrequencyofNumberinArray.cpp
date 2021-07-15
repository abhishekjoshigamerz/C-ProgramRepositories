//FindFrequencyofNumberinArray .Array is a sorted array.
#include <iostream>
using namespace std;
void printFrequency(int arr[],int n){
  int freq=1,i=1;
  while(i<n){
    while(i<n && arr[i]==arr[i-1]){
      freq++;
      i++;
    }
    cout << arr[i-1] << " frequency is  " << freq << "\n";
    i++;
    freq = 1;
  }
  if(n==1|| arr[n-1]!=arr[n-2]){
    cout << arr[n-1] << " frequency is  "  << 1 << "\n";
  }
}
int main() {
  int arr[] = {40,50,50,50,10};
  int n=5;

  printFrequency(arr,n);
}