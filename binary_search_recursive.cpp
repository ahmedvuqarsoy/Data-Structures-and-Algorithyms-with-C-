#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
int binary_search_recursive(int arr[], int left, int right, int value){ 
    
	if (right >= left) { 
		int middle = left + (right - left) / 2; 
		
		if (arr[middle] == value){ 
			return middle;
		}
		if (arr[middle] > value){
			return binary_search_recursive(arr, left, middle - 1, value);
		}
		return binary_search_recursive(arr, middle + 1, right, value); 
	}
	return -1; 
} 
  
int main(){ 
    
	int arr[] = { 2, 3, 4, 10, 40 };
	int value = 2;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binary_search_recursive(arr, 0, n - 1, value);
		
	if(result == -1){
		cout << "There is not a given element." << endl;
	}
	else{
		cout << "The element index: " << result << endl;
	}

	return 0;	
} 

