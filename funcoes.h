//GERADOR DE SIMBOLOS
void strpad(char sym, int qtd,int barraEne,int tempo){
 struct winsize w;
 ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
 int i;
 if(qtd==0)
   qtd = w.ws_col;
 for(i=0; i<=qtd-1;i++){
   printf("%c",sym);
   usleep(tempo);
 }
 if(barraEne==1)
 printf("\n");
}
void menu(){
  strpad('#',0,0,5000);
  printf("\t \t \t \t M O R S E T R A N S L A T O R\n");
  system("sleep 01");
  printf("\t -- --- .-. ... . / - .-. .- -. ... .-.. .- - --- .-.\n");
  strpad('#',0,1,4000);
}
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
	else if (c == 'I') return "--";
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