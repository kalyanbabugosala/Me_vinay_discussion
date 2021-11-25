
thread: main.o even.o odd.o
	$(CC) main.c even.c odd.c -lpthread -g -o $@
%.o:%.c
	$(CC) -c $< 
clean:
	rm -f *.o
	rm -f thread	
