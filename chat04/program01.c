#include <stdio.h>
#include <string.h>  // 提高strlen()函数的原型
#define DENSITY 62.4 // 人体密度

int main(void)
{
    char name[40];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("%s What's your weight in pounds\n", name);
    float weight;
    scanf("%f", &weight);
    float volume = weight / DENSITY;
    printf("Your volume is %2.2f cubic feed\n", volume);
    int size = sizeof(name);
    printf("Your name use %d bytes\n", size);
    int letters = strlen(name);
    printf("Your name use %d letter\n", letters);
    return 0;
}