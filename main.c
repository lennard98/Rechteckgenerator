#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib_Rechteck_Funktion.h"

int main(int argc, char* argv[])
{
    int Periodenanzahl;
    int Pulsweite;
    int Amplitude;
    int i;
    int j;
    int k;
    int c;

    if ( argc <2)
    {
        printf("Bitte -h nutzen \n");
        return 0;
    }

    while ((c = getopt (argc, argv, "hf1:"))!= 1)
        switch (c)
        {
        case 'h':
            printf("Um die Periodenanzahl, Pulsweite und Amplitude einzugeben nutzen Sie bitte den Schalter -f. Die Rückgabe wird in die Datei Rechteck.txt ausgegeben \n");
            exit(0);

        case 'f':
            printf("Bitte Periodenanzahl als positive Ganzzahl eingeben.\n");
            scanf("%i",&Periodenanzahl);

            printf("Bitte Pulsweite als positive Ganzzahl eingeben.\n");
            scanf("%i",&Pulsweite);

            printf("Bitte Amplitude als positive Ganzzahl eingeben.\n");
            scanf("%i",&Amplitude);

            if (Periodenanzahl < 65535 && Pulsweite <65535 && Amplitude < 65535)
            {
                printf("Eingegebene Werte sind \n Periodenanzahl %i \n Pulsweite %i \n Amplitude  %i \n",Periodenanzahl,Pulsweite,Amplitude);

                Rechteckgenerator(Periodenanzahl,Pulsweite,Amplitude,i,j,k);
            }

            else
            {
                printf("Bitte Eingabe nochmals versuchen oder die Hilfe -h nutzen.\n");

                printf("Bitte Periodenanzahl als positive Ganzzahl eingeben.\n");
                scanf("%i",&Periodenanzahl);

                printf("Bitte Pulsweite als positive Ganzzahl eingeben.\n");
                scanf("%i",&Pulsweite);

                printf("Bitte Amplitude als positive Ganzzahl eingeben.\n");
                scanf("%i",&Amplitude);
            }


            return 0;
        case '?':
            printf("Bitte -h benutzen!\n");
            exit(1);

        }
}



