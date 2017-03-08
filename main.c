#include<stdio.h>
#include"common.h"

#ifdef _WIN32
#include<windows.h>
#define SS 1
#else 
#define SS 2
#endif

//#define STR(s) #s
//#define LOG2(format,...) printf("%s%d:"format,__FUNCTION__,__LINE__,##__VA_ARGS__)



void executeCmd(const char * cmd,char *result)
{
    char result_buf[1024] = {0,};
    

}


int main(int argc, char *argv[])
{
    FILE * fstream = NULL;
    char buff[1024];
    memset(buff,0,sizeof(buff));
    if(NULL == (fstream = popen("ping www.baidu.com","r")))
    {
        fprintf(stderr,"execute command failed");
        return -1;
    }
    //write(fstream,"uname -a",8);
    while(NULL != fgets(buff,sizeof(buff),fstream))
    {
        printf("%s",buff);
    }
    pclose(fstream);
    return 0;
}