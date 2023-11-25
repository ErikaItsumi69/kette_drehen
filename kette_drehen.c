#include <stdio.h>
//test 2
void reverse_str( char puffer [], int laenge);
int my_strlen(char puffer []);

int main(void)
{
	// Zeichenkette mit maximale 199 Zeichen
	char puffer[200];
	while(1) 
	{
		printf("Geben Sie eine Zeichenkette ein:\n");

		int anz = scanf ( "%[^\n]" , puffer);

		getchar(); // Konsumiere '\n'

		if(anz != 1) 
		{
			printf("Ende\n");
			break;
		}

		int laenge = my_strlen(puffer);

		reverse_str(puffer, laenge);

		printf("reverse-puffer:\n");
		printf("%s\n", puffer);
	}
	return 0;
}

int my_strlen(char puffer[])
{
	int i = 0;
	int len = 0;
	
	while(1)
	{
		if(puffer[i] == 0)
		{
			break;
		}
		else
			len++;
		i++;
	}	

	return len;
}

void reverse_str( char puffer [], int laenge)
{
	char swap = ' ';
	laenge--;

	for(int i = 0; i <= laenge/2; i++)
	{
		swap = puffer[i];
		puffer[i] = puffer[laenge-i];
		puffer[laenge-i] = swap;
	}
}
