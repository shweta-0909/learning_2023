//calculate the difference between two time periods using a user-defined function


#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

TimePeriod getTimePeriod();
TimePeriod calculateDifference(TimePeriod time1, TimePeriod time2);

int main() {
    TimePeriod time1, time2, difference;

    printf("Enter the first time period\n");
    time1 = getTimePeriod();

    printf("Enter the second time period\n");
    time2 = getTimePeriod();

    difference = calculateDifference(time1, time2);

    printf("\nDifference between the two time periods: %02d:%02d:%02d\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

TimePeriod getTimePeriod() {
    TimePeriod time;

    printf("Enter hours: ");
    scanf("%d", &time.hours);

    printf("Enter minutes: ");
    scanf("%d", &time.minutes);

    printf("Enter seconds: ");
    scanf("%d", &time.seconds);

    return time;
}

TimePeriod calculateDifference(TimePeriod time1, TimePeriod time2) {
    TimePeriod difference;

    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;

    int diffSeconds = totalSeconds1 - totalSeconds2;

    difference.hours = diffSeconds / 3600;
    diffSeconds = diffSeconds % 3600;

    difference.minutes = diffSeconds / 60;
    difference.seconds = diffSeconds % 60;

    return difference;
}
