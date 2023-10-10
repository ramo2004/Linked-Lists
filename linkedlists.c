#include <stdio.h>
#include <stdlib.h>

 struct node {

    int x;
    struct node* next;

};

struct node* InsertNode (struct node* head, struct node* insertedNode) {
    insertedNode->next=head;
    return insertedNode;
}

struct node* findNode (struct node* head, int value ) {
    struct node* temp = head;
    while (temp!=NULL) {
        if (temp->x==value) return temp;
            temp=temp->next;

    }
    return NULL;

}



struct node *createNode (int val) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode -> x = val;
  newNode -> next =NULL;
  return newNode;
}

void printLinkedList (struct node* head) {
    struct node* temporary= head;
    while (temporary!=NULL) {
        printf("%d - ",temporary->x);
        temporary = temporary->next;

    }
    printf("NULL \n");
}

int main() {

struct node *head=NULL;
struct node *temp;

/*temp= createNode(1);
head=temp;
temp= createNode(23);
head->next=temp;
temp= createNode(44);
temp->next=head;
head->next->next=temp; */

for ( int  i = 0 ; i<10; i++) {
    temp= createNode(i);
   head =  InsertNode ( head,temp);
}
    temp =  findNode (head, 98);
    if (temp!=NULL) {
        printf("found the value which is %d\n",temp->x);

    } else {
        printf("value not found\n");
    }
    printLinkedList(head);

}
