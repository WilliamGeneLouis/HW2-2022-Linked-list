/*
 * @Author: your name
 * @Date: 2022-03-22 15:09:06
 * @LastEditTime: 2022-03-22 16:45:26
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /HW2(2022)/linked_list.c
 */

/*
A linked list is a set of dynamically allocated nodes, arranged in such a way that each node contains one value and one pointer.
The pointer always points to the next member of the list. If the pointer is NULL, then it is the last node in the list.
A linked list is held using a local pointer variable which points to the first item of the list. 
If that pointer is also NULL, then the list is considered to be empty.
*/


#include <stdio.h>


typedef struct node
{
    /* data */
    int val;  // store data we want printf
    struct node * next; // store pointer point next val
}node_t;



void print_list(node_t * head);











int main (){
    /* define a local variable a */
    //int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    //int * pointer_to_a = &a;
// Notice that we used the & operator to point at the variable a, which we have just created.
    //printf("The value a is %d\n", a);
    //printf("The value of a is also %d\n", *pointer_to_a); /* here means *pointer_to_a equals to a */

    // int a = 1;
    // int * pointer_to_a = &a;

    // /* let's change the variable a */
    // a += 1;

    // /* we just changed the variable again! */
    // *pointer_to_a += 1;

    // /* will print out 3 */
    // printf("The value of a is now %d\n", a);
    

    // create a head node

    node_t * head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    if(head == NULL){
        return 1;
    }

    head -> val = 1;
    head -> next = NULL;

    // from now on I creat a head node for this linked list.

    // here is for add a variable to the end of the list  

    head->next = (node_t *)malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;



}


void print_list(node_t * head){
    node_t * current = head;
    while (current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

void add_element_end(node_t * head, int val){
    node_t * current = head;
    while(current-> != NULL){
        current = current->next;
    }

    // add a new variable

    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;

}
