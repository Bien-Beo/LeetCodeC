// 219. Contains Duplicate
//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
#include <stdio.h>
#include <math.h>
//Fuction Import Array
void importArr(int arr[], int &length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
}
//Funtion Export Array
void exportArr(int arr[], int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%d\t", arr[i]);
	}
}
// Funtion Contains Duplicate
bool containsNearbyDuplicate(int arr[], int length, int k)
{
	if(length < k) return false;
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < length; j++)
		{
			if(j == i)
			{
				j += 1;
				continue;
			}
			else
			{
				if(arr[i] == arr[j] && abs(i - j) <= k)
				{
					return true;
					break;
				}
			}
		}
	}
	return false;
}

int main(){
	int size; scanf("%d", &size);
	int k; scanf("%d", &k);
	int nums[size]; importArr(nums, size); exportArr(nums, size);
	printf("%s", containsNearbyDuplicate(nums, size, k) ? "true" : "false");
}
