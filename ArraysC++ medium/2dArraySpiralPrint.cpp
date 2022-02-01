#include <iostream>
using namespace std;
void Print(int arr[][10],int n,int m){
  int startRow = 0;
  int endRow = n-1;
  int startCol = 0;
  int endCol = m-1;

  while(startCol<=endCol and startRow <=endRow){
    for(int col=startCol;col<=endCol;col++){
       cout << arr[startRow][col]<<" ";
    }
    //endCol 
    for(int row=startRow+1;row<=endRow;row++){
        cout << arr[row][endCol]<<" ";
    }
    //EndRow
    for(int col=endCol - 1; col>=startCol;col--){
            if(startRow==endRow){
                break;
            }
            cout<< arr[endRow][col]<<" ";
        }
     //Start Col
      for(int row = endRow-1; row >=startRow + 1;row--){
            //Avoid Duplicate Printing of elements
            if(startCol==endCol){
                break;
            }
            cout<< arr[row][startCol] <<" ";
      }   

       //update the variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;

  }


}


int main() {
  int arr[][10] = { {1, 2, 3, 4},
                      {12, 13, 14, 5},
                      {11, 16, 15, 6},
                      {10, 9, 8, 7}};

  int n = 4,m=4; 
  Print(arr,n,m);
  return 0;
}