#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void appendNode(struct Node** head, int data){
    struct Node* newNode=createNode(data);
    if(*head==NULL){
            *head=newNode;
            return;
        }
        struct Node* temp= *head;
        while (temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
    }

    void reverseTraversal(struct Node* head){
        if(head==NULL)
        return;
        reverseTraversal(head->next);
        printf("%d ", head->data);
    }

    void displayList(struct Node* head){
        struct Node* temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    int main(){
        struct Node* head= NULL;

        appendNode(&head,10);
        appendNode(&head,20);
        appendNode(&head,30);
        appendNode(&head,40);
    
    printf("Original Linked List: ");
    displayList(head);

    printf("\nReverse Traversal: ");
    reverseTraversal(head);
    printf("\n");

    return 0;
}