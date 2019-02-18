/*
   Max Luu
   File name: number.h
   10/19/18
   Description: header file containing the declaration for the functions in
   number.c
*/
#ifndef __NUMBER__
#define __NUMBER__

#define MAX_STRING 100
#include <string.h>
typedef struct tagNumType{
	char hex[MAX_STRING];
	char bin[MAX_STRING];
} NumType;
/***********************************************************
**Name: convertNum
**Description: converts an integer in base 10 to both base 2 and base 16
and stores the information in a NumType structure
**Parameters:
**		num: the decimal value to be converted
** 		numInfo: a pointer to be a NumType struct to receive the results of
receive the conversion
Returns: 0 on failure, non-zero on success
**Side Effects: Overview the two strings inside the NumType structure
************************************************************/
int convertNum(int num, NumType* numInfo);

/*************************************************************
**Name: baseConvert
**Description: converts an integer to any base from 2 to infinity
and store the results inside a string
**Parameters:
**		num: the decimal value to be converted
**		base: the base number to be represented in
**		str[]: the string to store the result
Returns void
**************************************************************/
void baseConvert(int num, int base, char str[]);

#endif
