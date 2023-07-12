// average.h, Header file for Capstone program that contains the average function.
#ifndef AVERAGE_H
#define AVERAGE_H

int average(double* temps, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += temps[i];
    }
    return sum / n;
};

#endif

