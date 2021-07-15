#include <iostream>
using namespace std;
#include<math.h>
//Problem statement. Move all the zeros in your program to the right side.

void MoveZero(int arr[],int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      swap(arr[i],arr[count]);
      count++;
    }
  }
}


int main() {
  int arr[] = {10,8,0,0,7,0};
  int n=6;
  MoveZero(arr,n);
  for(int i=0;i<n;i++){
    cout << arr[i] << "\n";
  }
}