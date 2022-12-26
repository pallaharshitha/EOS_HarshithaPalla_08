#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    int fd=0;
    unsigned char buff[25];
    fd=open("/usr/include/stdio.h\n",O_RDONLY);
    read(fd,buff,21);
    printf("Recieved:%s",buff);
    close(fd);
    return 0;

}

