#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char* argv[]) {

    int fd, len;
    char buf[10];
    fd = open("/dev/hello_device",O_RDONLY,0600);
    len = read(fd,buf,10);
    printf("read %s of length %d\n",buf,len);
    close(fd);

    return 0;
}
