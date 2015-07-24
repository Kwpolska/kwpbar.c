demo: kwpbar-demo.c
	$(CC) -Wall -g -DDEBUG --std=c99 -D_POSIX_C_SOURCE=200809L kwpbar-demo.c -lm -o kwpbar-demo
	./kwpbar-demo

test: kwpbar-test.c
	$(CC) -Wall -g -DDEBUG --std=c99 -D_POSIX_C_SOURCE=200809L kwpbar-test.c -lm -o kwpbar-test
	./kwpbar-test
