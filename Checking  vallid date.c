#include <stdio.h>

int main()
{
    int day, month, year;
    int valid = 1;

    printf("Enter day month year: ");
    scanf("%d %d %d", &day, &month, &year);

    // Check month validity
    if(month < 1 || month > 12)
    {
        valid = 0;
    }
    else
    {
        // February check
        if(month == 2)
        {
            int leap = 0;

            // Leap year condition
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                leap = 1;

            if(leap)
            {
                if(day < 1 || day > 29)
                    valid = 0;
            }
            else
            {
                if(day < 1 || day > 28)
                    valid = 0;
            }
        }

        // Months with 31 days
        else if(month == 1 || month == 3 || month == 5 || month == 7 ||
                month == 8 || month == 10 || month == 12)
        {
            if(day < 1 || day > 31)
                valid = 0;
        }

        // Months with 30 days
        else
        {
            if(day < 1 || day > 30)
                valid = 0;
        }
    }

    if(valid)
        printf("The date is valid.\n");
    else
        printf("The date is invalid.\n");

    return 0;
}
