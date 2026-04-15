#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    int fd;
    char buffer[100];
    fd= open("data.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
    printf("Enter text to write into file:");
    fgets(buffer,sizeof(buffer),stdin);
    if(fd<0){
    perror("file not open");
    exit(1);
    }
     pid_t pid=fork();
     if(pid>0)
     {
     fp=fopen("data.txt","w");
     if(fp==NULL){
     printf("file cannot be opened\n");
     exit(1);
     }
    }
}