#include <stdio.h>

#define DELAY 128000;

void display(struct my_time *t);
void update(struct my_time *t);
void delay(void);

struct my_time {
    int hours;
    int minutes;
    int seconds;
};


void main(void)
{
    struct my_time sysTime;
    sysTime.hours = 0;
    sysTime.minutes = 0;
    sysTime.seconds = 0;

    for(;;) {
        update(&sysTime);
        display(&sysTime);
    }
}


void update(struct my_time *t)
{
    t -> seconds++;
    if(t -> seconds == 60) {
        t -> minutes++;
        t -> seconds = 0;
    }
    if(t -> minutes == 60) {
        t -> minutes = 0;
        t -> hours++;
    }

    if(t-> hours == 24) {
        t -> hours = 0;
    }
    delay();
}


void display(struct my_time *t) {
    printf("%d:%d:%d\n", t -> hours, t -> minutes, t -> seconds);
}

void delay(void) {
   long int t;

   for(t = 1; t < DELAY; t++);
}