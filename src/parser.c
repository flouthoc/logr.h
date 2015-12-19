/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** parser.c
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "parser.h"

void parse(stackNode **top){
	char popbuf;
	stackNode *top_fake = *top;
	
		while(top_fake->value == '<'){
			if(top_fake->ptr->value == 'w' && top_fake->ptr->ptr->value == 'r' && top_fake->ptr->ptr->ptr->value == '>'){
				top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;
				printf("%s",KYEL);
				printf("\n");
				printf("%s - ",FLASH_WARNING);
				printf("%s",KYEL);
				stackParse(&top_fake);
				printf("%s",KWHT);
			}
			else if(top_fake->ptr->value == 's' && top_fake->ptr->ptr->value == 'u' && top_fake->ptr->ptr->ptr->value == '>'){
				top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;
				printf("%s",KGRN);
				printf("\n");
				printf("%s - ",FLASH_SUCCESS);
				printf("%s",KGRN);
				stackParse(&top_fake);
				printf("%s",KWHT);
			}
			else if(top_fake->ptr->value == 'e' && top_fake->ptr->ptr->value == 'r' && top_fake->ptr->ptr->ptr->value == '>'){
				top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;
				printf("%s",KRED);
				printf("\n");
				printf("%s - ",FLASH_ERROR);
				printf("%s",KRED);
				stackParse(&top_fake);
				printf("%s",KWHT);
			}
			else if(top_fake->ptr->value == 'i' && top_fake->ptr->ptr->value == 'n' && top_fake->ptr->ptr->ptr->value == '>'){
				top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;
				printf("%s",KCYN);
				printf("\n");
				printf("%s - ",FLASH_INFO);
				printf("%s",KCYN);
				stackParse(&top_fake);
				printf("%s",KWHT);
			}
			else if(top_fake->ptr->value == 'l' && top_fake->ptr->ptr->value == 'g' && top_fake->ptr->ptr->ptr->value == '>'){
				top_fake = top_fake->ptr->ptr->ptr->ptr->ptr;
				printf("%s",KMAG);
				printf("\n");
				printf("%s - ",FLASH_LOG);
				printf("%s",KWHT);
				stackParse(&top_fake);
				printf("%s",KWHT);
			}
		}
		printf("\n");
	
}
