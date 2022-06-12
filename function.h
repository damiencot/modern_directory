#ifndef _FUNCTION_H
#define _FUNCTION_H
#include <stdio.h>
#include <string.h>

#define N 225
#define false 0
#define true 1

typedef int bool;

typedef struct {
    int day;
    int month;
    int year;
}Date;

typedef struct {
    int num;
    char name[N];
    Date birth;
    long phoneNumber;
    char country[N];
    char email[N];
}Contact;

typedef struct
{
    Contact rep[N];
    int total;
    int effectifs;
}Repertoire;


Date newDate(int days, int month, int years);
Date newDateEmpty();
void printDate(Date date);

Contact newContactEmpty();
Contact newContact(char name[], long phoneNumber, Date date,char country[], char email[]);

Repertoire createRepertoire(unsigned int size);

void printString(char title[], char message[]);
void printInt(char title[], int interger);
void printTel(char title[], long phone);
void printPlace(char title[], char country, Date birth);
void printContact(Contact cont);
void printRepertoire(Repertoire rep);

Contact newContactFill(); 
Repertoire addContact(Repertoire rep , Contact cont);
Contact searchContactByNumber(Repertoire rep, long phoneNumber);
Repertoire delContact(Repertoire rep, char nom[], long phoneNbr);
 
void searchContactByName(Repertoire rep, char nom[]);
void searchContactByPays(Repertoire rep, char pays[]);
void startRep();

#endif