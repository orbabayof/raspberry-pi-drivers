obj-m += hello.o 

all:
	make -C /lib/modules/6.16.7-arch1-1/build/ M=$(PWD) modules
clean:
	make -C /lib/modules/6.16.7-arch1-1/build/ M=$(PWD) clean 
