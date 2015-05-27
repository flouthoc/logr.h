/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** parser.h
** Author: flouthoc (http:github.com/flouthoc)(flouthoc@gmail.com)
** -------------------------------------------------------------------------*/
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define FLASH_WARNING "\033[1mWARNING\033[0m"
#define FLASH_SUCCESS "\033[1mSUCCESS\033[0m"
#define FLASH_ERROR "\033[1mERROR\033[0m"
#define FLASH_INFO "\033[1mINFO\033[0m"
#define FLASH_LOG "\033[1mLOG\033[0m"


void parse(stackNode **);
