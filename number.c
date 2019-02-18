/*
   Max Luu
   File name: number.c
   10/19/18
   Description: source file containing the implementation for the functions in
   number.h
*/
#include <stdlib.h>
#include "number.h"

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
void baseConvert(int x, int base, char str[]) 
{
	int i = 0;
	while (x > 0)
	{
		int r = x%base;
		if (r < 10) 
		{
			char c = 48 + r;
			str[i] = c;
			i++;
		} 
		else 
		{
			char a = 55 + r;
			str[i] = a;
			i++;
		}
		x = x/base;
	}
	for (int j = 0; j < i/2; j++)
	{
		char tmp = str[i-j-1];
		str[i-j-1] = str[j];
		
		str[j] = tmp;
	}
}

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
int convertNum(int num, NumType* numInfo) {
	if(0 >= num){ 
		return 0;
	}else{

		char* strbin = malloc(sizeof(char)*MAX_STRING);
		char* strhex = malloc(sizeof(char)*MAX_STRING);
		baseConvert(num, 2, strbin);
		baseConvert(num, 16, strhex);

		strcpy(numInfo->bin,strbin);
		strcpy(numInfo->hex,strhex);

		free(strbin);
		free(strhex);
		return 1;
	}
}

