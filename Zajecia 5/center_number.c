#include <stdio.h>

#define WIDTH 20

void display(int number){
    int temp_number = number;
    int number_length = 0;
    while(temp_number>0){
        temp_number /= 10;
        number_length++;
    }

    if(WIDTH-number_length <= 0)
        printf(".%d.", number);
    else{
        int number = (WIDTH-number_length)/2;
        printf(".%*s%d%*s.",number, " ", a, number, " ");
    }
}

int main()
{
    int number;
    scanf("%d", &number);
    display(number);

    return 0;
}
