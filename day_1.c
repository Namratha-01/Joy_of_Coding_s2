#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements\n");
    scanf("%d",&n);
	int arr[n],visited=0;
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				
				visited=1;
				break;
			}
		}
	}
	
	if(visited==0)
		printf("Array distinct");
	else
		printf("Array not distinct");
}
