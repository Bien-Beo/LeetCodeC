#include <stdio.h>

void PalindromeNumber(int num) {
	int i = 0, tempNumSize = num, numValue = num;
	while (tempNumSize > 0) {
		tempNumSize /= 10;
		i++;
	}
	i = i - 1;
	int arr[i];
	for( int k = 0; k < i + 1; k++) {
		arr[k] =  numValue % 10;
		numValue /= 10;
		if(numValue <= 0) 
		break;
	}
	if(num < 0) {
		printf("Reads %d from right to left. Therefore it is not a palindrome.", num);
	}
	else if (num >= 0 && num < 10) {
		printf("%d reads as %d from left to right and from right to left.", num, num);
	} else if (num >= 10 && num < 100) {
		printf("%s", (arr[0] == arr[1]) ? ("%d reads as %d from left to right and from right to left.", num, num) : ("Reads %d from right to left. Therefore it is not a palindrome.", num));
	} else {
		int tempIndex = 0;
		while (i != tempIndex) {
			if(arr[i] == arr[tempIndex]) {
				i--;
				tempIndex++;
			}
			else {
				printf("Reads %d from right to left. Therefore it is not a palindrome.", num);
				break;
			}
		}
	}
}

int main() {
	int x; 
	printf("\nEnter number: "); scanf("%d", &x);
	PalindromeNumber(x);
}
