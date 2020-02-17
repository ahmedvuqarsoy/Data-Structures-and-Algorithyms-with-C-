#include <iostream>

using namespace std;

//##################### FUNCTIONS #######################
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection_sort(int arr[], int size){
	for(int i = 0; i < size; i++){
		int min = i;
		for(int j = i; j < size; j++){
			if(arr[j] < arr[min]){
				swap(&arr[min],&arr[j]);
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
	selection_sort(array,n);

	//Printing
	print_array(array,n);

	return 0;
}
