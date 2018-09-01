#include<stdio.h>
int firstocc(int a[],int low,int high,int size,int item)
{
	int mid;
	if(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid==0 || (a[mid-1] < item) && (a[mid]==item))
			return mid;
		else if(item > a[mid])
			return firstocc(a,mid+1,high,size,item);
		else 
			return firstocc(a,low,mid-1,size,item);
	}
	return -1;
}

int lastocc(int a[],int low,int high,int size,int item)
{
	int mid;
	if(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid==0 || (a[mid+1] > item) && (a[mid]==item))
			return mid;
		else if(item < a[mid])
			return lastocc(a,low,mid-1,size,item);
		else 
			return lastocc(a,mid+1,high,size,item);
	}
	return -1;

}

int main()
{
	int n,a[20],x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	printf("firstoccurence : %d,lastoccurence: %d",firstocc(a,0,n-1,n,x),lastocc(a,0,n-1,n,x));
	return 0;
}