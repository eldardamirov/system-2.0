//
//  asmCommands.h
//  system 2.0
//
//  Created by Эльдар Дамиров on 17.11.2018.
//  Copyright © 2018 Эльдар Дамиров. All rights reserved.
//

#ifndef asmCommands_h
#define asmCommands_h

/*
enum processorCommands
    {
    hlt, nullCommand,
    in, out,
    add, sub, mul, myDiv, // 7
    mySin, myCos, mySqrt, myAbs, // 11
    myDup, dump,
    ret,
    borderJump,
    jmp, je, jne, ja, jae, jb, jbe, call,
    borderArgument,
    pushR, popR, 
    pop, // 27
    pushS, popS,
    pushRAM, popRAM, 
    push, // 32
    borderCPULast
    };
*/

#ifdef compiler_h
    std::string 
#endif
  
DEF_CMD ( hlt, 0 ),
DEF_CMD ( in, 1 ),
DEF_CMD ( out, 2 ),
DEF_CMD ( add, 3 ),
DEF_CMD ( sub, 4 ),
DEF_CMD ( mul, 5 ),
DEF_CMD ( div, 6 ),
DEF_CMD ( sin, 7 ),
DEF_CMD ( cos, 8 ),
DEF_CMD ( sqrt, 9 ),
DEF_CMD ( abs, 10 ),
DEF_CMD ( dup, 11 ),
DEF_CMD ( dump, 12 ),
DEF_CMD ( ret, 13 ),
DEF_CMD ( borderJUMP, 14 ),
DEF_CMD ( jmp, 15 ),
DEF_CMD ( je, 16 ),
DEF_CMD ( jne, 17 ),
DEF_CMD ( ja, 18 ),
DEF_CMD ( jae, 19 ),
DEF_CMD ( jb, 20 ),
DEF_CMD ( jbe, 21 ),
DEF_CMD ( call, 22 ),
DEF_CMD ( borderARGUMENT, 23 ),
DEF_CMD ( push, 24 ),
DEF_CMD ( pop, 25 ),
DEF_CMD ( cpuLAST, 26 )

#ifndef compiler_h
    ,
#endif

#ifdef compiler_h
    ;
#endif

#endif /* asmCommands_h */
