#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char **argv)
{
    if (argc != 6)
    {
        fprintf(stderr, "Usage: %s <initial_balance> <monthly_contribution> <annual_rate_of_return> <annual_inflation_rate> <years_until_retirement>\n", argv[0]);
        return 1;
    }
    double initial_balance = atof(argv[1]);
    double monthly_contribution = atof(argv[2]);
    double annual_rate_of_return = atof(argv[3]);
    double annual_inflation_rate = atof(argv[4]);
    int years_until_retirement = atoi(argv[5]);
    if (initial_balance < 0 || monthly_contribution < 0 || annual_rate_of_return < 0 || annual_inflation_rate < 0 || years_until_retirement < 0)
    {
        fprintf(stderr, "Invalid input values. Please provide non-negative values.\n");
        return 1;
    }
    double monthly_rate_of_return = annual_rate_of_return / 12.0;
    double monthly_inflation_rate = annual_inflation_rate / 12.0;
    