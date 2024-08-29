#include <stdio.h>
#include <time.h>

void Print(int sum)
{
    long long timestamp = time(NULL);
    printf("result = %d, timestamp: %lld\n", sum, timestamp);
}

int AddToVal(int from, int to)
{
    int sum = 0;
    int i = 0;
    for(i = from; i <= to; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int sum =  AddToVal(0, 100);
    Print(sum);
    return 0;    
}