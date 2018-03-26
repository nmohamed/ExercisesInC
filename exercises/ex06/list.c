/* Example code for Exercises in C.

Based on an example from http://www.learn-c.org/en/Linked_lists

Copyright 2016 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} Node;


/* Makes a new node structure.
*
* val: value to store in the node.
* next: pointer to the next node
*
* returns: pointer to a new node
*/
Node *make_node(int val, Node *next) {
    Node *node = malloc(sizeof(Node));
    node->val = val;
    node->next = next;
    return node;
}


/* Prints the values in a list.
*
* list: pointer to pointer to Node
*/
void print_list(Node **list) {
    Node *current = *list;

    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("]\n");
}


/* Removes and returns the first element of a list.
*
* list: pointer to pointer to Node
*
* returns: int or -1 if the list is empty
*/
int pop(Node **list) {
    Node *head = *list;
    if(head->next == NULL){
      return -1;
    }
    *list = head->next;
    return head->val;
}


/* Adds a new element to the beginning of the list.
*
* list: pointer to pointer to Node
* val: value to add
*/
void push(Node **list, int val) {
    Node *head = make_node(val, NULL);
    head->next = *list;
    *list = head;
}


/* Removes the first element with the given value
*
* Frees the removed node.
*
* list: pointer to pointer to Node
* val: value to remove
*
* returns: number of nodes removed
*/
int remove_by_value(Node **list, int val) {
    Node *current = *list;
    Node *prev = NULL;
    int count = 0;
    do{
      if(val == current->val){ // If match
        if(prev == NULL){ // If first element matches, pop
          *list = current->next;
          free(current);
          current = *list;
          prev = NULL;
        }
        else{
          prev->next = current->next;
          free(current);
          current = prev->next;
        }
        count++;
      } else{ // If no match
        prev = current;
        current = prev->next;
      }
    }while(current != NULL);
    return count;
}


/* Reverses the elements of the list.
*
* Does not allocate or free nodes.
*
* list: pointer to pointer to Node
*/
void reverse(Node **list) {
    Node *current = *list;
    Node *prev = NULL;
    Node *next = NULL;
    while(current != NULL){
      next = current->next;
      current->next =prev;
      prev = current;
      current = next;
    }
    *list = prev;
}


int main() {
    Node *head = make_node(1, NULL);
    head->next = make_node(11, NULL);
    head->next->next = make_node(3, NULL);
    head->next->next->next = make_node(4, NULL);
    head->next->next->next->next = make_node(3, NULL);
    head->next->next->next->next->next = make_node(5, NULL);
    head->next->next->next->next->next->next = make_node(11, NULL);
    head->next->next->next->next->next->next->next = make_node(6, NULL);
    head->next->next->next->next->next->next->next->next = make_node(7, NULL);
    head->next->next->next->next->next->next->next->next->next = make_node(8, NULL);

    Node **list;
    list = &head;
    print_list(list);

    int retval = pop(list);
    puts("pop");
    print_list(list);

    puts("push");
    push(list, retval+10);
    print_list(list);

    puts("remove '3'");
    remove_by_value(list, 3);
    print_list(list);

    puts("remove '11'");
    remove_by_value(list, 11);
    print_list(list);

    puts("reverse");
    reverse(list);
    print_list(list);
}
