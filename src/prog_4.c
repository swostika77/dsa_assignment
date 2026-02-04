#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}

void appendNode(struct Node** head, int data){
    struct Node* newNode=createNode(data);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAfter(struct Node* head,int key, int data){
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=key)
    temp=temp->next;
    if(temp==NULL){
        printf("Node with value %d not found.\\n",key);
        return;
    }
    struct Node* newNode=createNode(data);
    newNode->next=temp->next;
    newNode->prev=temp;
    if(temp->next!=NULL)
    temp->next->prev=newNode;
    temp->next=newNode;
}
void deleteNode(struct Node** head, int key){
    struct Node* temp=*head;
    while(temp!=NULL && temp->data!=key)
    temp=temp->next;
    if(temp==NULL){
        printf("Node with value %d not found.\n",key);
        return;
    }
    if(*head==temp)
    *head=temp->next;

    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    if(temp->prev!=NULL)
    temp->prev->next=temp->next;

    free(temp);
}

void displayList(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    struct Node* head=NULL;
    appendNode(&head,10);
    appendNode(&head,20);
    appendNode(&head,30);

    printf("Original List: ");
    displayList(head);

    insertAfter(head,20,25);
    printf("\nAfter inserting 25 after 20: ");
    displayList(head);

    deleteNode(&head,30);
    printf("\nAfter deleing 30: ");
    displayList(head);

    printf("\n");
    return 0;




}