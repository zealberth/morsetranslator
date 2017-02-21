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

int main()
{
	char str[200];
	int i = 0;
	printf("Enter your string: ");
	scanf("%[^\t\n]s",str);
	printf("\n\n");
	//getch();
	while(str[i])
   {
      	printf("%s ", morse(str[i]));
      	i++;
   }

	return(1);

}
