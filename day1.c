#include<stdio.h>

int main(){
	int arr[20],visited[20],n,count=0;
	
	printf("Enter the number of integers in array \n");
	scanf("%d",&n);
		
	printf("Enter the array of integers\n");
	for(int i=0;i<n;i++)
  {
		scanf("%d",&arr[i]);
    visited[i]=0;
  }

	for(int i=0;i<n;i++){
		count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j] && visited[i]==0){
				count++;
				visited[j]=1;
			}
			
		}
		if(visited[i]==0)
			printf("%d 's : %d\n", arr[i],count);
	}
}
