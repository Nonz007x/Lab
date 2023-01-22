#include <stdio.h>

int main()
{
    int test_count;
    int minute;
    int velocity;
    float displacement;
    scanf("%d", &test_count);
    for (int i = 0; i < test_count; i++)
    {
        scanf("%d %d", &velocity, &minute);
        displacement += velocity * ((float)minute/60);
    }
    printf("%.1f\n", displacement); 

}