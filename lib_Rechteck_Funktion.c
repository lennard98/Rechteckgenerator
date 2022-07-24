#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void Rechteckgenerator(int Periodenanzahl, int Pulsweite, int Amplitude, int i, int j, int k)
{
    FILE* txt;
    txt = fopen("Rechteck.txt","w");

    for (i=0; i<Periodenanzahl; i++)
    {

        for (j=0; j<Pulsweite; j++)
        {

            fprintf(txt,"%i\n",Amplitude);

        }
        for (k=0; k<Pulsweite; k++)
        {

            fprintf(txt,"%i\n",0);

        }

    }
    fclose(txt);

}
