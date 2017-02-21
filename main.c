#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

const char * morse(int c)
{
	c = toupper(c);
		 if (c == 'A') return ".-";
	else if (c == 'B') return "-...";
	else if (c == 'C') return "-.-.";
	else if (c == 'D') return "-..";
	else if (c == 'E') return ".";
	else if (c == 'F') return "..-.";
	else if (c == 'G') return "--.";
	else if (c == 'H') return "....";
	else if (c == 'I') return ".---";
	else if (c == 'J') return ".---";
	else if (c == 'K') return "-.-";
	else if (c == 'L') return ".-..";
	else if (c == 'M') return "--";
	else if (c == 'N') return "-.";
	else if (c == 'O') return "---";
	else if (c == 'P') return ".--.";
	else if (c == 'Q') return "--.-";
	else if (c == 'R') return ".-.";
	else if (c == 'S') return "...";
	else if (c == 'T') return "-";
	else if (c == 'U') return "..-";
	else if (c == 'V') return "...-";
	else if (c == 'W') return ".--";
	else if (c == 'X') return "-..-";
	else if (c == 'Y') return "-.--";
	else if (c == 'Z') return "--..";

	else if (c == '1') return ".----";
	else if (c == '2') return "..---";
	else if (c == '3') return "...--";
	else if (c == '4') return "....-";
	else if (c == '5') return ".....";
	else if (c == '6') return "-....";
	else if (c == '7') return "--...";
	else if (c == '8') return "---..";
	else if (c == '9') return "----.";
	else if (c == '0') return "-----";

	else if (c == ',') return "--..--";
	else if (c == '.') return ".-.-.-";
	else if (c == ' ') return "/";

	else return "?";
}

void mostraMorse()
{
    int cont;

    for (cont = 48; cont <= 57; cont++)
    {
        printf ("- %c = %s\n", cont, morse(cont));
    }
    printf("\n");
    for (cont = 65; cont <= 90; cont++)
    {
        printf ("- %c = %s\n", cont, morse(cont));
    }
    printf("\n");
    printf ("- %c = %s\n", 44, morse(44));
    printf ("- %c = %s\n", 46, morse(46));
    printf ("- SPC = %s\n\n", morse(32));
}

void salvaTxt(const char *nomeArquivo, const char *str)
{
    FILE *fp = fopen(nomeArquivo, "w");
    if (fp != NULL)
    {
        int i = 0;
        while(str[i])
        {
            fprintf(fp, "%s ", morse(str[i]));
            i++;
        }
        fclose(fp);
    }
}


int main()
{
	char str[200];
	int i = 0;

	printf("Enter your string: ");
	scanf("%[^\t\n]s",str);
	printf("\n\n");

	getch();

	while(str[i])
    {
        printf("%s ", morse(str[i]));
      	i++;
    }

    //mostraMorse();
    //salvaTxt("teste.txt", str);

    return(1);
}
