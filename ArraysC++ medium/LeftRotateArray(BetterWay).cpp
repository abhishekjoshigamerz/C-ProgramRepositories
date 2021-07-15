#include <iostream>
using namespace std;
//ProblemStatement : Left Rotate(Counter CLockwise) a array element by D times where N is size of array and D is a number of times the array is rotated to the left side.

//using better way 


void Rotate(int arr[], int d,int n){
 int temp[d];
 for(int i=0;i<d;i++){
   temp[i] = arr[i];
 }
 for(int i=d;i<n;i++){
   arr[i-d] = arr[i];
 }

 for(int i=0;i<d;i++){
   arr[n-d+i] = temp[i];
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