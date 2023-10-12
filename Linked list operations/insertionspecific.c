#include<stdio.h>
#include<stdlib.h>
struct node{
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
    struct node *temp,*ptr,*head,*second,*third,*forth;
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
     // Insertion at Specific position in the linked list
    
    int pos,i=0;
    temp=(struct node *)malloc(sizeof(struct node));
    ptr=(struct node *)malloc(sizeof(struct node));
    temp=head;
    printf("Enter the position where you want to insert the node\n");
    scanf("%d",&pos);
    while(i!=pos-1){
        temp=temp->next;
        i++;
    }
    printf("Enter the data of new node inserting in between the linked list\n");
    scanf("%d",&ptr->data);
    ptr->next=temp->next;
    temp->next=ptr;
    printf("Linked list after inserting the node at specific position\n");
    traversal(head);
    return 0;
}