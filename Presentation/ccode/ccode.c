//Code written on December 15, 2020
//by SIKANDER KATHAT
//This program implements a boolean function in C 

#include <stdio.h>

//The  main function
int main(void)
{

//2 bits = 1 baud
//4 bits = 1 nibble
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  A=0,B=0,C=0;//inputs

unsigned char one = 1;//used for displaying the output in bit
unsigned char S,c;//output

S=((~A)&(~B)&(C))|((~A)&(B)&(~C))|((A)&(~B)&(~C))|((A)&(B)&(C));//Boolean function 
c=((A)&(B))|((A)&(C))|((B)&(C));//Boolean function

printf("%x\n",one&S);//output S
printf("%x\n",one&c);//output c

return 0;
}