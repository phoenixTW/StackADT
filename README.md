# StackADT
A stack Library written in C


							v1.0

Stack createStack(void);

	- creates a Stack structure on which the following operations can be performed
	Stack contain TOP and Count.

int push(Stack, void *);

	- Given a Stack and a reference to some data, this reference will be pushed on the stack. 
	The function returns either the count of elements on the stack or -1 on failure.


void * pop(Stack );

	- Given a Stack, pop the top most element on the stack and return the reference to this popped element.
