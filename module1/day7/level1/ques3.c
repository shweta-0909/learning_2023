//function to extract each line in the .csv file and store it in an array of structures. 

//Also implement functions to display the contents of the array of structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;


int extractLogData(LogEntry logData[], const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    char line[100];
    int entryCount = 0;

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {

        char* token = strtok(line, ",");
        logData[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logData[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        logData[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logData[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logData[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logData[entryCount].time, token);

        entryCount++;
    }

    fclose(file);

    return entryCount;
}

void displayLogData(const LogEntry logData[], int entryCount) {
    printf("Log Entries:\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");

    for (int i = 0; i < entryCount; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n", logData[i].entryNo, logData[i].sensorNo,
               logData[i].temperature, logData[i].humidity, logData[i].light, logData[i].time);
    }
}

int main() {
    LogEntry logData[MAX_ENTRIES];
    int entryCount;

    entryCount = extractLogData(logData, "data.csv");

    if (entryCount > 0) {
        displayLogData(logData, entryCount);
    }

    return 0;
}
