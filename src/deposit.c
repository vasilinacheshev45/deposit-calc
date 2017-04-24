#include "deposit.h"

int error_date(int date){
    if ((date >= 0) && (date <= 365)){
        return 1;
    }
    return 0;
}

int error_vklad(int vklad){
    if (vklad >= 10000){
        return 1;
    }
    return 0;
}

int vklad_time_of_expiry(int date, int sum_vklad){
    int v;

    if (sum_vklad <= 100000){
        if   ((date >= 0) && (date <= 30)){
           v = (sum_vklad * 10)/100;
            sum_vklad = sum_vklad - v;
            return sum_vklad;
        }
        if ((date >= 31) && (date <= 120)){
            v = (sum_vklad * 2)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }
        if ((date >= 121) && (date <= 240)){
            v = (sum_vklad * 6)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }
        if ((date >= 241) && (date <= 365)){
            v = (sum_vklad * 12)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }
    }
    else {
        if ((date >= 0) && (date <= 30)){
            v = (sum_vklad * 10)/100;
            sum_vklad = sum_vklad - v;
            return sum_vklad;
        }
        if ((date >= 31) && (date <= 120)){
            v = (sum_vklad * 3)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }
        if ((date >= 121) && (date <= 240)){
            v = (sum_vklad * 8)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }
        if ((date >= 241) && (date <= 365)){
            v = (sum_vklad * 15)/100;
            sum_vklad = sum_vklad + v;
            return sum_vklad;
        }

    }
    return 0;
}