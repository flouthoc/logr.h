/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** logr.h
** A micro header to generate LOG files
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
#define NAME "data"
#define BUFFER_SIZE 
#define DATE_SIZE 28
#define FORMAT_MARGIN 6


#define WARNING "<wr>"
#define WARNING_CLOSE "</wr>"

#define ERROR "<er>"
#define ERROR_CLOSE "</er>"

#define INFO "<in>"
#define INFO_CLOSE "</in>"

#define SUCCESS "<su>"
#define SUCCESS_CLOSE "</su>"

#define	LOG "<lg>"
#define LOG_CLOSE "</lg>"

void getdt(char *);
void printdata(char *);
int writeLog(char *, char *, char *);