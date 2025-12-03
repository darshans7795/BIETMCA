#include<stdio.h>
#include<conio.h>

int main() {
	
	int row,column,i,j;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&row);
	
	printf("Enter the numbers of columns:\n");
	scanf("%d",&column);
	
	int A[row][column];
	int B[row][column];
	int C[row][column];
	int P[row][column];
	
	printf("\nEnter the Values of A matrix\n");
	for( i=0;i<row;i++) {
		for(j=0;j<column;j++) {
			scanf("%d",&A[i][j]);
		}
	}


	printf("\nEnter the Values of B matrix\n");
	for(i=0;i<row;i++) {
		for(j=0;j<column;j++) {
			scanf("%d",&B[i][j]);
		}
	}


	printf("Entered values are B:\n");
	for(i=0;i<row;i++) {
		for(j=0;j<column;j++) {
			printf("[%d] ",A[i][j]);
		}
		printf("\n");
	}


	printf("\nEntered values of B:\n");
	for(i=0;i<row;i++) {
		for( j=0;j<column;j++) {
			printf("[%d] ",B[i][j]);
		}
		printf("\n");
	}
	
	//Addition of mmatrix
	
		printf("\nAddition of Matrix:\n");
	for(i=0;i<row;i++) {
		for( j=0;j<column;j++) {
		C[i][j]=A[i][j]+B[i][j];
		}
	}
	
		for(i=0;i<row;i++) {
		for( j=0;j<column;j++) {
			printf("[%d] ",C[i][j]);
		}
		printf("\n");
	}
	
	//Multiplication of Matrix
	
	for(i=0;i<row;i++) {
		for( j=0;j<column;j++) {
		P[i][j]=A[i][j]*B[j][i];
		}
	}
	    printf("\nMultiplication of two matrix:\n");
		for(i=0;i<row;i++) {
		for( j=0;j<column;j++) {
			printf("[%d] ",P[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
	getch();
}