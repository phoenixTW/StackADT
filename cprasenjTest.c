#include "stackLib.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>
#define log(test_description) int log = printf("** Description->%s\n\n", test_description)
void test_createStack_001() {
log("creates an empty stack");
Stack stack = createStack();
LinkedList tmp = {NULL,NULL,0};
assertEqual(stack.list->head,tmp.head);
assertEqual(stack.list->count,tmp.count);
assertEqual(stack.list->tail,tmp.tail);
assertEqual(*(stack.top),NULL);
}
void test_push_001() {
log("Pushes an integer element to a stack");
Stack stack = createStack();
int data = 24,data1 = 23,res;
res = push(stack,&data);
assertEqual(res,1);
assertEqual(*((int *)(*(stack.top))->data),24);
res = push(stack,&data1);
assertEqual(res,2);
assertEqual(*((int *)(*(stack.top))->data),23);
}
void test_pop_001() {
log("Pops an integer element from the top of a stack");
Stack stack = createStack();
int data = 24,data1 = 23,res;
void* result;
res = push(stack,&data);
assertEqual(res,1);
assertEqual(*((int *)(*(stack.top))->data),24);
res = push(stack,&data1);
assertEqual(res,2);
assertEqual(*((int *)(*(stack.top))->data),23);
result = pop(stack);
assertEqual(stack.list->count,1);
assertEqual(*((int *)(*(stack.top))->data),24);
}