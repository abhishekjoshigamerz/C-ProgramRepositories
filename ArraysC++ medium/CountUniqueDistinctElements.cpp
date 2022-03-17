#include <iostream>
#include <iterator>
#include <set>
#include <bits/stdc++.h>
using namespace std;
//Q. count distinct elements in array
int CountDistinictElement(int arr[],int n)
{
  set<int> s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }

  return s.size();
}
int main() {
  int arr[] = {1,2,3,4,4,3,2,1};
  int n = 8;
  cout << CountDistinictElement(arr,n);
}