#include <math.h>
#include "stddev.h"

float standardDeviationFunction(unsigned int count, int *records) {
    float mean = calculateMean(records, count);
    float variance = 0.0;

    for (unsigned int i = 0; i < count; i++) {
        variance += pow(records[i] - mean, 2);
    }

    variance /= count;

    return sqrt(variance);
}


float calculateMean(int *array, unsigned int count) {
    float sum = 0.0;

    for (unsigned int i = 0; i < count; i++) {
        sum += array[i];
    }

    return sum / count;
}
