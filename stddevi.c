#include<stdio.h>
#include<math.h>

float calsd(float data[]);

int main(){
	int i;
	float data[10];
	printf("input 10 numbers");
	for(i=0;i<10;i++){
		scanf("%f",&data[i]);
	}
	printf("the standard deviation is=%f",calsd(data));
}

float calsd(float data[]){
	int i;
	float avg,sum=0,sd=0;
	for(i=0;i<10;i++){
		sum=sum+data[i];
	}
	avg=sum/10;
	printf("average is %f \n",avg);
	
	for(i=0;i<10;i++){
		sd=sd+pow(data[i]-avg,2);
	}
	return sqrt(sd/10);
}

