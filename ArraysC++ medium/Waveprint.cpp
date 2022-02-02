#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<vector <int>> waveprint = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };

  int m=4;
  int n=4;
  int j=n-1;
  int i;
  int wave=1;

  while(j>=0){
    if(wave==1){
      for(i=0;i<m;i++){
        cout << waveprint[i][j] << " ";
      }
      wave =0;
      j--;
    }else{
      for (i = m - 1; i >= 0; i--)
            cout <<  waveprint[i][j] << " ";            
            wave = 1;
            j--;
    }
  } 
}