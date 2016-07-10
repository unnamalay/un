#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
int d=a[i],c=0;
while(d)
{
int rem=d%2;
d=d/2;
c++;
}
b[j++]=c;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else if(b[i]==b[j])
{
if(a[i]>a[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
