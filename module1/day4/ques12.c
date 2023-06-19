//count number of days

#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int countDays(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = day;

    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }

    if (month > 2 && isLeapYear(year))
        totalDays++;

    return totalDays;
}

int main() {
    int day, month, year;

    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    int totalDays = countDays(day, month, year);

    printf("Total number of days: %d\n", totalDays);

    return 0;
}
