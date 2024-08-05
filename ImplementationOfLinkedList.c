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
    printf("%d number of node we have in this linked list", count);
}

void output(){
    temp = head;
    while(temp != 0){
        printf("\nThe data of the linked list is :%d", temp->data);
        temp = temp->next;
    }
}


int main(){
    struct node;
    input();
    output();
    return 0;
}

/*
* OUPUT OF THE PROGRAM
Enter data: 5
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 4
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 9
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1
Enter data: 6
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:0
4 number of node we have in this linked list
The data of the linked list is :5
The data of the linked list is :4
The data of the linked list is :9
The data of the linked list is :6
*/
