#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};
struct node* start = 0;

struct node* create_node(){
struct node* h1;
	h1=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&h1->data);
    printf("\n");
    h1 -> next = 0;
    return h1;
	
}

void Insert_at_end(){
	struct node* k1;
	k1 = create_node();
	
	if (start == 0){
		start = k1;
	}
	else{
		struct node*b1;
		b1=start;
		while(b1 -> next != 0){
			b1 = b1 -> next;
		}
		b1 -> next = k1;
	}
}

void Detach_at_end(){
		if(start == 0){
			printf("Already list is empty\n\n");
		}
		else{
			struct node* d1;
			d1 = start ;
			while(d1 -> next -> next!= 0){
				d1 = d1 -> next;
            }
            struct node* p1;
            p1 = d1 -> next;
            d1 -> next = 0;
            free(p1);
		}
	}

	
void Display(){
	struct node* j1;
	j1 = start;
	while(j1 != 0){
		printf("-> %d \t",j1 -> data);
		j1 = j1 -> next;
	}
	printf("\n\n");
}

int main(){
	
	printf("1.Attach at end\n");
	printf("2.Detach at end\n");
	printf("3.Display the data\n");
	printf("4.Exit\n");
	
	printf("-------------------------\n");
	
	while(1){
	
	int ch;
	printf("Enter your choice : ");
	scanf("%d",&ch);

switch (ch){
     case 1:{
     	Insert_at_end();	
        break;
	 }
	 case 2:{
	 	Detach_at_end();
		break;
	 }
	 case 3:{
	 	Display();
		break;
	 }
	 case 4:{
	 	printf("Exit program");
		break;
	 }
	 default :{
	 	printf("Invalid choice");
	 	printf("\n\n");
		break;
	 }
}
}

}

