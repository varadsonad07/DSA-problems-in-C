#include <stdio.h>
 int main() {
  int i,j,temp,position,n;
  int a[n];
  printf("enter range of elements  \n");
  scanf("%d",&n);
  printf("enter values \n");
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
  	position=i;
  	for(j=i+1;j<n;j++){
  		if(a[position]>a[j]){
  			position=j;
		  }
	  }
	  if(position!=i){
	  	temp=a[i];
	  	a[i]=a[position];
	  	a[position]=temp;
	  }
  }
  printf("selection sort \n");
  for(i=0;i<n;i++){
  	printf("%d \t",a[i]);
  }
}
