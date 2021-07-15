//Problemstatement: Leader in a array find it in Order of N.
#include <iostream>
using namespace std;

void Leader(int arr[],int n){
  int currentLeader = arr[n-1];
  cout << currentLeader << "\n";
  for(int i = n-2;i>=0;i--){
    if(currentLeader < arr[i]){
      currentLeader = arr[i];
      cout << currentLeader << "\n";
    }
  }
}
int main() {
  int arr[] = {7,10,4,10,6,5,2};
  int n=7;
  Leader(arr,n);
}