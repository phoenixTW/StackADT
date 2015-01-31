#include "expr_assert.h"
#include "stackLib.h"
#include <stdio.h>
#include <stdlib.h>

void test_createStack_should_return_an_empty_stack () {
	Stack node;
	node = createStack();
	assertEqual(node.top, 0x0);
	assertEqual(node.count, -1);
}