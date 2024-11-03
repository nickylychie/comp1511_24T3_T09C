// Nicole, 24T3 Week 9
// More difficult linked list exercises

#include <stdio.h>
#include <stdlib.h>

struct node {
    // The data stored in the node
    int data;
    // Pointer to the next node in the linked list
    struct node *next;
};

// Given two linked lists:
// return 0, if neither list contains even numbers.
// return 1, if one list contains even numbers, but the other does not.
// return -1, if both lists contain even numbers.
int list_evens(struct node *head1, struct node *head2);

// Given a linked list that is ordered in acending order and a value to insert, 
// insert the value into the list that will allow the list to remain in ascending 
// order.
struct node *list_ordered_insert(struct node *head, int data);

// Given a linked list, remove the node with the smallest value from the linked 
// list and return the new head of the list.
struct node *list_delete_smallest(struct node *head);

// Given a linked list, make a copy of the list and free the old list and return
// the new head of the list.
struct node *list_copy(struct node *head1);

// Given two linked lists, append list2 to list1.
struct node *list_append(struct node *head1, struct node *head2);

// Given a linked list, reverse the list and return the new head of the list.
struct node *list_reverse(struct node *head);

// Given two linked lists, return a new list that is constructed of nodes 
// containing any values that appear in both lists.
struct node *list_find_intersection(struct node *head1, struct node *head2);

// Given a linked list and a value, count the number of times that value appears 
// in the linked list.
int list_count_occurrences(struct node *head, int data);
