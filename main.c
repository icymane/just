#include <stdio.h>

int main()
{
char var;
printf("Дарова, поздороваться с тобой?\nДа - Y\nНет - N\n");
scanf("%c", &var);
do{

if(var == 'y')
{
printf("Привет, челик\n");
break;
}
if(var == 'n')
{
printf("Как хочешь...\n");
break;
}
else
{
printf("Не та кнопка, пока, ты странный\n");
break;
}
}while(var != 'y' || var != 'n');
return 0;
}
