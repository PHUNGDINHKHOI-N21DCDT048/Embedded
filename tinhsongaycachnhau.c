#include<stdio.h>
int main (){
    hung1 :
    hung :
    int day1, month1, year1;
    int days ;         // khoảng cách giữ 2 ngày , yêu cầu đề bài.
    int day1s;         // khoảng cách từ ngày 1/1/year1 đến day1/month1/year1
    int day2s;         // khoảng cách từ ngày 1/1/year2 đến day2/month2/year2r

    int kcyear;        // year1 - year2 or year2 - year1
    int i = 0 ;
    int x = 0 ;
    int day2, month2, year2;
    int y = year2;                                   // nhập day2/month2/year2
    char hung;

    printf(" enter 'r' (run) or 'e' (exit) = ");
    scanf(" %c",&hung);
    switch (hung)
    {
    case 'r':
        

    
    printf("enter days 1 :");                             // nhập day1/month1/year1
    scanf(" %d",&day1);
    printf("enter month 1: ");
    scanf(" %d",&month1);
    printf("enter a year 1: ");
    scanf(" %d",&year1);
    if (day1 < 1 || day1 > 31 || month1 < 1 || month1 > 12){   // ngay 31 vẫn đc cho tất cả các tháng
    printf(" error retype \n ");
    goto hung ;          
    }else{ 
    switch (month1){                                         // xac nhận 
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf(" %d / %d / %d \n",day1,month1,year1)  ; // in kq để xác nhận 
        break;  
        case 2:
    if(year1 % 4 == 0){
        if(day1 > 29){
        printf(" retype  \n ");
        goto hung ;  
        }else{
            printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        } 
    }else{
        if(day1 > 28){
        printf(" retype  \n");
        goto hung ;    
        }else{
            printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        }
    }
        break;   
    case 4:
        if(month1 == 31){
        printf(" retype  ");
        goto hung ;     
        }else{
           printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        }
        break; 
    case 6:
        if(month1 == 31){
        printf(" retype  ");
        goto hung ; 
        }else{
            printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        }
        break;
    case 9:
        if(month1 == 31){
        printf(" retype  ");
        goto hung ;     
        }else{
            printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        }
        break;
    case 11:
        if(month1 == 31){
        printf(" retype  ");
        goto hung ; 
        }else{
            printf(" %d / %d / %d \n",day1,month1,year1)  ; 
        }
        break;
    default:
        break;
    }
    }

    hung2 : 

    printf("enter days 2 : ");
    scanf(" %d",&day2);
    printf("enter month 2: ");
    scanf(" %d",&month2);
    printf("enter a year 2: ");
    scanf("%d",&year2);
    
    if (day2 < 1 || day2 > 31 || month2 < 1 || month2 > 12){
    printf(" error retype \n ");
    goto hung2 ;          
    }else{ 
    switch (month2){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        break;  
        case 2:
    if(year2 % 4 == 0){
        if(day2 > 29){
        printf(" retype  \n ");
        goto hung2 ;  
        }else{
            printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        } 
    }else{
        if(day2 > 28){
        printf(" retype  \n");
        goto hung2 ;    
        }else{
            printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        }
    }
        break;   
    case 4:
        if(month2 == 31){
        printf(" retype  ");
        goto hung ;     
        }else{
           printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        }
        break; 
    case 6:
        if(month2 == 31){
        printf(" retype  ");
        goto hung2 ; 
        }else{
            printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        }
        break;
    case 9:
        if(month2 == 31){
        printf(" retype  ");
        goto hung2 ;     
        }else{
            printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        }
        break;
    case 11:
        if(month2 == 31){
        printf(" retype  ");
        goto hung2 ; 
        }else{
            printf(" %d / %d / %d \n",day2,month2,year2)  ; 
        }
        break;
    default:
        break;
    }
    
    
    switch (month1){            // tinh tu ngay 1/1 den ngay nhap
            
            case 1 :
                day1s = day1; 
                break;
            case 2:
            day1s = 31+ day1; 
                break;       
            case 3 :
            if(year1 % 4 == 0){
                day1s = 31+29+ day1;
            }else{
                day1s = 31+28+ day1;
            }
                break;
            case 4:
            if(year1 % 4 == 0){
                day1s = 31+29+31+ day1;
            }else{
                day1s = 31+28+31+ day1;
            }    
                break;
            case 5 :
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+ day1;
            }else{
                day1s = 31+28+31+30+ day1;
            }
                break;
            case 6:
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+ day1;
            }else{
                day1s = 31+28+31+30+31+ day1;
            } 
                break;
            case 7 :
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+30+ day1;
            }else{
                day1s = 31+28+31+30+31+30+ day1;
            }
                break;
            case 8 :
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+30+31+ day1;
            }else{
                day1s = 31+28+31+30+31+30+31+ day1;
            }
                break;
            case 9:
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+30+31+31+ day1;
            }else{
                day1s = 31+28+31+30+31+30+31+31+ day1;
            } 
                break;
            case 10 :
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+30+31+31+30+ day1;
            }else{
                day1s = 31+28+31+30+31+30+31+31+30+ day1;
            }
                break;
            case 11:
            if(year1 % 4 == 0){
                day1s = 31+29+31+30+31+30+31+31+30+31+ day1;
            }else{
                day1s = 31+28+31+30+31+30+31+31+30+31+ day1;
            }
                break;
            case 12 :
            if(year1 % 4 == 0){
                day1s = 337 +29+ day1;
            }else{
                day1s = 337 +28+ day1;
            }    
                break;
            default:
                break;

        }
    }   
    
    
    switch (month2){            //tinh tu ngay 1/1 den ngay th2 nhap
            
            case 1 :
                day2s = day2; 
                break;
            case 2:
            day2s = 31+ day2; 
                break;       
            case 3 :
            if(year2 % 4 == 0){
                day2s = 31+29+ day2;
            }else{
                day2s = 31+28+ day2;
            }
                break;
            case 4:
            if(year2 % 4 == 0){
                day2s = 31+29+31+ day2;
            }else{
                day2s = 31+28+31+ day2;
            }    
                break;
            case 5 :
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+ day2;
            }else{
                day2s = 31+28+31+30+ day2;
            }
                break;
            case 6:
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+ day2;
            }else{
                day2s = 31+28+31+30+31+ day2;
            } 
                break;
            case 7 :
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+30+ day2;
            }else{
                day2s = 31+28+31+30+31+30+ day2;
            }
                break;
            case 8 :
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+30+31+ day2;
            }else{
                day2s = 31+28+31+30+31+30+31+ day2;
            }
                break;
            case 9:
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+30+31+31+ day2;
            }else{
                day2s = 31+28+31+30+31+30+31+31+ day2;
            } 
                break;
            case 10 :
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+30+31+31+30+ day2;
            }else{
                day2s = 31+28+31+30+31+30+31+31+30+ day2;
            }
                break;
            case 11:
            if(year2 % 4 == 0){
                day2s = 31+29+31+30+31+30+31+31+30+31+ day2;
            }else{
                day2s = 31+28+31+30+31+30+31+31+30+31+ day2;
            }
                break;
            case 12 :
            if(year2 % 4 == 0){
                day2s = 337 +29+ day2;
            }else{
                day2s = 337 +28+ day2;
            }    

                break;
            default:
                break;
        }
    
    
    if(year1 == year2 ){       // nam giong nhau 
        if(month1 == month2){    // nam giong thang giong
            if (day1 > day2 )
            {
              days = day1s - day2s;         
              printf(" %d days }}",days);
            } else {
              days = day2s -day1s;
              printf(" %d days }} ",days);  
            }
            
        }else if( month1 > month2){   // nam giong month1 > month2 
            days = day1s - day2s;
            printf(" %d days // ",days);
        }else{
            days = day2s - day1s;     // month2 > month1
              printf(" %d days // ",days);
        }
    }else if( year1 > year2 ){        
        while (year2 < year1 )
        {
            if(year2 % 4 == 0){
               i = i + 1;
            }else{
               x = x + 1;
            }
        year2 = year2 + 1;  
        }
        days = ((day1s + 365*x + 366*i) - day2s);
        printf(" %d days ?? ",days);
        printf(" %d  %d",i,x);
       

        
    }else{
        while (year1 < year2 )
        {
            if(year1 % 4 == 0){
               i = i + 1;
            }else{
               x = x + 1;
            }
        year1 = year1 + 1;   
        }
        days = ((day2s + 365*x + 366*i) - day1s);
        printf(" %d days  ",days); 
      

    }
    
    
    break;
    goto hung1 ;
    case ' e ':
        return 0;
        break;
    default:
        break;
    }

   return 0; 
}
