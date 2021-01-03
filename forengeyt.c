#include <stdio.h>
#include <cs50.h>
/* печать таблицы температур по Фаренгейту и Цельсию */
int main(void)
{
    int fahr;
    int volue;
    int ask;
    ask = get_int ("Вам вывести таблицу с грудусами? (1-да; 2-нет): ");
    if (ask == 1) {
        for (fahr = 200; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    else {
        printf ("\n");
        volue = get_int ("Введите сколько градусов по Цельсию необходимо перевести в Форенгейт: ");
        printf("%3d  %6.1f\n", volue, (9.0/5.0)*volue+32);
    }
}