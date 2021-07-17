//Maximum consecutive 1s in a binary array
#include <iostream>
using namespace std;

int maximumconsecutive(int arr[],int n){
  int currentCounter=0;
  int result=0;

  for(int i=0;i<n;i++){
    if(arr[i]==0){
      currentCounter=0;
    }else{
      currentCounter++;
      result = max(currentCounter,result);
    }
  }
  return result;
}
int main() {
  int arr[]={0,1,1,0,1,0};
  int n =6;
  cout << maximumconsecutive(arr,n);
}