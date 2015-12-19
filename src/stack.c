/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** stack.c
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"

void stackCreate(stackNode **top){
	*top = NULL;
}

void stackPush(stackNode **top, char data){


	stackNode *top_fake = *top;
	if(top_fake == NULL){
		top_fake = (stackNode *)malloc(sizeof(stackNode));
		if(top_fake == NULL){
			printf("Memory Allocation Failed");
			return ;
		}
		top_fake->value = data;
		top_fake->ptr = NULL;
		*top = top_fake;
		
	}else{
		
		stackNode *temp;
		temp = malloc(1*sizeof(stackNode));
		temp->value = data;
		temp->ptr = NULL;
		while(top_fake->ptr != NULL)
			top_fake = top_fake->ptr;
		top_fake->ptr = temp;
		
	}

}


char stackPop(stackNode **top){
	stackNode *top_fake = *top;
	char buffer = top_fake->value;
	*top = top_fake->ptr;
	return buffer;
}



void stackdisplayRev(stackNode **top){
	stackNode *temp = *top;
	char pBuf;	
	if(temp->value == '>')
		return;
	pBuf = temp->value;
	temp = temp->ptr;
	stackdisplayRev(&temp);
	printf("%c",pBuf);
}



void stackDisplay(stackNode **top){
	stackNode *top_fake = *top;
	while(top_fake != NULL){
		printf("%c",top_fake->value);
		top_fake = top_fake->ptr;
	}

}

void stackParse(stackNode **top){
	stackNode *top_fake = *top;
	while(top_fake->value != '<'){		
		printf("%c",top_fake->value);
		top_fake = top_fake->ptr;
	}

	if(top_fake->ptr->ptr->ptr->ptr->ptr->ptr)
		top_fake = top_fake->ptr->ptr->ptr->ptr->ptr->ptr;
	else
		top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;

	while(top_fake->value == '\n' && top_fake->ptr){
		printf("\n");
		top_fake = top_fake->ptr;}
		
	
	*top = top_fake;
	return;
}


