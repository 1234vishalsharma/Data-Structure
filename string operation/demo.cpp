#include <iostream>
#include <string>
#include <cctype>

char isValidstr(string str) {
    // Check that the string has at least 8 characters
    bool check=true;
    if (str.size() < 8) {
        check = false;
    }

    // Check that the first 3 characters are uppercase letters
    for (int i = 0; i < 3; ++i) {
        if (!isupper(str[i])) {
            check = false;
        }
    }

    // Check that the next 4 characters are digits representing a year
    int year = 0;
    for (int i = 3; i < 7; ++i) {
        if (!isdigit(str[i])) {
            check = false;
        }
        year = year * 10 + (str[i] - '0');
    }
    if (year < 1900 || year > 2019) {
        check = false;
    }

    // Check that the last character is a digit
    if (!isdigit(str[7])) {
        check = false;
    }

    if(check){
        return str[0];
    }
    else{
        return str[str.size()-1];
    }
}