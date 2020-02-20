#include <iostream>

using namespace std;

int binary_search(int arr[], int left, int right, int value){
	while(left < right){
		int middle = left + (right - left)/2;
		if(value < arr[middle]){
			right = middle - 1;
		}
		else if(value > arr[middle]){
			left = middle + 1;
		}
		else{
			return middle;
		}
	}
	return -1;
}

int main(){
	
	int len = 7;
	int arr[7] = {12, 23, 54, 62, 79, 111, 957};
	
	int left = 0;
	int right = len;
	int value = 111;
	cout << binary_search(arr, left, right, value) << endl;

	return 0;
}
