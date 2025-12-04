#include<stdio.h>
#include<conio.h>

int main() {
	int row,column,i,j;
	printf("Enter the number of row\n");
	scanf("%d",&row);
	printf("Enter the number of column\n");
	scanf("%d",&column);
	int arr[row][column];
	int sq[row][column];
	
	//entering elements
	printf("Enter the elements:\n");
	for(i=0;i<row;i++) {
		for(j=0;j<column;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	//printing elements
        printf("Matrix\n");
        for(i=0;i<row;i++) {
	     for(j=0;j<column;j++) {
		printf("[%d] ",arr[i][j]);
	}
	printf("\n");
}
     //square of matrix
      printf("Square of Matrix\n");
      for(i=0;i<row;i++) {
      	for(j=0;j<column;j++) {
      		sq[i][j] = arr[i][j] * arr[i][j];
		  }
	  }
	  //printing the result
	          printf("Matrix\n");
        for(i=0;i<row;i++) {
	     for(j=0;j<column;j++) {
		printf("[%d] ",sq[i][j]);
	}
	printf("\n");
}
	  
	return 0;
	getch();
	}