#include <stdio.h>

//  Kiểm tra năm nhuận
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Tính số ngày trong tháng
int daysFromMonth1(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Tính số ngày từ ngày 1/1/1 đến hiện tai 
int daysFrompoint(int day, int month, int year) {
    int days = 0;
    for (int y = 1; y < year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        days += daysFromMonth1(month, year);
    }
    days += day - 1;
    return days;
}

int main() {
    khoi:
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter the first day (DD MM YYYY): ");
    scanf("%d %d %d", &day1, &month1, &year1);
    
    printf("Enter the second day (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &month2, &year2);
    
    int sday1 = daysFrompoint(day1, month1, year1);
    int sday2 = daysFrompoint(day2, month2, year2);
    int difference ;
      if(sday2>sday1){
        difference = sday2 - sday1;
        printf("Difference days is: %d days.\n", difference);
      }
      else if(sday2<sday1){
        difference = sday1 - sday2;
        printf("Difference days is: %d days.\n", difference);
      }
      else{
        printf("Difference days is: 0 days.\n", difference);
        goto khoi;
      }
    
       return 0;
}