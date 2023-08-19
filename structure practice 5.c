// write a structure for storing date and time. write a function to compare those dates and times.
#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
typedef struct time{
    int hour;
    int minute;
    int second;
}time;
void display(date d){
    printf("value of date  is : %d/%d/%d\n",d.date,d.month,d.year);
}
void saw(time t){
    printf("value of time is %d-%d-%d\n:",t.hour,t.minute,t.second);
}
int datetimecmp(date d1,date d2,time t1,time t2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year) {
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month) {
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date) {
        return -1;
    }
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour) {
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute) {
        return -1;
    }
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second) {
        return -1;
    }
}
int main()
{
    date d1 ={02,11,22};
    date d2 ={02,11,22};
    time t1 ={15,26,31};
    time t2={15,26,32};
    display(d1);
    display(d2);
    saw(t1);
    saw(t2);
    int a =datetimecmp(d1,d2,t1,t2);
    printf("Date and time comparision function return: %d",a);
return 0;
}