#ifndef __TIME_H__
#define __TIME_H__ 1


struct timespec {
    long tv_sec;
    long tv_nsec; 
};

#ifdef __cplusplus
#extern "C" {
#endif

int sleep(unsigned int seconds);
int nanosleep(const struct timespec *req, struct timespec *rem);

#ifdef __cplusplus
}
#endif

#endif
