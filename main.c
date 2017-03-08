#include<stdio.h>
#include"common.h"
//#include<unistd.h>

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
    char buff[1024] = {0,};
    if(NULL == (fstream = popen("telnet","w")))
    {
        fprintf(stderr,"execute command failed");
        return -1;
    }
    fprintf(fstream,"?\n");
    int j = 1;
    while(j != 0) 
    {
        scanf("%d",&j);
        fprintf(fstream,"?\n");
        printf("\n**********\n");
    }

   // while(NULL != fgets(buff,sizeof(buff),fstream))
    //{
     //   printf("%s",buff);
   // }
    pclose(fstream);
    return 0;
}