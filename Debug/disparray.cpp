#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void displayarray(char arr[],int n){
	for(int i=0;i<=n;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
}
int main(){
	char arr[100];
	int n;
	
	printf("enter a string:\n");
	fgets(arr,sizeof(arr),stdin);
	
	 int len = 0;
    while(arr[len] != '\0') len++;

 
    if(arr[len - 1] == '\n') {
        len--;
    }
    displayarray(arr,len);
    return 0;

}
