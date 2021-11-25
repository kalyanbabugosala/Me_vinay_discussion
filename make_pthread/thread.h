#include <pthread.h>
void *even_num(void *ptr);
void *odd_num(void *ptr1);


extern int value,data,lock_var;
pthread_mutex_t mutex;
