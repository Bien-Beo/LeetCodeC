//1464. Maximum product of two elements in an array
#include <stdio.h>
//Import array
void importArr(int arr[], int &size)
{
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}
//Export array
void exportArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
//Maximum product of two elements in an array
int theMaximumProduct(int arr[], int size)
{
	int firstLargestValue = arr[0];
	int secondLargestValue = arr[1];
	if(size != 2)
	{
		//Find first largest value
		int tempIndex = 0;
		for(int i = 0; i < size; i++)
		{
			if(firstLargestValue < arr[i])
			{
				firstLargestValue = arr[i];
				tempIndex = i;
			}
		}
		//Find second largest value
		if(tempIndex == 1)
		{
			secondLargestValue = arr[2];
			for(int i = 0; i < size; i++)
			{
				if(i == tempIndex)
				{
					i += 1;
					continue;
				}
				else
				{
					if(arr[i] > secondLargestValue && arr[i] <= firstLargestValue)
					{
						secondLargestValue = arr[i];
					}
				}
			}
		}
		else
		{
			for(int i = 0; i < size; i++)
			{
				if(i == tempIndex)
				{
					i += 1;
					continue;
				}
				else
				{
					if(arr[i] > secondLargestValue && arr[i] <= firstLargestValue)
					{
						secondLargestValue = arr[i];
					}
				}
			}
		}
		return (firstLargestValue -1)*(secondLargestValue - 1);
	}
	else
	{
		return (firstLargestValue -1)*(secondLargestValue - 1);
	}
}

int main()
{
	int size;
	scanf("%d", &size);
	int nums[size]; importArr(nums, size);
	exportArr(nums, size);
	printf("\t%d", theMaximumProduct(nums, size));
}
