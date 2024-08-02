/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
	char string[20];
	int ampulheta, qtd=0;
	printf("Forneca uma string\n");
	fgets(string, stdin);
	for(ampulheta=0; ampulheta<100; ampulheta++) if(string[ampulheta]!="\0") qtd++;
	printf("\nO comprimento da string eh %d e eu nao usei strlen");
	return 0;
}