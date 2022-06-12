#include "function.h"

Date newDate(int d, int m, int y)
{
    Date date = {d,m,y};
    return date;
}

Date newDateEmpty(){return newDate(0,0,0);}

Date newDateFill()
{
    Date date;
    printf("Tapez votre date de naissance (dd//mm/yyyy) ");
    scanf("%2d/%2d/%4d", &date.day, &date.month, &date.year);
    return date;
}

void printDate(Date date)
{
    printf("le %d/%d/%d/\n",    date.day, date.month, date.year);
}

Contact newContact(char names[], long phoneNumber, Date dates, char countries[], char email[])
{
    Contact new;
    new.num = -1;
    strcpy(new.name, names);
    strcpy(new.country, countries);
    strcpy(new.email, email);
    new.phoneNumber = phoneNumber;
    new.birth = dates;

    return new;

}