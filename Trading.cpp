// This is me trying to become better at C++

#include <iostream>
#include <vector>

// Function to calculate the moving average
double calculateMovingAverage(const std::vector<double> &prices, int period)
{
    double sum = 0.0;
    int count = 0;
    for (int i = prices.size() - 1; i >= 0 && count < period; --i)
    {
        sum += prices[i];
        count++;
    }
}


