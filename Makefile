demo: kwpbar-demo.c
	$(CC) -Wall -g -DDEBUG --std=c99 kwpbar-demo.c -lm -o kwpbar-demo
	./kwpbar-demo

test: kwpbar-test.c
	$(CC) -Wall -g -DDEBUG --std=c99 kwpbar-test.c -lm -o kwpbar-test
	./kwpbar-test
