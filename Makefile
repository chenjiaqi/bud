cc = gcc
#SHELL = cmd.exe

a.exe:main.o
	$(cc) -o a.exe main.o 
main.o:main.c
	$(cc) -c -g -o main.o main.c
