#include<stdio.h>
 int add(int a,int b){
 		return a + b;
 }

int max(int a,int b){
	if(a>b)
     return a;
   else
   	return b;
}
  
float average(int arr[],int n){
	int sum=0;
for( int i=0;i<n;i++){
		sum=add(sum,arr[i]);
}
return (float) sum/n;
}
int main(){
	int a,b;
		printf ("entre la valeur de a est b:");
		scanf("%d %d",&a,&b);	
	 int sum=add(a,b);
	int n;
		printf("enter the number of elements:");
		scanf("%d",&n);
int arr[n];
		printf("enter %d integers:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);	
		
		int largest=arr[0];
		 for (int i = 0; i < n; i++) {
	int largest=max(largest,arr[i]);
}
float avg=average(arr,n);
 printf(" the largest number is:%d\n",largest);
 printf("the average is :%f\n",avg);
 printf("sum to number =%d\n",sum);
	return 0;
 }

	
	
		
  
