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