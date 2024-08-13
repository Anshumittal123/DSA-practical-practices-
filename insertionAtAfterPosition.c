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
    int choice = 1, count = 0;
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
        count++;
    }
    printf("\n%d number of node we have in this linked list", count);
}

void insertAtPos(int count){
    printf("\n********************* Insertion At Postion ****************************");
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos, i=1;
    printf("\n Enter position: ");
    scanf("%d", &pos);
    if(pos <= 0 || pos > count){
         printf("\nError: Can't modified because position invalid!!");
    }else{
        temp = head;
        while(i < pos){
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
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
    int count;
    createDLL();
    insertAtPos(count); 
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

4 number of node we have in this linked list
********************* Insertion At Postion ****************************
 Enter position:
3

Enter the data:8

********************* Display result ****************************
The prev address, data and next address of the linked list is : 0 6 1971840
The prev address, data and next address of the linked list is : 1971816 5 1971896
The prev address, data and next address of the linked list is : 1971840 4 1975480
The prev address, data and next address of the linked list is : 1971896 8 1971920
The prev address, data and next address of the linked list is : 1975480 1 0
*/