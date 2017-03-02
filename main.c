#include<stdio.h>
#include"common.h"
//#define STR(s) #s
//#define LOG2(format,...) printf("%s%d:"format,__FUNCTION__,__LINE__,##__VA_ARGS__)

int main(int argc, char *argv[])
{
    LOG("helloworldd%d\n",5);
    LOG("helloworld");
}