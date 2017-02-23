
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "funcoes.h"
// #include <curses.h>//<conio.h>
#include <ctype.h>

int main()
{
	char str[200];
	int i = 0;
  char opt;
  menu();
	printf("\t\tDigite um texto para codificar:\n");
	scanf("%[^\t\n]s",str);
	printf("\n\n");

	// getch();

	while(str[i])
    {
        printf("%s ", morse(str[i]));
      	i++;
    }
    printf("\n");
    printf("Deseja salvar a seu texto e a tradução? [S/N] \n");
    scanf("%c",&opt);
    if(opt=='s'){
      salvaTxt("teste.txt", str);
    }

    return(1);
}
