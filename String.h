#ifndef __STRING_H
#define __STRING_H

#include <string.h>

#define Strcmp(arr_first, arr_second) strcmp((char *) (arr_first), (char *) (arr_second))
#define Strlen(str_) 		      strlen((char *) (str_))
#define Sprintf(arr_, f_, ...)	      sprintf((char *)(arr_), (f_), ##__VA_ARGS__)

#endif
