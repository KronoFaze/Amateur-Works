#include <stdio.h>
int dayfinder(int year,int month,int date);
void month_matrix();
void day_print();
void calender();

int main()
{
    int choice;
    printf("Please select an option:\n");
    printf("1.Display the calender of an year.\n");
    printf("2.Find the day of a date.\n");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        calender();
        break;
        case 2:
        day_print();
        break;
    }
}
int dayfinder(int year,int month,int date)
{
    int x=0,i,day;
    int ref[12]={1,4,4,0,2,5,0,3,6,1,4,6};
    for(i=1;i<=year;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        {
            x++;
        }
    }
    day=((year*365)+x+ref[month-1]+date)%7;
    if(month==2&&year%4==0&&year%100!=0||year%400==0)
    {
        return day-1;
    }
    else if(month==1&&year%4==0&&year%100!=0||year%400==0)
    {
        return day-1;
    }
    else
    {
        return day;
    }
}
void month_matrix(limit,day)
{
    int matrix[6][7];
    int x,y,z=1-day;
    printf("Fri\tSat\tSun\tMon\tTue\tWed\tThu\n");
    for(x=0;x<6;x++)
    {
        for(y=0;y<7;y++)
        {
            if(z<=limit&&z>0)
            {
                matrix[x][y]=z;
                z++;
            }
            else
            {
                matrix[x][y]=0;
                z++;
            }
        }
    }
    for (x=0;x<6;x++)
    {
        for(y=0;y<7;y++)
        {
                if(matrix[x][y]!=0)
                {
                    printf("%d\t", matrix[x][y]);
                }
                else
                {
                    printf("%c\t", matrix[x][y]);
                }
        }
        printf("\n\n");
    }
}
void day_print()
{
    int year,month,date;
    char result[][10]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    char month_name[][10]={"Januray","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month number: ");
    scanf("%d", &month);
    printf("Enter the date: ");
    scanf("%d", &date);
    printf("%d %s %d is %s\n", date,month_name[month-1],year,result[dayfinder(year,month,date)]);
    return main();
}
void calender()
{
    int year,month,day,date=1,limit;
    int num_of_days_in_a_month[13]={31,28,31,30,31,30,31,31,30,31,30,31,29};
    char month_name[][10]={"Januray","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("\t\t\t\t%d\n", year);
    for(month=1;month<=12;month++)
    {
        printf("%s\n\n", month_name[month-1]);
        day=dayfinder(year,month,date);
        if(month==2&&year%4==0&&year%100!=0||year%400==0)
        {
            limit=num_of_days_in_a_month[12];
            month_matrix(limit,day);
        }
        else
        {
            limit=num_of_days_in_a_month[month-1];
            month_matrix(limit,day);
        }
    }
}
