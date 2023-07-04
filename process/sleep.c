#include <time.h> 

int sleep(unsigned int seconds) {
    struct timespec req = { .tv_sec = seconds, .tv_nsec = 0 };
    struct timespec rem;
    return nanosleep(&req, &rem);
}