#include <stdio.h>

int main()
{
    
int Periodenanzahl = 10;
int Pulsweite = 5;
int Amplitude =1;

int i;
int j;
int k;

    for (i=0;i<Periodenanzahl;i++)
    {
        for (j=0;j<Pulsweite;j++)
        {
            printf("%i \n",Amplitude);
        }
        for (k=0;k<Pulsweite;k++)
        {
            printf("0 \n");
        }    
    }
}
