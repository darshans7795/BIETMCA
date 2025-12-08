#include<stdio.h>
#include<conio.h>

int main() {
	int num,size,i,key;
	int left;
	int right;
    int mid;
	printf("Enter the number to perfom Searching Technique\n Press 1: for Linear Search\n Press 2: for Binary Search\n");
    scanf("%d",&num);
    if(num==1) {
    	printf("you have selected Linear Search!\n");
	} else {
		printf("You have seleced Binary Search!\n");
	}
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	//reading elements frrom the user
	printf("Enter %d elements:\n",size);
	for(i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	//printing the entered elements
	for(i=0;i<size;i++) {
		printf("[%d] ",arr[i]);
	}
	printf("\nEnter a key element to search:\n");
	scanf("%d",&key);
	int found=0;
	switch(num) {
		case 1:
			for(i=0;i<size;i++) {
				if(arr[i]==key) {
					printf("Element is found: %d",i+1);
					found = 1;
				    } 
				}
				if(!found) {
					printf("Element not found!");
				}
				break;
		case 2: 
		    left = 0;
		    right = size-1;
		    while(left<=right) {
			mid = (left+right)/2;
			  if(arr[mid]==key) {
				printf("Element is found at: %d",mid+1);
				found=1;
				break;
			} else if(key>arr[mid]) {
				left = mid+1;
			} else {
				right = mid-1;
			}
		}
		if(!found) {
				printf("Element not found!");
		}
		break;
	}
	return 0;
}