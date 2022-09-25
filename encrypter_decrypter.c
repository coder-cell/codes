#include <stdio.h>
void encrypt(char source[], char target[]);
void decrypt(char source[], char target[]);

int main()
{
    char source[1024], target[1024];
    char input;
    printf("Enter your text : ");
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

	target[i] = '\0';

}

void decrypt(char source[], char target[])
{
    int i = 0;
        while(source[i] != '\0')
        {
            target[i] = source[i] - 4;
            i++;
        }
        
        target[i] = '\0';
}
