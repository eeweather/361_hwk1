#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct color
{
    int red;
    int green;
    int blue;
} color_t;

color_t makeColor(int red, int green, int blue);
int getRed(color_t c);
bool equalColor(color_t c1, color_t c2);
color_t makeDarkerColor(color_t c);

void main(void)
{

    int red = 300;
    int green = 214;
    int blue = -5;

    color_t c, c1, c2, Dark;
    c = makeColor(red, green, blue);
    c1 = makeColor(red, green, blue);
    c2 = makeColor(red, green, blue);
    Dark = makeDarkerColor(c);

    printf("%d %d %d\n", c.red, c.green, c.blue);
    printf("%d\n", getRed(c));
    printf("%d\n", equalColor(c1, c2));
    printf("%d %d %d\n", Dark.red, Dark.green, Dark.blue);
    return;
}

color_t makeColor(int red, int green, int blue)
{

    color_t new;

    if (red > 255)
    {
        new.red = 255;
    }
    else if (red < 0)
    {
        new.red = 0;
    }
    else
    {
        new.red = red;
    }

    if (green > 255)
    {
        new.green = 255;
    }
    else if (green < 0)
    {
        new.green = 0;
    }
    else
    {
        new.green = green;
    }
    if (blue > 255)
    {
        new.blue = 255;
    }
    else if (blue < 0)
    {
        new.blue = 0;
    }
    else
    {
        new.blue = blue;
    }

    return new;
}

int getRed(color_t c)
{

    return c.red;
}

bool equalColor(color_t c1, color_t c2)
{
    bool eq;
    if (c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue)
    {
        return true;
    }
}

color_t makeDarkerColor(color_t c)
{
    color_t Darker;
    if (c.red < 255 && c.red > 0)
    {
        Darker.red = trunc((c.red * 0.7));
    }
    else
    {
        Darker.red = c.red;
    }
    if (c.green < 255 && c.green > 0)
    {
        Darker.green = trunc((c.green * 0.7));
    }
    else
    {
        Darker.green = c.green;
    }
    if (c.blue < 255 && c.blue > 0)
    {
        Darker.blue = trunc((c.blue * 0.7));
    }
    else
    {
        Darker.blue = c.blue;
    }

    return Darker;
}