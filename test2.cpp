#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Student {
	char name[50];
	int ID;
	float GPA;
}ST;

void importStudentInformation(ST* st) {
	printf("\nEnter ID: "); scanf("%d", &st->ID); getchar();
	printf("\nEnter Name: "); fgets(st->name, sizeof(st->name), stdin); 
	fflush(stdin);
	printf("\nEnter GPA: "); scanf("%.2f", &st->GPA); getchar();
}

void exportStudentInformation(ST* st) {
	printf("\nID: %d", st->ID);
	printf("\nName: %s", st->name);
	printf("\nGPA: %.2f", st->GPA);
}

void importStudentList(ST* stArr, int* length) {
	for(int i = 0; i < *length; i++) {
		importStudentInformation(stArr + i);
	}
}

void exportStudentList(ST* stArr, int* length) {
	for(int i = 0; i < *length; i++) {
		printf("\nStudent %dst: ", i + 1);
		exportStudentInformation((stArr + i));
	}
}



int main(){
	int sizeOfStudent;
	printf("\nEnter num of students: "); scanf("%d", &sizeOfStudent);
	ST listOfStudent[sizeOfStudent];
	importStudentList(listOfStudent, &sizeOfStudent);
	exportStudentList(listOfStudent, &sizeOfStudent);
}
