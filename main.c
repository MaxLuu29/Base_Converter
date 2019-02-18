/*
   Max Luu
   File name: main.c
   10/19/18
   Description: main file for inputting the argv arguments into the functions declared in number.h
*/

#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main(int argc, char* argv[]){
	for (int i = 1; i < argc; i++){
		NumType numInfo;
		if (convertNum(atoi(argv[i]), &numInfo)){
			printf("Decimal: %s\tBinary: %s\tHex: %s\n",argv[i],numInfo.bin,numInfo.hex);
		}
	}
	
	return 0;
}
