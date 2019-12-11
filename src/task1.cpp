#define G 9.81

float height(int currTime, int startHeight)
{
    float height = startHeight - G * currTime * currTime / 2;

    return height;
}