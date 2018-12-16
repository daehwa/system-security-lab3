obj-m += module2.o


all:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	gcc exploit2.c -o exploit2
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	rm exploit2


