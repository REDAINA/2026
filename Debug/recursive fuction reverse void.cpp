#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reversestring(char *start,char *end){
	if( start>=end){
		return;
	}
	char temp=*start;
	*start=*end;
	*end=temp;
	
	reversestring(start + 1,end -1);
}
int main(){
	char str[100];
	
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	
	int len = strlen(str);
    if(str[len-1] == '\n'){
	 str[len-1] = '\0';
	}
	
	reversestring(str, str + strlen(str) - 1);
	
	printf("Reversed string: %s\n", str);

    return 0;
}
