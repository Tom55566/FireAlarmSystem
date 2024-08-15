#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

#define SHM_KEY 4949

void camera_capture() {
    system("ffmpeg -f video4linux2 -i /dev/video0 -s 640x480 -vframes 1 -loglevel quiet -y ../excute/node_js/Data/alert_image.jpg");
}

int main() {
    //Shared memory set
    int shmid = shmget(SHM_KEY, sizeof(unsigned char), 0644);
    if (shmid == -1) {
        perror("shmget failed!\n");
        exit(1);
    }

    //Shared memory get
    unsigned char *shm_flag = (unsigned char *)shmat(shmid, NULL, 0);
    if (shm_flag == (unsigned char *)(-1)) {
        perror("shmat failed!\n");
        exit(1);
    }

    while (1) {
        if (*shm_flag) {  // temperature > 20 & coVal >60
            camera_capture();
            printf("Camera capture! flag = %d\n", *shm_flag);
            sleep(1);  // 1s 
        }else{
            printf("Camera failed! flag = %d\n", *shm_flag);
            sleep(1);
        }
    }

    return 0;
}