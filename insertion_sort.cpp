#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n){
	
	int temp;
	int j;

	for(int i = 0; i < n; i++){
		j = i;
		while( j > 0 && arr[j] < arr[j-1] ){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}

}

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	
	int n = 5;
	int arr[n] = {3, 2, 0, 1, 5};
	
	printArray(arr,n);
	insertion_sort(arr,n);
	printArray(arr,n);

	return 0;

}
