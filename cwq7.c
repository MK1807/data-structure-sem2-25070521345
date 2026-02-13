#include <stdio.h>

struct node{
    int data;
    struct node *next;
}

struct node *head = NULL;
struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
  