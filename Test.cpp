#include <stdio.h>

void importArr(int* arr, int* length) {
	for(int i = 0; i < *length; i++) {
		printf("\nEnter arr[%d] = ", i);
		scanf("%d", arr + i);
	}
}

void exportArr(int* arr, int* length) {
	for(int i = 0; i < *length; i++) {
		printf("\narr[%d] = %d", i, *(arr + i));
	}
}

void positiveElement(int* arr, int* length) {
	int sum = 0;
	for(int i = 0; i < *length; i++) {
		if(*(arr + i) > 0) {
			sum += *(arr + i);
			printf("%d\t", *(arr + i));
		}
	}
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;	
}

void sort(int* arr, int* length) {
	for(int i = 0; i < *length; i++) {
		for(int j = i + 1; j < *length; j++) {
			if(*(arr + j) > *(arr + i)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + i);
				*(arr + i) = temp;
			}
		}
	}
}

int findTheSecondLargesElement(int* arr, int* length) {
	sort(arr, length);
	int tempIndex = 0;
	for(int i = 0; i < *length; i++) {
		if(*(arr + 0) != *(arr + i)) {
			tempIndex = i;
			break;
		}
	}
	return *(arr + tempIndex);
}

int findTheLargesElement(int* arr, int* length) {
	for(int i = 0; i < *length; i++) {
		for(int j = i + 1; j < *length; j++) {
			if(*(arr + i) < *(arr + j)) {
				swap((arr + i), (arr + j));
			}
		}
	}
	return *(arr + 0);
}


int main(){
	int size;
	scanf("%d", &size);
	int nums[size];
	importArr(nums, &size);
	exportArr(nums, &size);
	printf("\n");
	positiveElement(nums, &size);
	printf("\n%d", findTheSecondLargesElement(nums, &size));
	printf("\n%d", findTheLargesElement(nums, &size));
}
