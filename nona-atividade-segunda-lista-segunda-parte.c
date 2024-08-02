/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
	char palindromo[50];
	printf("Que palavra queres conferir se eh um palindromo?\n");
	fgets(palindromo, stdin);
	if(fputs(palindromo, sizeof(strlen(palindromo)/2))==fputs(palindromo, sizeof(-(strlen(palindromo)/2)))) printf("\nEh sim, man, confirmei aqui.");
	else printf("\nNum eh nao, man, deu diferente aqui.");
	return 0;
}