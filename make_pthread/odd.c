//#include<pthread.h>
#include "thread.h"

void *odd_num(void *ptr1)
{
	
	int lock_var = pthread_mutex_lock(&mutex);
	if (lock_var){
		printf("Lock not acquired(odd_num) : %d\n",lock_var);
		pthread_exit(NULL);
	}
	do{
		if(data%2!=0){
			printf("Odd : %d\n",data);
			data++;
		}
		
		else{
			pthread_mutex_unlock(&mutex); // unlock the mutex
		}
		
	}
	while(data<=value);
	
}
