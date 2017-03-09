cc = gcc
#SHELL = cmd.exe

main.out:main.o popen2.o
	$(cc) -o main.out main.o popen2.o 
main.o:main.c 
	$(cc) -c  -o main.o main.c
popen2.o:popen2.c
	$(cc) -c -o popen2.o popen2.c
