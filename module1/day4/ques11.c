//compute total seconds

#include <stdio.h>

int computeTotalSeconds(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    int hours, minutes, seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    int totalSeconds = computeTotalSeconds(hours, minutes, seconds);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
