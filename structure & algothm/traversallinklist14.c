#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};
  void linkListTraversal(struct node *ptr){

    while(ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
  }

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    //alocate memory for nodes in the linked list in heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    //linked first and second node
    head->data=7;
    head->next=second;
    //linked second and third node
    second->data=6;
    second->next=third;
    //linked third and fourth node
    third->data=69;
    third->next=fourth;
    //terminate element
    fourth->data=56;
    fourth->next=NULL;

    linkListTraversal(head);

    return 0;
}
