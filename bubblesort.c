#include<stdio.h>
 
int main()
 {
 int n,i,j,temp,c=0;
 printf("Enter number :");
 scanf("%d",&n);
 int a[n];
 printf("Enter values :");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 for(i=1;i<n;i++)
 {
 for(j=0;j<n-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j+1];
 a[j+1]=a[j];
 a[j]=temp;
 }
 }
 c++;
 } 
 printf("%d iterations\n",c);
 printf("Bubble sort :\n");
 for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}

