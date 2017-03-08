#include<stdio.h>
#include"common.h"

#ifdef _WIN32
#include<windows.h>
#define SS 1
#elif 
#define SS 2
#endif

//#define STR(s) #s
//#define LOG2(format,...) printf("%s%d:"format,__FUNCTION__,__LINE__,##__VA_ARGS__)

int main(int argc, char *argv[])
{
    LOG("helloworldd%d\n",5);
    LOG("helloworld\n");
    LOG("%d",SS);
    ;
    return 0;

}