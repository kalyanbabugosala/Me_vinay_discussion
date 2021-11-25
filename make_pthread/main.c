#include <stdio.h>
#include <stdlib.h>

#include "thread.h"
int value,data=0; 


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
