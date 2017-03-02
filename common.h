#ifndef _COMMON_H
#define _COMMON_H

#define STR(s) #s
#define LOG(format,...) printf("%s %d:"format,__FUNCTION__,__LINE__,##__VA_ARGS__)

#endif