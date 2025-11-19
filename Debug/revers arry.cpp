#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reversearray(char arr[],char rev[],int n){
	int j=0;
	for(int i=n-1;i>=0;i--){
	rev[j]=arr[i];
	j++;
	}
		rev[n]='\0';
}
int main(){
	char arr[100],rev[100];
	int n;
	printf("enter number of characters:");
	scanf("%d",&n);
	getchar();
	
	printf("enter the string:");
	fgets(arr,sizeof(arr),stdin);
	
	
    
	reversearray(arr,rev,n);
	
		printf(" reversed array is:%s\n",rev);
	return 0;
	
}

