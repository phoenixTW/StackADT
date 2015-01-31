typedef struct stack Stack;
typedef Stack* Stack_ptr;

struct stack {
	Stack_ptr top;
	int count;
};

Stack createStack(void);