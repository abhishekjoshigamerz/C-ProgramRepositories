#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int LongestBand(vector<int> a){
  int n= a.size();
  unordered_set<int> s;
  for(int x: a){
    s.insert(x);
  }

  int largestchain = 1;
  for(auto element : s){
    int parent = element - 1;
    if(s.find(parent)==s.end()){
      int next = element + 1;
      int cnt=1;
      while(s.find(next)!=s.end()){
        next++;
        cnt++;
      }
      if(cnt > largestchain){
        largestchain = cnt;
      }
    }
  }

  return largestchain;
}


int main() {
  vector<int> ans{1,9,3,0,18,5,2,4,10,7,12,6};

  cout << LongestBand(ans);
}