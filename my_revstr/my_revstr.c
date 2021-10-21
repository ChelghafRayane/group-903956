#include <unistd.h>

void my_putchar(char c);

char *my_revstr(char *str)
{
    int x;
    char y; 
    for (int i=0; str[i]!='\0'; i++){
        x++;    
    }
    x--;
    for (int a=0; x > a; a++){
    y = str[a];
    str[a] = str[x];
    str[x] = y;
    x--;
    }
     return (str);    
          
}
