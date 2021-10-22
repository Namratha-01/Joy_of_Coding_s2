#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],i,j,visited[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    visited[i]=0;
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j]&&visited[i]==0)
      {
        visited[j]=1;
      }
    }
  }
    for(i=0;i<n;i++)
    {
      if(visited[i]==0)
        printf("%d",arr[i]);
    }
  }
