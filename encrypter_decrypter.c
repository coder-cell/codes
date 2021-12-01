#include<stdio.h>
// #include<conio.h>
unsigned char encrypt(char *source, char *target);
unsigned char decrypt(char *source, char *target);


int main(){
    unsigned char source[1024], input[1], target[1024];
    printf("Enter your text but add one extra letter before your text : ");
    gets(source);
    
puts(source);
printf("PRESS \"e\" FOR ENCRYPT OR \"d\" FOR DECRYPT : ");
gets(input);
if(input[0] == 'e'){
    encrypt(&source, &target);
        printf("Your encrypted text is : \n\t%s\n", target);
}
else if (input[0] == 'd')
{
    decrypt(&source, &target);
    printf("Your decrypted text is : \n\t%s\n", target);
}
else
{
    printf("You have entered wrong letter : ");
}

return 0;
}




unsigned char encrypt(char *source, char *target){
for(int i = 0; i<1024; i++){
    if(source[i] != '\0'){
        target[i] = source[i] + 100  ;
    }
    target[i+1] = '\0';
}
/* return target;  */
}

unsigned char decrypt(char *source, char *target){
    for (int i = 0; i < 1024; i++)
    {
        if (source[i] != '\0')
        {
            target[i] = source[i] - 100 ;
        }
        target[i + 1] = '\0';
    }
}

