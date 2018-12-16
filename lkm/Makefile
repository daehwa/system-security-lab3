# Let the kernel's makefile know which modules it should build.
obj-m += hello.o
obj-m += device.o
obj-m += file.o

#Use the system kernel's Makefile to build the modules here.
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	gcc test-device.c -o test-device
	touch /home/vagrant/temp

#Use the system kernel's Makefile to clean this dir.
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	rm test-device


