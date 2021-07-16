//Calculate Stock prices to get maximum profit.The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days.
#include <iostream>
#include <cmath>
using namespace std;
//We are using recursion here to manage
int maxProfit(int arr[],int start,int end){
  if(end<=start){
    return 0;
  }
  int profit =0;
  for(int i=start;i<end;i++){
    for(int j=i+1;j<=end;j++){
      if(arr[j]>arr[i]){
        //The main trick is to use recursion so one can get an idea of which variable is actually 
        int currentProfit = arr[j]-arr[i]+maxProfit(arr,start,i-1)+maxProfit(arr,j+1,end);
        profit = max(profit,currentProfit);
      }
    }
  }
  return profit;
}
int main() {
  int arr[]={1,5,3,8,12};
  int n=5;
  int profit;
  profit = maxProfit(arr,0,n-1);
  cout << profit;
}