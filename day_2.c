#include<stdio.h>
int main(){
	int arr[20], K,n;

	printf("Enter the number of elements in array\n");
	scanf("%d",&n);

	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the value of 'K' :\t");
	scanf("%d",&K);

	for(int i=-0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==K){
				printf("Indices are found at %d and %d\n",i,j);
			}
		}
	}
}
