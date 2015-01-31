#include "expr_assert.h"
#include "stackLib.h"
#include <stdio.h>
#include <stdlib.h>

void test_createStack_should_return_an_empty_stack () {
	Stack node;
	node = createStack();
	assertEqual(node.list->count, 0);
	free(node.list);
}

void test_push_should_return_1_for_one_element_got_pushed () {
	Stack stack = createStack();
	int data = 2;
	assertEqual(push(stack, &data), 1);
	free(stack.list);
}

void test_push_should_return_2_for_two_element_got_pushed () {
	Stack stack = createStack();
	int data1 = 2, data2 = 4;
	// printf("%d\n", push(stack, &data1));
	assertEqual(push(stack, &data1), 1);
	assertEqual(push(stack, &data2), 2);
	free(stack.list);
}

void test_push_should_return_3_for_two_element_got_pushed () {
	Stack stack = createStack();
	int data1 = 2, data2 = 4, data3 = 6;
	assertEqual(push(stack, &data1), 1);
	assertEqual(push(stack, &data2), 2);
	assertEqual(push(stack, &data3), 3);
	free(stack.list);
}

void test_push_should_return_4_for_two_element_got_pushed () {
	Stack stack = createStack();
	int data1 = 2, data2 = 4, data3 = 6, data4 = 8;
	assertEqual(push(stack, &data1), 1);
	assertEqual(push(stack, &data2), 2);
	assertEqual(push(stack, &data3), 3);
	assertEqual(push(stack, &data4), 4);
	free(stack.list);
}

void test_pop_should_delete_an_element () {
	Stack stack = createStack();
	int data = 2;
	push(stack, &data);
	assertEqual(*(int*)pop(stack), 2);
	assertEqual(stack.list->count, 0);
	free(stack.list);
}