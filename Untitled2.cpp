#include<stdio.h>
int main()
{
	int n;
	printf("entre the size of the matrix (nxn):");
	scanf("%d",&n);
	//lit matrix
	int A[n][n];
	printf(" entre the element of the matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&A[i][j]);
		}
	}
//afficher la matric
   printf("Original Matrix:\n"); 
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
		}
		//le changment

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
		    int temp=A[i][j];
			A[i][j]=A[j][i];
			A[j][i]=temp;
		}
	}
	//affichage
	printf("le matrice apres changment:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ", A[i][j]);
	}
	printf("\n");
	}
	return 0;
	}



