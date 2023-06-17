//no of days elpsed

#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; 
    } else {
        return 0;
    }
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29; 
    } else {
        return daysInMonth[month - 1];
    }
}

int calculateElapsedDays(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear) {
    int totalDays = 0;

    
    for (int month = startMonth + 1; month <= 12; month++) {
        totalDays += getDaysInMonth(month, startYear);
    }
    totalDays += getDaysInMonth(startMonth, startYear) - startDay;

    
    for (int month = 1; month < endMonth; month++) {
        totalDays += getDaysInMonth(month, endYear);
    }
    totalDays += endDay;

    
    for (int year = startYear + 1; year < endYear; year++) {
        if (isLeapYear(year)) {
            totalDays += 366; 
        } else {
            totalDays += 365; 
        }
    }

    return totalDays;
}

int main() {
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;

    printf("Enter the start date (dd mm yyyy): ");
    scanf("%d %d %d", &startDay, &startMonth, &startYear);

    printf("Enter the end date (dd mm yyyy): ");
    scanf("%d %d %d", &endDay, &endMonth, &endYear);

    int elapsedDays = calculateElapsedDays(startDay, startMonth, startYear, endDay, endMonth, endYear);

    printf("Number of days elapsed: %d\n", elapsedDays);

    return 0;
}
