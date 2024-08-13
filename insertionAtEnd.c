#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};

struct node *head, * tail, *newnode, *temp;

void createDLL(){
    printf("********************* Input the Doubly Linked List ****************************");
    head = 0; 
    int choice = 1;
    while (choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter Data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if(head == 0){
            head = tail = newnode;
        } else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("\nDO you want to continue, if yes press 1 or no press 0.\nEnter you choice:");
        scanf("%d", &choice);
    }
}

void insertAtEnd(){
    printf("\n********************* Insertion At End ****************************");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d", &newnode->data);
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = 0;
    tail = newnode;
}

void display(){
    printf("\n********************* Display result ****************************");
    temp = head;
    while (temp != 0){
        printf("\nThe prev address, data and next address of the linked list is : %d %d %d", temp->prev, temp->data, temp->next);
        temp = temp->next;
    }
    
}

int main(){
    struct node;
    createDLL();
    insertAtEnd();
    display();

    return 0;
}

/*
* OUTPUT OF THE PROGRAM
********************* Input the Doubly Linked List ****************************
Enter Data: 6

DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1

Enter Data: 5

DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1

Enter Data: 4

DO you want to continue, if yes press 1 or no press 0.
Enter you choice:
1

Enter Data: 1

DO you want to continue, if yes press 1 or no press 0.
Enter you choice:0

********************* Insertion At End ****************************
Enter the data:7

********************* Display result ****************************
The prev address, data and next address of the linked list is : 0 6 7476864
The prev address, data and next address of the linked list is : 7476840 5 7476920
The prev address, data and next address of the linked list is : 7476864 4 7476944
The prev address, data and next address of the linked list is : 7476920 1 7476968
The prev address, data and next address of the linked list is : 7476944 7 0
*/