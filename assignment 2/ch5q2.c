#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void time_convert(int hours, int minutes, char answer[])
{
    char morningOrNight[3], time_msg[15];
    int remainingHours;

    if (hours >= 12)
        strcpy(morningOrNight, "PM");
    else
        strcpy(morningOrNight, "AM");

    remainingHours = hours % 12;

    if (remainingHours == 0)
        remainingHours = 12;

    time_msg[0] = '0' + (remainingHours / 10);
    time_msg[1] = '0' + (remainingHours % 10);
    time_msg[2] = ':';
    time_msg[3] = '0' + (minutes / 10);
    time_msg[4] = '0' + (minutes % 10);
    time_msg[5] = ' ';
    time_msg[6] = morningOrNight[0];
    time_msg[7] = morningOrNight[1];
    time_msg[8] = '\0';
    strcpy(answer, time_msg);
}
int main()
{
    int hours, minutes;
    char time_msg[15], answer[15];
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);
    time_convert(hours, minutes, answer);
    printf("Equivalent 12-hour time: %s \n", answer);
}