#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stringlength(char *str){
	int length=0;
	for(int i=0;str[i] !='\0';i++){
		 length++;
	}
	return length;
}
int main(){
char str[100];

	printf("enter  a string:");
	fgets(str,sizeof(str),stdin);
	   int len=stringlength(str);
	    
	   printf("the size of string is:%d",len);
	   
	   return 0;
}
