#include <stdio.h>
#include <cs50.h>

int main(void) {
    int min = get_int("Сколько минут вы проводите в душе?: ");
    int bot = min * 12;
    printf ("Вы тратите: %i бутылок воды\n", bot);
}