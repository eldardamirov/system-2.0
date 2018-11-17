//
//  commands.h
//  system 2.0
//
//  Created by Эльдар Дамиров on 17.11.2018.
//  Copyright © 2018 Эльдар Дамиров. All rights reserved.
//

#ifndef commands_h
#define commands_h

#define DEF_CMD(name, number) CMD_##name = number

enum commands
    {
    #include "asm.h"

    };

#undef DEF_CMD   
   
#define STR(x) #x
#define DEF_CMD(name, number), std::string CMD_##name = STR(name);

#include "asm.h"

#undef DEF_CMD

#endif /* commands_h */
