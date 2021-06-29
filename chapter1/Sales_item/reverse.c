#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
// #include <unistd.h>
#define BLOCKSIZE 1
#define S_IRWXUGO S_IRWXU | S_IRWXG | S_IRWXO
int main(int argc, char **argv)
{
    char *input = argv[1];
    char *output = argv[2];
    int in_fd;
    int out_fd;
    char buf[BLOCKSIZE];
    int num_read;
    int num_written;
    off_t file_size;
    off_t copied;
    // code goes here to open input and output file.

    // We can get the file size with lseek after opening the file
    file_size = lseek(in_fd, 0, SEEK_END);

    // we can also move back from the current location via lseek
    lseek(in_fd, -1, SEEK_CUR);

    //code goes here to actually do the reversal

    return 0;
}