#include "Project.h"

int main() {
    CircularQueue road1, road2, road3;

    // Initialize queues for each road
    initializeQueue(&road1);
    initializeQueue(&road2);
    initializeQueue(&road3);

    const char *inputFilename = "C:\\Users\\AKSHATHA R V\\Downloads\\project4_data.csv";
    const char *outputFilename = "C:\\Users\\AKSHATHA R V\\Documents\\DSA_Notes\\project4_output.txt";

    // Simulate traffic management using the provided dataset
    simulateTraffic(&road1, &road2, &road3, "C:\\Users\\AKSHATHA R V\\Downloads\\project4_data.csv","C:\\Users\\AKSHATHA R V\\Documents\\DSA_Notes\\project4_output.txt");

    return 0;
}
