all:
	gcc -c lib_Rechteck_Funktion.c -o lib_Rechteck_Funktion.o
	ar rcs lib_Rechteck_Funktion.a lib_Rechteck_Funktion.o
	gcc -c main.c -o main.o
	gcc -o Rechteck_Executeable main.o -L. lib_Rechteck_Funktion.a
