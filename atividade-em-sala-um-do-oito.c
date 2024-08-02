/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int amenotejikara(int *first, int *second) {
	int copovazio = *first;
	*first = *second;
	*second = copovazio;
}
int main(void)
{
	int first, second;
	printf("Qual numero voce quer trocar?\n");
	scanf("%d",&first);
	printf("Por qual numero voce quer trocar?\n");
	scanf("%d",&second);
	amenotejikara(&first, &second);
	printf("Terminamos com o primeiro espaco valendo %d e o segundo, %d.", first, second);
	return 0;
}