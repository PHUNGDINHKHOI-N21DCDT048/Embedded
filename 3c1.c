#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time sum;

    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;

    return sum;
}

int main() {
    struct Time time1, time2, result;
    printf("Input the first time: ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Input the second time: ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);
    result = addTime(time1, time2);
    printf("\nResultant Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}