#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *loadstring(int n){
	
  char *str= (char*) malloc((n+1) * sizeof(char));
 
 if(str==NULL){
 	printf("allocation failed:\n");
 	return NULL;
 }
  printf("enter a string:\n"),
  fgets(str,n+1,stdin);
}

int main(){
	int n;
	printf("donnez the size of string:");
	scanf("%d",&n);
  getchar(); 
	
	char *text=loadstring(n);
	
	if(text !=NULL){
		printf("you entered:%s\n",text);
		free(text);
	}
	
	return 0;
}
