#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string a= "Test";
  string b = "Etst";

  int sizeofA = a.length();
  int sizeofB = b.length();

  if(sizeofA!=sizeofB){
    cout << "Not a permutation" << endl;
  }

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  cout << a << endl;
  cout << b << endl;
  for(int i=0;i<sizeofA;i++){
    if(a[i]!=b[i]){
      cout << "Not a permutation" << endl;
    }else{
      cout << "A permutation" << endl;
    }
  }

}