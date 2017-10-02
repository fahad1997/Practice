#include<stdio.h>
int main()
{
    char c='Q';
    char *char_character=&c;
    printf("%c %c\n",c,*char_character);
    c='Z';
    printf("%c %c\n",c,*char_character);
    *char_character='Y';
    printf("%c %c\n",c,*char_character);
    return 0;
}
