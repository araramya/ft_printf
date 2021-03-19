#include <unistd.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[10] = "Arsen";
    int x = 0;
  while(str[i])
   x +=  (int)write(1, &str[i++], 1);
  printf("%d", x);
}