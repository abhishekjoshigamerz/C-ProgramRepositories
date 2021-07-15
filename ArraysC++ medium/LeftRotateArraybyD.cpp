#include <iostream>
using namespace std;
//ProblemStatement : Left Rotate(Counter CLockwise) a array element by D times where N is size of array and D is a number of times the array is rotated to the left side.

//using simpleway 
void leftRotate(int arr[],int d,int n){
  int temp = arr[0];
  for(int i=1;i<n;i++){
    arr[i-1] = arr[i];
    
  }
  arr[n-1] = temp;
}

void Rotate(int arr[], int d,int n){
  for(int i=1;i<=d;i++){
    leftRotate(arr,d,n);
  }
}
int main() {
  //CUrrently hardcoding the values
  int arr[] = {1,2,3,4,5};
  int d = 2;
  int n = 5;

  Rotate(arr,d , n);
  for(int k=0;k<n;k++){
    cout << arr[k] << "\n";
  }
}