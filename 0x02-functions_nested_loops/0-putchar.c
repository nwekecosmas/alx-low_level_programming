#include "main.h"
/**

 * main - prints a string of characters

 * Description: prints _putchar, followed by a new line

 * Return: 0

 */
int main(void)  
{  
char a[] = "_putchar";
int i;  
for (i = 0; i < 8; i++)    
{
__putchar(a[i]);      
}  
__putchar('\n');  
return (0); 
}
