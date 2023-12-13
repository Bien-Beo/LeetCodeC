//349. Intersection of Two Arrays
//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
#include <stdio.h>

void importArr(int arr[], int &length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void Intersection(int arr1[], int arr2[], int length1, int length2) {
	if(length1 >= length2) {
		int resultArr[length1];
		int resultSize = 0;
		for(int i = 0; i < length1; i++) {
			for(int j = 0; j < length2; j++) {
				if(arr1[i] == arr2[j]) {
					resultArr[resultSize] = arr1[i];
					resultSize += 1;
				}
			}
		}	
	}
	else {
		int resultArr[length2];
		int resultSize = 0;
		for(int i = 0; i < length2; i++) {
			for(int j = 0; j < length1; j++) {
				if(arr2[i] == arr1[j]) {
					resultArr[resultSize] = arr2[i];
					resultSize += 1;
				}
			}
		}
	}
	for(int k = 0; k < resultSize; k++) {
		int temp = resultArr[k];
		for(int z = 0; z < resultSize; z++) {
			if(z == k)
			{
				z += 1;
				continue;
			}
			else
			{
				if(temp == resultArr[z]) {
					resultArr[k] = resultArr[k + 1];
					resultSize -= 1;
				}
			}
		}
	}
	for(int y = 0; y < resultSize; y++) {
		printf("%d\t", resultArr[y]);
	}
}

int main(){
	int numSize1; scanf("%d", &numSize1);
	int nums1[numSize1]; importArr(nums1, numSize1);
	int numSize2; scanf("%d", &numSize2);
	int nums2[numSize2]; importArr(nums2, numSize2);
	Intersection(nums1, nums2, numSize1, numSize2);
}
