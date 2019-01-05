#include<stdio.h>
#include<conio.h>
int main ()
{
    int();
    int x,y,hasil;
    printf("masukan nilai x : ");
    scanf("%i",&x);
    printf("masukan nilai y : ");
    scanf("%i",&y);
    printf("\n");
    hasil=x;
    for(int i=1;i<y;i++)
    {
        printf("%i*%i=%i\n",hasil,x,hasil*x);
    }
    printf("\n hasil : %i",hasil);
    getch();

}
