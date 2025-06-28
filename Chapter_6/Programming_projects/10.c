#include <stdio.h>

int main(void)
{
    int m1, d1, y1, m2, d2, y2;
    int earliest_year, earliest_month, earliest_day;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    if (m1 == 0 && d1 == 0 && y1 == 0)
        return 0;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m2, &d2, &y2);
        if (m2 == 0 && d2 == 0 && y2 == 0)
            break;
        else if (y2 < y1) {
                earliest_year = y2;
                earliest_month = m2;
                earliest_day = d2;
        } else if (y2 > y1) {
                earliest_year = y1;
                earliest_month = m1;
                earliest_day = d1;
        } else if (m2 < m1) {
                earliest_year = y2;
                earliest_month = m2;
                earliest_day = d2;
        } else if (m2 > m1) {
                earliest_year = y1;
                earliest_month = m1;
                earliest_day = d1;
        } else if (d2 < d1) {
                earliest_year = y2;
                earliest_month = m2;
                earliest_day = d2;
        } else if (d2 > d1) {
                earliest_year = y1;
                earliest_month = m1;
                earliest_day = d1;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m1, &d1, &y1);

        if (m1 == 0 && d1 == 0 && y1 == 0) 
            break;

    } 

    printf("%d/%d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);

    return 0;
}   



