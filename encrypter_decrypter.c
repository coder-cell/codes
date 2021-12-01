#include <stdio.h>
#include <conio.h>
void encrypt(char source[], char target[]);
void decrypt(char source[], char target[]);

int main()
{
    char source[1024], target[1024];
    char input;
    // clrscr();
    printf("Enter your text but add one extra letter before your text : ");
    gets(source);

    // puts(source);
    printf("PRESS \"e\" FOR ENCRYPT OR \"d\" FOR DECRYPT : ");
    scanf("%c" ,&input);
    if (input == 'e')
    {
	encrypt(source, target);
	printf("Your encrypted text is : \n\t%s\n", target);
    }
    else if (input == 'd')
    {
	decrypt(source, target);
	printf("Your decrypted text is : \n\t%s\n", target);
    }
    else
    {
	printf("You have entered wrong letter : ");
    }
    // getch();
    return 0;
}

void encrypt(char source[], char target[])
{
    int i = 0;
	while(source[i] != '\0')
	{
	    target[i] = source[i] + 4;
	    i++;
	}

	target[i + 1] = '\0';

    /* return target;  */
}

void decrypt(char source[], char target[])
{
    int i = 0;
        while(source[i] != '\0')
        {
            target[i] = source[i] - 4;
            i++;
        }
        
        target[i + 1] = '\0';
    
    /* return target;  */
}
