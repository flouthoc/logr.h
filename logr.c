#include <stdio.h>
#include <time.h>
#include <string.h>
/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** logr.c
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
#include <unistd.h>
#include <fcntl.h>
#include "logr.h"

int createdump(char *path){

	int fd;
	if(!path){
		fd = open(NAME,O_WRONLY | O_CREAT | O_APPEND, S_IRWXU);}
	else{
		fd = open(path,O_WRONLY | O_CREAT | O_APPEND, S_IRWXU);}
	return fd;
}


int writeLog(char *msg, char *path, char *tag){

	int fd;
	char holderTagOpen[4];
	char holderTagClose[5];

	strcpy(holderTagOpen,LOG);
	strcpy(holderTagClose,LOG_CLOSE);

	if(strcmp(tag,"lg") == 0 || strcmp(tag,"LOG") == 0){
		//do nothing
	}
	else if(strcmp(tag,"er") == 0 || strcmp(tag,"ERROR") == 0){
		strcpy(holderTagOpen,ERROR);
		strcpy(holderTagClose,ERROR_CLOSE);}
	else if(strcmp(tag,"wr") == 0 || strcmp(tag,"WARNING") == 0){
		strcpy(holderTagOpen,WARNING);
		strcpy(holderTagClose,WARNING_CLOSE);}
	else if(strcmp(tag,"su") == 0 || strcmp(tag,"SUCCESS") == 0){
		strcpy(holderTagOpen,SUCCESS);
		strcpy(holderTagClose,SUCCESS_CLOSE);}
	else if(strcmp(tag,"in") == 0 || strcmp(tag,"INFO") == 0){
		strcpy(holderTagOpen,INFO);
		strcpy(holderTagClose,INFO_CLOSE);}



	size_t msg_length = strlen(msg);
	char dtnt[DATE_SIZE];
	char buffer[DATE_SIZE + msg_length + 2*FORMAT_MARGIN + 1];
	getdt(dtnt);
	memset(buffer, 0, (DATE_SIZE + msg_length + 2*FORMAT_MARGIN + 10));
	snprintf(buffer,(DATE_SIZE + msg_length + 2*FORMAT_MARGIN + 1),"%s[%s] %s%s\n",holderTagOpen,dtnt,msg,holderTagClose);

	if(!path){
		fd = createdump(NULL);}
	else{
		fd = createdump(path);}

	write(fd,buffer,((DATE_SIZE + (msg_length) + 2*FORMAT_MARGIN + 1) - 1));
	return 0;

}

void getdt(char *ptr){

	time_t p;
	struct tm ts;
	char buf[80];
	time(&p);
	ts = *localtime(&p);
	strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
	strcpy(ptr,buf);

}
