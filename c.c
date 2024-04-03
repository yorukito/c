#include <stdio.h>

int main()
{
    int metro;
    
    printf("metros: ");
    scanf("%d", &metro);
    
    int dcm = metro*10;
    int cm = dcm*10;
    
    printf("centimetros: %d\ndecimetros: %d", dcm, cm);
}