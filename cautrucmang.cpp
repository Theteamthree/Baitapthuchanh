#include<stdio.h>
int main()
{
	printf("sua tren web");
	int i,n,s=0;
	float tb=0;
	printf(" Nhap so nguyen n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	s+=i;// s=s+i
	tb=s/n;
	printf("Gia tri bieu thuc là :%f",tb);
	}
