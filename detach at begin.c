#include<stdio.h>

struct node{
int data;
struct node* next; 	
};

struct node* start = 0;

struct node* Create_node(){
	struct node* h1;
	h1=(struct node*)malloc(sizeof(struct node));
	printf("Enter a data : ");
	scanf("%d",& h1 -> data);
	printf("\n");
	h1 -> next = 0;
	return h1;
}

Insert_at_begin(){
	struct node*k1;
	k1=Create_node();
	if(start == 0){
		start = k1;
	}
	else{
		k1 -> next = start;
		start = k1; 
	}
}

Detach_at_begin(){
	if(start == 0){
		printf("already list is empty\n");
		printf("\n");
	}
	else{	
	    struct node* y1;
        y1 = start;
		start = start -> next;
		y1 -> next = 0;
		free(y1);
	}
}

Display(){
	struct node *j1;
	j1 = start;
	printf("\nData print successfully\n");
	while(j1 != 0){
		printf("%d \t",j1 -> data);
		j1 = j1 -> next;
	}
	printf("\n");

}

int main(){
	printf("\n1. Insert at begin");
	printf("\n2. Detach at end");
	printf("\n3. Display the data");
	printf("\n4. Exit \n");
	
	int ch;
	while(1){
	
	printf("Please enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:{
			Insert_at_begin();
			break;
		}
		case 2:{
			Detach_at_begin();
			break;
		}
		case 3:{
			Display();
			break;
		}
		case 4:{
			printf("Exit the program");
			break;
		}
		default:{
			printf("Wrong choice");
			break;
		}
	}
    }

}
