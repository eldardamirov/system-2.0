//
//  logsConstants.h
//  stack
//
//  Created by Эльдар Дамиров on 25.10.2017.
//  Copyright © 2017 Эльдар Дамиров. All rights reserved.
//

#ifndef logsConstants_h
#define logsConstants_h

#define CONLOG (printf ( "I was here! #%d\n", __LINE__ )) // console log with line number;

const char* stackInitError = "Stack isn't initialized, or some error during init has occured. (Note that returning value in this case isn't prorep one) ¯|_(ツ)_/¯ \n";

const char* stackCurrentFreeElementError = "Current free element is out of range or even hasn't been initialized, maybe something is wrong with stack pointer. (Note that returning value in this case isn't prorep one) ¯|_(ツ)_/¯ \n";

const char* stackStorageError = "Something is wrong with stack storage or stack capacity value hasn't been updated. ¯|_(ツ)_/¯ \n";

const char* stackBeginningError = "New beginning of stack is incorrect. (Note that returning value in this case isn't prorep one) ¯|_(ツ)_/¯ \n";

const char* detectVariableTypeError = "Something strange occured during detecting detecting type of stack data. ¯|_(ツ)_/¯ \n";

#endif /* logsConstants_h */

