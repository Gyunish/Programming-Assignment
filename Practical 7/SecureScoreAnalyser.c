/* 
    SecureScoreAnalyser.c
    Practical 7, Part 2 (c)
    Complete secure student score analyser
    Gyunish Shrestha
    */

#include <stdio.h>
#include <stdbool.h>

#define MAX_ARRAY_SIZE 1000
#define ARRAY_SIZE 5
#define MIN_SCORE 0
#define MAX_SCORE 100

bool validateArrayParams(int *arr, int size) 
{
    if (arr == NULL) 
    {
        printf("Error: Array pointer is NULL\n");
        return false;
    }
    if (size <= 0) 
    {
        printf("Error: Invalid array size (%d)\n", size);
        return false;
    }
    if (size > MAX_ARRAY_SIZE) 
    {
        printf("Error: Array size too large (%d > %d)\n", size, MAX_ARRAY_SIZE);
        return false;
    }
    return true;
}

bool secureCalculateSum(int *arr, int size, int *result) 
{
    if (result == NULL) 
    return false;
    if (!validateArrayParams(arr, size)) return false;

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    *result = sum;
    return true;
}

bool secureFindMax(int *arr, int size, int *maxValue) 
{
    if (maxValue == NULL) return false;
    if (!validateArrayParams(arr, size)) return false;

    int max = *arr;
    for (int i = 1; i < size; i++)
        if (*(arr + i) > max)
            max = *(arr + i);
    *maxValue = max;
    return true;
}

bool secureFindMin(int *arr, int size, int *minValue) 
{
    if (minValue == NULL) return false;
    if (!validateArrayParams(arr, size)) return false;

    int min = *arr;
    for (int i = 1; i < size; i++)
        if (*(arr + i) < min)
            min = *(arr + i);
    *minValue = min;
    return true;
}

bool secureCalculateAverage(int *arr, int size, float *average) 
{
    if (average == NULL) return false;
    int sum;
    if (!secureCalculateSum(arr, size, &sum)) return false;

    *average = (float)sum / size;
    return true;
}

// Input validation: score must be 0-100
bool isValidScore(int score) 
{
    return (score >= MIN_SCORE && score <= MAX_SCORE);
}

int main() 
{
    int scores[ARRAY_SIZE];
    int i = 0;

    printf("=== Secure Student Score Analyser ===\n\n");

    // Input with validation
    while (i < ARRAY_SIZE) 
    {
        int score;
        printf("Enter score %d (0-100): ", i + 1);

        // Check scanf return value
        if (scanf("%d", &score) != 1) 
        {
            printf("Error: Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        if (!isValidScore(score)) 
        {
            printf("Error: Score must be between 0 and 100.\n");
            continue;
        }

        *(scores + i) = score;  // Pointer arithmetic
        i++;
    }

    // Analysis
    int sum, max, min;
    float average;

    printf("\n=== Results ===\n");

    if (secureCalculateSum(scores, ARRAY_SIZE, &sum))
        printf("Sum:     %d\n", sum);

    if (secureCalculateAverage(scores, ARRAY_SIZE, &average))
        printf("Average: %.2f\n", average);

    if (secureFindMax(scores, ARRAY_SIZE, &max))
        printf("Maximum: %d\n", max);

    if (secureFindMin(scores, ARRAY_SIZE, &min))
        printf("Minimum: %d\n", min);

    return 0;
}