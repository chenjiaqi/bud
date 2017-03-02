cc = gcc
a.out:main.o
	cc  -o a.out main.o 
main.o:main.c common.h
	cc -g -c main.c
