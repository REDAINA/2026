#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void loadarray(char *p, char arr[]) {
    char *size = arr;

    for(; *p != '\0'; p++, size++) {
        *size = *p;
    }

    *size = '\0';  
}

int main() {
    char arr[100];
    char size[100];
    char *p;

    printf("enter a string:\n");
    fgets(arr, sizeof(arr), stdin);

    // ≈“«·… \n
    int len = 0;
    while(arr[len] != '\0') len++;
    if(arr[len - 1] == '\n') arr[len - 1] = '\0';

    p = arr;

    loadarray(p, size);

    printf("disp string: %s\n", size);

    return 0;
}


