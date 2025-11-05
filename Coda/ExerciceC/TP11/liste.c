#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct n{
    int data;
    struct n* next;
}Node;

Node *create_Node(int data){
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL){
        printf("Error with malloc");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;   
}

int push_front(Node **head, int data){
    Node *new_node = create_Node(data);
    new_node->next = *head;
    *head = new_node;
}

void print_list(Node *head){
    Node *current = head;
    while (current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}
//Exo 2
int add_list(Node *head){
    Node *current = head;
    int result = 0;
    while (current != NULL){
        result += current->data;
        current = current->next;
    }
    printf("%d", result);
}

//Exo 3

int power (int number, int p){
    if (p <= 0){
        return 1;
    }    
    return number * power(number, p -1);
}

//Exo 4

int sum(Node *head){
    if (head == NULL){
        return 0;
    } else {
        return head->data + sum(head->next);
    }
}

//Exo 5
void inverse(Node *head){
    Node *previous = NULL;
    Node *current = head;
    Node *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}


int main (){
    Node *node = NULL;
    int result = 0;
   
    push_front(&node , 4);
    push_front(&node, 7);
    push_front(&node, 3);
    push_front(&node, 2); 
    result = puissance (2, 4);

return 0;
}