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

void DeleteAtEnd(){
    printf("\n**********************DELETION AT BEGNNING*************************************");
    struct node * prevnode;
    temp = head;
    while(temp->next != 0){
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == 0){
        head = 0;
    }else{
        prevnode->next = 0;
    }
    printf("\nDeleted element at end:%d %d\n", temp->data, temp->next);
    free(temp); 
}

int main(){
    struct node;
    int count;
    input();
    DeleteAtEnd();
    printf("/n***********************Display Result****************************");
    output();

    return 0;
}

/*
* OUTPUT OF THE PROGRAM 
Enter data: 5
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 3
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 9
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 1
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:0
4 number of node we have in this linked list

**********************DELETION AT BEGNNING*************************************
Deleted element at end:1 0
/n***********************Display Result****************************
The data and address of the linked list is :5 12457592
The data and address of the linked list is :3 12457608
The data and address of the linked list is :9 0
*/