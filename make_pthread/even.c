//#include<pthread.h>
#include "thread.h"

void *even_num(void *ptr){
	
	int lock_var = pthread_mutex_lock(&mutex);
	if (lock_var){
		printf("Lock not acquired(Even_Num) : %d\n",lock_var);
		pthread_exit(NULL);
	}
	do{
	
		if(data%2==0){
			printf("Even : %d\n",data);
			data++;
		}
		
		else{
			pthread_mutex_unlock(&mutex); // unlock the mutex 
		}
		 
	}
	while(data<=value);
	
}

