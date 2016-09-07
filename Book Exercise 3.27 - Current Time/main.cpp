//
//  main.cpp
//  Book Exercise 3.27 - Current Time
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    cout << "Current Time on a 12 Hour Clock \n";
    
    // Data store
    int gmt_offset_num = 0;
    
    // I
    cout << "Enter the time zone offset to GMT: ";
    cin >> gmt_offset_num;
    
    // P
    
    // total seconds since epoch
    int total_seconds = time(0);
    
    // current second in the minute in the hour
    int current_second = total_seconds % 60;
    
    // total minutes sinch epoch
    int total_minutes = total_seconds / 60;
    
    // compute current minute in the hour
    int current_minute = total_minutes % 60;
    
    // obtain the total hours
    int total_hours = total_minutes / 60;
    
    // compute the current hour
    int current_hour = total_hours % 24;

    // compute am or pm
    bool pm = 0;

    // offset the current hour from GMT
    int gmt_offset_hour = current_hour + gmt_offset_num;
    
    switch (gmt_offset_hour) {
        case 0:
            gmt_offset_hour = 12;
            pm = 0;
            break;
        case 1:
            gmt_offset_hour = 1;
            pm = 0;
            break;
        case 2:
            gmt_offset_hour = 2;
            pm = 0;
            break;
        case 3:
            gmt_offset_hour = 3;
            pm = 0;
            break;
        case 4:
            gmt_offset_hour = 4;
            pm = 0;
            break;
        case 5:
            gmt_offset_hour = 5;
            pm = 0;
            break;
        case 6:
            gmt_offset_hour = 6;
            pm = 0;
            break;
        case 7:
            gmt_offset_hour = 7;
            pm = 0;
            break;
        case 8:
            gmt_offset_hour = 8;
            pm = 0;
            break;
        case 9:
            gmt_offset_hour = 9;
            pm = 0;
            break;
        case 10:
            gmt_offset_hour = 10;
            pm = 0;
            break;
        case 11:
            gmt_offset_hour = 11;
            pm = 0;
            break;
        case 12:
            gmt_offset_hour = 12;
            pm = 1;
            break;
        case 13:
            gmt_offset_hour = 1;
            pm = 1;
            break;
        case 14:
            gmt_offset_hour = 2;
            pm = 1;
            break;
        case 15:
            gmt_offset_hour = 3;
            pm = 1;
            break;
        case 16:
            gmt_offset_hour = 4;
            pm = 1;
            break;
        case 17:
            gmt_offset_hour = 5;
            pm = 1;
            break;
        case 18:
            gmt_offset_hour = 6;
            pm = 1;
            break;
        case 19:
            gmt_offset_hour = 7;
            pm = 1;
            break;
        case 20:
            gmt_offset_hour = 8;
            pm = 1;
            break;
        case 21:
            gmt_offset_hour = 9;
            pm = 1;
            break;
        case 22:
            gmt_offset_hour = 10;
            pm = 1;
            break;
        case 23:
            gmt_offset_hour = 11;
            pm = 1;
            break;
        default:
            break;
    }
    
    // O
    cout << "Current time: " << current_hour << ":" << current_minute << ":" << current_second << " GMT" << endl;
    
    if (pm) {
        cout << "The current time is: " << gmt_offset_hour << ":" << current_minute << ":" << current_second << " PM" << endl;
    } else {
        cout << "The current time is: " << gmt_offset_hour << ":" << current_minute << ":" << current_second << " AM" << endl;
    }
    
    return 0;
}
