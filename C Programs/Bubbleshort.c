#include<stdio.h>
#include<conio.h> 
 
 int main() {
 	int size;
 	printf("Enter the size of an array:");
 	scanf("%d",&size);
 	int array[size];
 	
 	printf("Enter elements:\n");
 	for(int i=0;i<size;i++) {
 		scanf("%d",&array[i]);
	 }
	 
	 	printf("Entered elements are:");
 	for(int i=0;i<size;i++) {
 		printf("[%d] ",array[i]);
	 }
	 
	 for(int i=0;i<size;i++) {
	 	for(int j=0;j<size-i-1;j++) {
	 		if(array[j]>array[j+1]) {
	 			int temp=array[j];
	 			array[j]=array[j+1];
	 			array[j+1]=temp;
			 }
		 }
	 }
	 	printf("\nShorted elements are:");
 	for(int i=0;i<size;i++) {
 		printf("[%d] ",array[i]);
	 }
	 return 0;
	 getch();
 }