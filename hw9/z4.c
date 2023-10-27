#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct color
{
    unsigned char r, g, b;
};
typedef struct color Color;

int main()
{
    int width = 600, height = 400;
    int radius = 120; 
    int center_x = width / 2; 
    int center_y = height / 2; 

    Color* data = (Color*)malloc(sizeof(Color) * width * height);

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            int current_x = i - center_x;
            int current_y = j - center_y;
            
            if (sqrt(current_x * current_x + current_y * current_y) <= radius)
            {
                
                data[i + width * j].r = 213;
                data[i + width * j].g = 43;
                data[i + width * j].b = 30;
            }
            else
            {
               
                data[i + width * j].r = 255;
                data[i + width * j].g = 255;
                data[i + width * j].b = 255;
            }
        }
    }

    FILE* file = fopen("japan_flag.ppm", "wb");
    fprintf(file, "P6\n%i %i\n255\n", width, height);
    fwrite(data, sizeof(Color), height * width, file);
    fclose(file);
    
    free(data);

    return 0;
}