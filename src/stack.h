/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** stack.c
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
struct node{

	char value;
	struct node *ptr;
};

typedef struct node stackNode;

void stackCreate(stackNode **);
void stackPush(stackNode **, char data);
char stackPop(stackNode **);
void stackDestory(stackNode **);
void stackPopUntil(stackNode **, char data);
void stackParse(stackNode **);
