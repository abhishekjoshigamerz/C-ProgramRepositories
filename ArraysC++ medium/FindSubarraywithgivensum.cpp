//Given an unsorted array of a non negative integers.Find if there is a subarray with a given sum.

#include <iostream>

int subArraysum(int arr[],int n,int sum){
  int curr_sum= arr[0];
  int start=0;
  for(int i=1;i<=n;i++){
    while(curr_sum>sum && start < i-1){
       curr_sum = curr_sum - arr[start];
       start++;
    }
    	if (curr_sum == sum) 
		{ 
			printf ("Sum found between indexes %d and %d", start, i-1); 
			return 1; 
		} 

    if(i<n){
		curr_sum = curr_sum + arr[i]; 
    }
  }
  	printf("No subarray found"); 
	return 0; 
}

int main() {
  int arr[]={1,4,20,3,10,5};
  int n=6;
  int sum=33;
  subArraysum(arr,n,sum);
}