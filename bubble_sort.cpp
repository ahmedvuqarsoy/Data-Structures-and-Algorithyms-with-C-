#include <iostream>

using namespace std;

//##################### FUNCTIONS #######################
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble_sort(int arr[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void print_array(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	
	int array[] = {5, 4, 1, 2, 8};
	int n = 5;
	
	//Sorting
	bubble_sort(array,n);

	//Printing
	print_array(array,n);

	return 0;
}
