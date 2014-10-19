/* For the year 2013 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DAYS_TO_MARCH 59
#define DAYS_TO_APRIL 90
#define DAYS_TO_MAY 120
#define DAYS_TO_JUNE 150
#define DAYS_TO_JULY 181
#define DAYS_TO_AUGUST 212
#define DAYS_TO_SEPTEMBER 243
#define DAYS_TO_OCTOBER 273
#define DAYS_TO_NOVEMBER 304
#define DAYS_TO_DECEMBER 334

#define FIRST_DAY_OF_YEAR 1
#define NUMBER_OF_DAY_BEFORE_FIRST 3  // 3 days for tuesday on 2013

void ask_for_month_day(short *, short *);
void cal_add(short *);
void show_day(const short *);
void show_date_prompt(const short *);

void show_date_prompt(const short *month)
{
    switch(*month)
    {
        case  1:
        case  3:
        case  7:
        case  8:
        case  9:
        case 12: printf("Enter date (1 - 31): ");
                 break;

        case  4:
        case  5:
        case  6:
        case 10:
        case 11: printf("Enter date (1 - 30): ");
                 break;

        case  2: printf("Enter date (1 - 28): ");
                 break;

        default: printf("This should never have happend.\n");

    }
}

void ask_for_month_day(short *month, short *day)
{
    printf("Enter a month (1 - 12): ");
    scanf("%hd", month);
    fflush(stdin);
    unsigned short int temp = *month;
    show_date_prompt(&temp);
    scanf("%hd", day);

    assert(1 <= *month && *month < 13 );

    if(*month == 2)
        assert(1 <= *day && *day <= 28);
    else if(*month == 1 || *month == 3 || *month == 7 || *month == 8 || *month == 9 || *month == 12)
        assert(1 <= *day && *day < 32 );
    else
        assert(1 <= *day && *day < 31 );
}

void cal_add(short *day_diff)
{
    *day_diff = *day_diff % 7;
    *day_diff = *day_diff + NUMBER_OF_DAY_BEFORE_FIRST;
}

void show_day(const short *day_diff)
{
    switch(*day_diff){
        case 1:
        case 8: printf("Sunday");
                break;
        case 2:
        case 9: printf("Monday");
                break;
        case 3: printf("Tuesday");
                break;
        case 4: printf("Wednesday");
                break;
        case 5: printf("Thursday");
                break;
        case 6: printf("Friday");
                break;
        case 7: printf("Saturday");
                break;
        }
}

int main()
{
    unsigned short int month, day;
    // Prompt for month and day for the year 2013
    ask_for_month_day(&month, &day);
    // Enumeration for all the months
    enum {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    // If its FEB or greater add certain number of days to the given date
    if(month > 1)
    {
        if(month == FEB) day = 31 + day;                          // February
        else if(month == MAR)  day =  day + DAYS_TO_MARCH;        // March
        else if(month == APR)  day =  day + DAYS_TO_APRIL;        // April
        else if(month == MAY)  day =  day + DAYS_TO_MAY;          // May
        else if(month == JUN)  day =  day + DAYS_TO_JUNE;         // June
        else if(month == JUL)  day =  day + DAYS_TO_JULY;         // July
        else if(month == AUG)  day =  day + DAYS_TO_AUGUST;       // August
        else if(month == SEP)  day =  day + DAYS_TO_SEPTEMBER;    // September
        else if(month == OCT)  day =  day + DAYS_TO_OCTOBER;      // October
        else if(month == NOV)  day =  day + DAYS_TO_NOVEMBER;     // November
        else if(month == DEC)  day =  day + DAYS_TO_DECEMBER;     // December
    }

    unsigned short int day_diff = day - FIRST_DAY_OF_YEAR;
    cal_add(&day_diff);
    show_day(&day_diff);

    return 0;

}

