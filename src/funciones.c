#include <stdio.h>
#include "codigo.h"

void printBytes(void *pointer, int size){
	unsigned char *p= pointer;
	for(int i = 0;i<size; i++){
		printf("Byte %d : %x\n",i,p[i]);
	}
}
void bytesInt(int valor){
	printBytes(&valor,sizeof(int));
}


void bytesLong(long valor){
	printBytes(&valor,sizeof(long));

}

void bytesFloat(float valor){
	printBytes(&valor,sizeof(float));
}

void bytesDouble(double valor){
	printBytes(&valor,sizeof(double));
}

void bytesChar(char valor){
	printBytes(&valor,sizeof(char));
}


void bytesShort(short valor){
	printBytes(&valor,sizeof(short));

}

int cmp(char *s1, char* s2){
	while(*s1 && *s2){
		if(*s1!=*s2){
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1==*s2;
}



int myAtoi(char *str) {
    int res = 0;  // Initialize result 
    int sign = 1;  // Initialize sign as positive 
    int i = 0;  // Initialize index of first digit 
       
    // If number is negative, then update sign 
    if (str[0] == '-') 
    { 
        sign = -1;   
        i++;  // Also update index of first digit 
    } 
       
    // Iterate through all digits and update the result 
    for (; str[i] != '\0'; ++i) 
        res = res*10 + str[i] - '0'; 
     
    // Return result with sign 
    return sign*res; 
}
