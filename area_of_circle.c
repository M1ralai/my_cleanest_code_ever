#include <stdio.h>
int main(){
    int Running;
    Running = 1;
    while (Running == 1){
        const float pi = 3.14159;
        int radius;
        printf("Please give me a radius of the circle as centimeter:");
        if (scanf("%d",&radius) == 1){
            printf("Area of circle is %f centimeter square",pi*radius*radius);
        }else{
            printf("Please enter valid number next time.");
            Running = 0;
        }
    }
}