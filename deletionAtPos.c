#include <stdio.h>
#include <stdlib.h>

struct node{
    int data; 
    struct node * next;
}; 
struct node *head, *newnode, *temp;

void input(){
    int choice = 1, count = 0;
    head = 0;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if(head == 0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("DO you want to continue, if yes press 1 or no press 0.\nEnter you choice:");
        scanf("%d", &choice);
        count++;
    }
    printf("%d number of node we have in this linked list\n", count);
}

void output(){
    temp = head;
    while(temp != 0){
        printf("\nThe data and address of the linked list is :%d %d", temp->data, temp->next);
        temp = temp->next;
    }
}

void DeleteAtPos(){
    printf("\n**********************DELETION AT Specified Position*************************************");
    struct node * nextnode;
    int pos, i=1;
    temp = head;
    printf("\nEnter the specified position: ");
    scanf("%d", &pos); 
    while(i < pos-1){
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    printf("\n Deleted element of specifed positon is: %d %d", nextnode->data, nextnode->next);
    temp->next = nextnode->next;
    free(nextnode);
}

int main(){
    struct node;
    int count;
    input();
    DeleteAtPos();
    printf("\n***********************Display Result****************************");
    output();

    return 0;
}

/*
* OUTPUT OF THE PROGRAM
Enter data: 5
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 6
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 1
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 2
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:0
4 number of node we have in this linked list

**********************DELETION AT Specified Position*************************************
Enter the specified position: 3

 Deleted element of specifed positon is: 1 10432424
***********************Display Result****************************
The data and address of the linked list is :5 10432392
The data and address of the linked list is :6 10432424
The data and address of the linked list is :2 0
*/