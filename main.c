#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number from 1 to 5");
    scanf("%d",&num);
    switch(num){
    case 1:
        printf("Food item- Pizza\nPrice- Rs 239");
        break;
    case 2:
        printf("Food item- Popcorn\nPrice- Rs 40");
        break;
    case 3:
        printf("Food item- Pasta\nPrice- Rs 250");
        break;
    case 4:
        printf("Food item- Burger\nPrice- Rs 150");
        break;
    case 5:
        printf("Food item- Sandwich\nPrice- Rs 139");
        break;
    default:
        printf("Invalid Request");


    }
    return 0;
}
