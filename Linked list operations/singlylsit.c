#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*p;

void traverse(){
    if(head==NULL){
        return ;
    }
    p=head;
    while(p->next!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int createlist(int n){
    
    int data,i;
    head=(struct node *)malloc(sizeof(struct node));
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
        printf("Enter the data of 1 node\n");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;

        temp=head;
        for(i=2;i<=n;i++){
            printf("Enter the data of %d node",i);
            scanf("%d",&data);
            newnode->data=data;
            newnode->next=NULL;

            temp->next=newnode;
            temp=temp->next;

        }
}



int main()
{
    int n;
    printf("Enter the number of nodes you want to create in the linked list\n");
    scanf("%d",&n);
    createlist(n);
    traverse();
    return 0;
}