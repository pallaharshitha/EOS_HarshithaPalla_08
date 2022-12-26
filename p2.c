#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include <sys/stat.h>
       #include <fcntl.h>

int main(void)
{
    int fd=0;
    fd=open("/usr/include/stdio.h\n",O_WRONLY);
    write(fd,"HARSHI\n",7);
    close(fd);
    return 0;

}
