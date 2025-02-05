#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* start = 0;

struct node* Create_node(){
	struct node* h1;
	h1 = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",& h1 -> data);
	printf("\n");
	h1 -> next = 0;
	return h1;
}

void Create_list(){
	struct node* c1;
	c1 = Create_node();
	
	if (start == 0){
		start = c1;
	}
	else{
		struct node*b1;
		b1=start;
		while(b1 -> next != 0){
			b1 = b1 -> next;
		}
		b1 -> next = c1;
	}
}

void Insert_at_middle(){
	struct node* k1;
	k1 = Create_node();
	if(start == 0){
		start = k1;
	}
	else{
		int d;
		printf("Enter a data where you want to store a new data : ");
		scanf("%d",&d);
		printf("\n");
		struct node* f1;
		f1 = start;
		while( f1 -> next -> data != d){
			f1 = f1 -> next;
		}
		struct node* j1;
		j1 = f1 -> next;
		f1 -> next = k1;
		k1 -> next = j1;
		
	}
}

void Display(){
	struct node* p1;
	p1 = start;
	while(p1 != 0){
		printf("->%d \t",p1 -> data);
		p1 = p1 -> next;
	}
	printf("\n\n");
}

int main(){
	printf("1. First create linked list\n");
	printf("2. Insert at middle\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("------------------------ \n");
	printf("\n\n");
	
	while(1){

	int ch;
	printf("Enter your choice : ");
	scanf("%d",&ch);
	
    switch (ch){
    	
    	case 1 : {
    		Create_list();
			break;
		}
		case 2 :{
			Insert_at_middle();
			break;
		}
		case 3 : {
			Display();
			break;
		}
		case 4 : {
			printf("Exit from program\n\n");
			break;
		}
		default : {
			printf("Enter wrong choice\n\n");
			break;
		}
	}
    }
}
