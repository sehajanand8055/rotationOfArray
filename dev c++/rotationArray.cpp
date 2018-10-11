#include<iostream>
using namespace std;

void rotationByOne(int[],int);
void rotateArray(int[],int,int);
void printArray(int[],int);

int main()
{
	int a[] = {1,2,3,4,5,6,7},n;
	n = sizeof(a)/sizeof(a[0]);
	
	rotateArray(a,3,n);
	printArray(a,n);
	return 0;
}
void rotationByOne(int a[],int n)
{
	int temp = a[0],i;
	for(i=0;i<n-1;i++)
	a[i] = a[i+1];
	
	a[i] = temp;
}

void rotateArray(int a[],int p,int n)
{
	for(int i=0;i<p;i++)
	rotationByOne(a,n);
}

void printArray(int a[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


