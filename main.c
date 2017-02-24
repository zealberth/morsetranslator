
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
  	menu();

  	while (1)
  	{
  		char str[300];
  		int i = 0;
  		char opt;
  		int item = 0;
  		printf("\t\tEscolha o item desejado:\n");
  		printf("1 - Mostrar tabela de codigos\n");
  		printf("2 - Traduzir algum texto (limitado a 300 caracteres)\n");
  		printf("3 - Encerrar programa\n");
  		printf("Opcao: ");
  		scanf("%d", &item);
  		fflush(stdin);
    	__fpurge(stdin);

  		switch(item)
  		{
  			case 1:
  				mostraMorse();
  				break;
  			case 2:
	  			printf("\n\n\t\tDigite um texto para codificar:\n");
				scanf("%[^\t\n]s",str);
  				fflush(stdin);
    			__fpurge(stdin);
				printf("\n");

				while(str[i])
			    {
			        printf("%s ", morse(str[i]));
			      	i++;
			    }
			    printf("\n");
			    printf("Deseja salvar a seu texto e a tradução? [S/N] \n");
			    scanf(" %c",&opt);	
  				fflush(stdin);
    			__fpurge(stdin);
			    opt = toupper(opt);
			    if(opt=='S'){
			      salvaTxt("morse.txt", str);
			    }
  				break;
  			case 3:
  				goto exit;
  				break;
  			default:
  				printf("\nItem incorreto, tente novamente!\n\n\n");
  		}
  	}

  	exit:

    return(1);
}
