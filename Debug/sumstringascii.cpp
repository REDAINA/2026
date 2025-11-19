#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sumstringascii(char *p){
	if(*p=='\0'){
		return 0;
	}
	else{
		return *p +sumstringascii(p+1);
	}
	}

int main(){
	char str[100];
	
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	
	    int i = 0;
    while (str[i] != '\0')
	 i++;
    if (str[i - 1] == '\n') 
        str[i - 1] = '\0';
        
	int sum=sumstringascii(str);
	printf("sum of the string ascii is:%d\n",sum);
	
	
	return 0;
}
