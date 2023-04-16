#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

#define BUFFER_SIZE_1 10
#define BUFFER_SIZE_2 15

// Buffer and synchronization structures
typedef struct{
    int buffer[BUFFER_SIZE_1];
    int count;
    pthread_mutex_t mutex;
    pthread_cond_t not_full;
    pthread_cond_t not_empty;
} Buffer1;

typedef struct{
    int buffer[BUFFER_SIZE_2];
    int count;
    pthread_mutex_t mutex;
    pthread_cond_t not_full;
    pthread_cond_t not_empty;
} Buffer2;

// Global Variable for pipe
int pipe_fd[2];

// Global Variables for buffers
Buffer1 buffer1;
Buffer2 buffer2;

int main(){
    return 0;
}