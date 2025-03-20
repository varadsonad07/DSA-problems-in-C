#include<stdio.h>
#include<stdlib.h>

struct node {
	int data ;
	struct node* next;
};

struct node* start = 0;

struct node* Create_node(){
	struct node* h1;
	h1 = (struct node*)malloc(sizeof(struct node));
	printf("Enetr data to store in list : ");
	scanf("%d",& h1 -> data);
	printf("\n");
	h1 -> next = 0;
	return h1;
}

void Create_list(){
	struct node* b1;
	b1 = Create_node();
	if(start == 0){
		start = b1;
	}
	else{
		struct node*c1;
		c1 = start;
		while(c1 -> next != 0){
			c1 = c1 -> next;
		}
		c1 -> next = b1;
	}
}

void Attach_at_begin(){
	struct node* k1;
		k1=Create_node();
		if(k1 == 0){
			start = k1;
		}
		else{
			k1 -> next = start;
			start =k1;
		}
}

void Detach_at_begin(){
	if(start == 0){
		printf("Already list is empty\n");
	}
	else{
		struct node* y1;
		y1 = start;
		start = start -> next;
		free(y1);
	}
}

void Attach_at_end(){
	struct node* c1;
	c1 = Create_node();
	
	if(start == 0){
		start = c1;
	}
	else{
		struct node* b1;
		b1 = start;
		
		while(b1 -> next != 0 ){
			b1 = b1 -> next;
		}
		b1 -> next = c1;
	}
}

void Detach_at_end(){
	if( start == 0){
		printf("list is already empty\n");
	}
	else{
		struct node* d1;
		d1 = start;
		while(d1 -> next -> next != 0){
			d1 = d1 -> next;
		}
		struct node* p1;
		p1 = d1 -> next;
		d1 -> next = 0;
		free(p1);
	}
}

void Attach_at_middle(){
	struct node* k1;
	k1 = Create_node();
	if(start == 0){
		start = k1;
	}
	else{
		int d;
		printf("Enter a data where you want to store a new data : ");
		scanf("%d",&d);
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

void Detach_at_middle(){
	if(start == 0){
		printf("list is already empty");
		printf("\n");
	}
	else{
		int d;
		printf("Enter data you want to delete : ");
		scanf("%d",&d);
		printf("\n\n");
		struct node* g1 , *h1 , *p1;
		g1 = start;
		while(g1 -> next -> data != d){
			g1 = g1 -> next;
		}
		p1 = g1 -> next -> next;
		g1 -> next -> next = 0;
		h1 = g1 -> next;
		g1 -> next = p1; 
	}
}

void Display(){
struct node* j1;
		j1 = start;
		while(j1 != 0){
			printf("->%d ",j1 -> data);
			j1 = j1 -> next;
		}
		printf("\n\n");
}

int main(){
	printf("1. Create list\n");
	printf("2. Attach at begin\n");
	printf("3. Detach at begin\n");
	printf("4. Attach at end\n");
	printf("5. Detach at end\n");
	printf("6. Attach at middle\n");
    printf("7. Detach at middle\n");
	printf("8. Display data\n");
	printf("9. Exit\n");
	printf("---------------------------------------");
	printf("\n\n");
	
	while(1){
	int ch;
	printf("enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1 :{
			Create_list();
			printf("\n");
			break;
		}
		
		case 2 :{
			Attach_at_begin();
			printf("\n");
			break;
		}
		
		case 3 :{
			Detach_at_begin();
			printf("\n");
			break;
		}
		
		case 4 :{
			Attach_at_end();
			printf("\n");
			break;
		}
		
		case 5 :{
			Detach_at_end();
			printf("\n");
			break;
		}
		
		case 6 :{
			Attach_at_middle();
			printf("\n");
			break;
		}
		
		case 7 :{
			Detach_at_middle();
			printf("\n");
			break;
		}
		
		case 8 :{
			Display();
			printf("\n");
			break;
		}
		
		case 9 :{
			printf("Exit");
			printf("\n");
			break;
		}
		
		default :{
			printf("you chouse wrong choice");
		    printf("\n");
			break;
		}
	}
	}

}
