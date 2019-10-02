#include<stdio.h>
void mergesort(int*a,int l,int mid,int u)
{
	int n1=mid-l+1;int b[n1],j=0,k=0,i;
	int n2=u-mid;int c[n2];
	
	for(i=l;i<=mid;i++)
	b[j++]=a[i];
	
	
	for(i=mid+1;i<=u;i++)
	c[k++]=a[i];
	
	j=0,k=0,i=l;
	while(j<n1 && k<n2)
	{
		if(b[j]<c[k])
		a[i++]=b[j++];
		
		else
		a[i++]=c[k++];
	}
	
	while(j<n1)
	a[i++]=b[j++];
	
	while(k<n2)
	a[i++]=c[k++];
	
	
	
	
	
}

void merge(int*a,int l,int u)
{ 
	
	if(l<u)
	{ int mid=l+(u-l)/2;
		merge(a,l,mid);
		merge(a,mid+1,u);
		mergesort(a,l,mid,u);
	}
  
}
int main()
{
	int i,j,n;
	printf("Enter the number of elements in an array\n");
	scanf("%d",&n);int a[n];
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge(a,0,n-1);

	printf("The sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
