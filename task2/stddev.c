#include <math.h>
#include "stddev.h"

/**
 * standardDeviationFunction - calculate standard deviation of array of integers
 * @count: number of records in array
 * @records: array of integers
 * Return: standard deviation of @records
 */
float standardDeviationFunction(unsigned int count, int *records) {
    float mean = calculateMean(records, count);
    float variance = 0.0;

    for (unsigned int i = 0; i < count; i++) {
        variance += pow(records[i] - mean, 2);
    }

    variance /= count;

    return sqrt(variance);
}

/**
 * calculateMean - calculate average of elements of array of integers
 * @array: pointer to array of integers
 * @count: number of elements of @array
 * Return: average  of elements of @array
 */
float calculateMean(int *array, unsigned int count) {
    float sum = 0.0;

    for (unsigned int i = 0; i < count; i++) {
        sum += array[i];
    }

    return sum / count;
}
