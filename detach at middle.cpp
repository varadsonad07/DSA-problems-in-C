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

void Delete_at_middle(){
	struct node* g , *h , *p;
	
	if(start == 0){
		printf("Already list impty");
		printf("\n");
	}
	else{
		int d;
		printf("Enter a data that you want to delete : ");
		scanf("%d",&d);
		g = start;
		while( g -> next -> data != d){
			g = g -> next;
		}
		
		p = g -> next -> next;
		g -> next -> next = 0;
		h= g -> next;
		g -> next = p;
		free(h);		
	}
}

void Display(){
	struct node* p1;
	p1 = start;
	while(p1 != 0){
		printf("-> %d \t",p1 -> data);
		p1 = p1 -> next;
	}
	printf("\n\n");
}

int main(){
	printf("1. First create linked list\n");
	printf("2. Delete at middle\n");
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
			Delete_at_middle();
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
