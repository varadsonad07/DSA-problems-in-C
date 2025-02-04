#include<Stdio.h>
#include<Stdlib.h>

struct node{
	int data;
	struct node *next;
};

    struct node* start=0;  // declare global variable
     
    struct node*create_node(){  // create a new node
    	struct node*h1;
    	h1=(struct node*)malloc(sizeof(struct node));
    	printf("enter your data to store : ");
    	scanf("%d",&h1 -> data);
    	h1 -> next = 0;
	}
	
       insert_begin(){  // insert at begin
		struct node* k1;
		k1=create_node();
		if(k1 == 0){
			start = k1;
		}
		else{
			k1 -> next = start;
			start =k1;
		}
	}
	
	display(){  // display the list (data)
		struct node* j1;
		j1 = start;
		while(j1 != 0){
			printf("%d ",j1 -> data);
			j1 = j1 -> next;
		}
	}


int main(){
	int ch;
	
	printf("\n 1. insert at begin");
	printf("\n 2. display ths list");
	printf("\n 3. exit");
   
	while(1){
	

	printf("\nplease enetr your choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:{
			insert_begin();
			break;
		}
		case 2:{
			display();
			break;
		}
		case 3:{
			printf("exit successfully");
			break;
		}
		default :{
			printf("wrong choice");
			printf("\n");
		}
	}
    }

}
