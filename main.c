#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Tower of hanoi
void toh(int n,char from,char to,char  by)
{
    if(n>=1)
    {
        toh(n-1,from,by,to);
        printf("Moving disk %d form %c -> %c\n",n,from,to);
        toh(n-1,by,to,from);
    }
}
int main()
{
    int x;
    printf("Enter the number of disk");
    scanf("%d",&x);
    toh(x,'A','C','B');
    return 0;
}
