#include <stdio.h>

void main(void)
{
    printf("hello");
    return;
}

    color_t makeColor(int red, int green, int blue){

        color_t new;

        if (red>255){
            new.red=255;
        }
        else if (red<0){
            new.red=0;
        }
        else {
            new.red=red;
        }

        if (green>255){
            new.green=255;
        }
        else if (green<0){
            new.green=0;
        }
        else{
            new.green=green;
        }
        if (blue>255){
            new.blue=255;
        }
        else if (blue<0){
            new.blue=0;
        }
        
        return new;
    }