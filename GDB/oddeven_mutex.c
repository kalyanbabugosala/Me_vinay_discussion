#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int value,data=0,lock_var;
pthread_mutex_t mutex;

void *even_num(void *ptr){
	
	lock_var = pthread_mutex_lock(&mutex);
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

void *odd_num(void *ptr1){
	
	lock_var = pthread_mutex_lock(&mutex);
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
int main(){

	printf("Enter the Max value : ");
	scanf("%d",&value);
	
	pthread_t tid[2]; // creating array of Thread Id
	
	//creating two threads
	
	pthread_create(&tid[0],NULL,&even_num,NULL);
	pthread_create(&tid[1],NULL,&odd_num,NULL);
	
	//joining the threads
	
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	
	printf("In main function.");
	

	return 0;
}





















