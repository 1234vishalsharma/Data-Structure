#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;    
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


int main()
{
    struct node *head,*second,*third,*forth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
    
    // Linking head to second

    head->data=10;
    head->next=second;

    // Linking second to third
    second->data=11;
    second->next=third;

    // linking third to forth
    third->data=12;
    third->next=forth;

    // Creation of last node
    forth->data=13;
    forth->next=NULL;
    
    printf("Linked list before inserting new node\n");
    traversal(head);
    

    // Case of insertion at begning 


    struct node *begnode;
    begnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new node\n");
    scanf("%d",&begnode->data);
    begnode->next=head;
    head=begnode;

    // dispaly in begning insertion list
     printf("Linked list after inserting new node\n");
    traversal(head);

    return 0;
}