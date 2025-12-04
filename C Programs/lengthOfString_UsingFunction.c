#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char name[30];
	int count;
	printf("Enter your name:");
	gets(name);
	count = strlen(name);
	printf("Length of an String is: %d",count);
	
}