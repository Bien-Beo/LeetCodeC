#include <stdio.h>
//Import Array
void importArr (int arr[], int length) {
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}
//Funtion Intersection
void arr_Intersection (int Arr_Intersection[], int arr1[], int length1, int arr2[], int length2) {
    int count = 0;
    //Compare elements of two arrays
    for (int i = 0; i < length1; i++) {
        for (int j = 0; j < length2; j++) {
            if (arr1[i] == arr2[j]) { 
                count++;
                //Store common elements between two arrays into a new array
                Arr_Intersection[count-1] = arr1[i]; 
            }
        }
    }
    
    if (count == 0) //Case 1: 
        printf("Array intersection has no element !");
    else if (count == 1) //Case 2: There is 1 common element
        printf("%d ", Arr_Intersection[0]);
    else { //Case 3: There are common elements
        printf("%d ", Arr_Intersection[0]); //Always output the first matching element
        for (int i = 1; i < count; i++) {
            int temp = 0;
            for (int j = 0; j < i; j++) { 
            //Check if there are duplicate elements in the new array
                if (Arr_Intersection[i] == Arr_Intersection[j]) { 
                    temp++;
                    continue;
                }
                else
                    continue;   
            }
            if (temp == 0) 
                printf("%d ", Arr_Intersection[i]);
        }
    }
}
int main() {
    int size1;
    printf("\nEnter the size of the 1st array: "); scanf("%d", &size1);
    int nums1[size1];
    printf("Enter the number of elements in 1st array: "); importArr(nums1, size1);

	int size2;
	printf("\nEnter the size of the 2st array: "); scanf("%d", &size2);
    int nums2[size2];
    printf("Enter the number of elements in 2st array: "); importArr(nums2, size2);
    
    int Arr_Intersection[size1 + size2];
    arr_Intersection(Arr_Intersection, nums1, size1, nums2, size2);
}
