//
//  basicMethods.h
//  processor
//
//  Created by Эльдар Дамиров on 23.11.2017.
//  Copyright © 2017 Эльдар Дамиров. All rights reserved.
//

#ifndef basicMethods_h
#define basicMethods_h


bool isDigit ( char inputChar );
bool isLetter ( char inputChar ); // lowerCase ONLY;
int fromStringToNumber ( std::string number );
int fromStringToInt ( char figure );


bool isDigit ( char inputChar )
    {
    if ( ( inputChar >= '0' ) && ( inputChar <= '9' ) )
        return true;
    else
        return false;
    }
    
bool isLetter ( char inputChar ) // lowerCase ONLY;
    {
    int temp = inputChar;
    if ( ( temp >= 'a' ) && ( temp <= 'z' ) )
        {
        return true;
        
        }
    else
        {
        return false;
        std::cout << "OO";
        }
        
    }
    
bool isArithmetic ( char inputChar )
    {
    if ( ( inputChar == '+' ) || ( inputChar == '-' ) || ( inputChar == '*' ) || ( inputChar == '/' ) )
        return true;
    else
        return false;
    }


int fromStringToNumber ( std::string number )
    {
    int result = 0;

    for ( int i = 0; i < number.length(); i++ )
        {
        result = result + fromStringToInt ( number [ i ] ) * pow ( 10, number.length() - i - 1 );
        }

    return result;
    }
    
int fromStringToInt ( char figure )
    {
    int temp = 0;

    if ( figure - '0' < 10 )
        {
        temp = figure - '0';
        }
    else
        {
        temp = figure - ( 'A' - 10 );  // - 55
        }

        return temp;
    }


#endif /* basicMethods_h */
