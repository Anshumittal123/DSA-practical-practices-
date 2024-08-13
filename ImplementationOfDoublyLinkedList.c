#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
}; 
struct node *head, *newnode, *temp;

void input(){
    printf("\n**************************INPUT OF THE LINKED LIST********************************************");
    int choice = 1, count = 0;
    head = 0;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if(head == 0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("DO you want to continue, if yes press 1 or no press 0.\nEnter you choice:");
        scanf("%d", &choice);
        count++;
    }
    printf("%d number of node we have in this linked list", count);
}

void output(){
    printf("\n**************************OUTPUT OF THE LINKED LIST********************************************");
    temp = head;
    while(temp != 0){
        printf("\nThe prev address, data and next address of the linked list is : %d %d %d", temp->prev, temp->data, temp->next);
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
**************************INPUT OF THE LINKED LIST********************************************
Enter data: 7
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1

Enter data:
4
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:1

Enter data: 9
DO you want to continue, if yes press 1 or no press 0.
Enter you choice:0
3 number of node we have in this linked list
**************************OUTPUT OF THE LINKED LIST********************************************
The prev address, data and next address of the linked list is : 0 7 7352224
The prev address, data and next address of the linked list is : 7352200 4 7343184
The prev address, data and next address of the linked list is : 7352224 9 0
*/