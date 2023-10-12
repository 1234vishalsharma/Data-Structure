#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp;

void traverse(){
    
    if(head==NULL){
        printf("List is empty:\n");
        exit(0);
    }
    temp=head;
    printf("Linked list is :\n");
     while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    } 
}
void create(int n)
{
    int data;
    struct node *newnode;
    head = (struct node *)malloc(sizeof(struct node));
    
    if (head == NULL)
    {
        printf("Unable to allocate memory:(List is already created)\n");
    }
        printf("Enter the data of 1 node:\n");
        scanf("%d", &data);
        head->data=data;
        head->next = NULL;
        temp=head;
    for (int i=2;i<=n;i++){
        if(newnode==NULL){
            printf("Unable to allocate memory:\n");
        }
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data of %d node:\n",i);
            scanf("%d",&data);
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=temp->next;
    }
}

void reverse(){
    struct node *curr,*next,*prev;
    curr=(struct node *)malloc(sizeof(struct node));
    prev=(struct node *)malloc(sizeof(struct node));
    next=(struct node *)malloc(sizeof(struct node));
    curr=head;
    prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}



// void beginsertion(){
//     int data;
//     struct node *begnode;
//     begnode=(struct node *)malloc(sizeof(struct node));
//     printf("\nEnter the data of node that would be inserted in the begnong of the list:\n");
//     scanf("%d",&data);
//     begnode->data=data;
//     begnode->next=head;
//     head=begnode;
// }
// void endinsertion(){
//     int data;
//     struct node *endnode,*ptr;
//     endnode=(struct node *)malloc(sizeof(struct node));
//     printf("Enter the data of ending node of the list: \n");
//     scanf("%d",&data);
//     endnode->next=NULL;
//     endnode->data=data;
//     ptr=head;
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     ptr->next=endnode;
// }
// void posinsertion(){
//     int data,i=0,pos;
//     struct node *ptr,*newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the position of the node you want to insert in bewtween the Linked list:\n");
//     scanf("%d",&pos);
//     printf("Enter the data of new node inserted at %d index of list:\n",pos);
//     scanf("%d",&data);
//     newnode->data=data;
//     newnode->next=NULL;
//     ptr=head;
//     while(i<pos-1){
//         ptr=ptr->next;
//         i++;
//     }    
//     printf("Value of ptr is : %d",ptr->data);
//     newnode->next=ptr->next;
//     ptr->next=newnode;
// }
// void searchelement(int element){
//     struct node *searchptr;
//     searchptr=head;
//     while(searchptr!=NULL){
//         if(element==searchptr->data){
//             printf("\nElement Found :-)\n");
//         }
//         else{
//             printf("Element Not found\n");
//         }
//         searchptr=searchptr->next;
//     }
// }
int main()
{
    int n;
    printf("Enter the number of nodes you want to create \n");
    scanf("%d",&n);
    create(n);
    traverse();
    reverse();
    // posinsertion();
    traverse();
    // printf("Enter the element you want to search in the list\n");
    // scanf("%d",&n);
    // searchelement(n);
    return 0;
}