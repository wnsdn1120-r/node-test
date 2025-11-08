#include <stdio.h>

void mystract(char dst[],char src[]);

int main(void)
{
    char dst[40];
    char src[20];

    scanf("%s",dst);
    scanf("%s",src);

    mystract(dst,src);

    printf("%s\n",dst);
}

void mystract(char dst[],char src[])
{
    int i,j;

    for(i=0; dst[i] != '\0'; i++)
    {
    }
    for(j=0; src[j] != '\0'; j++)
    {
        dst[i] = src[j];
        i++;
    }
    dst[i] = '\0';
}
