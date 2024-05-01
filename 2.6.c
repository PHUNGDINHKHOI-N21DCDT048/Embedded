#include<stdio.h>
int main(){
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
        } else {
        return 31;
         }

    }
int day1, month1, year1;
int day2, month2, year2;
    Sday1= 
}
