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

DEF_CMD ( HLT, 0 )
DEF_CMD ( IN, 1 )
DEF_CMD ( OUT, 2 )
DEF_CMD ( ADD, 3 )
DEF_CMD ( SUB, 4 )
DEF_CMD ( MUL, 5 )
DEF_CMD ( DIV, 6 )
DEF_CMD ( SIN, 7 )
DEF_CMD ( COS, 8 )
DEF_CMD ( SQRT, 9 )
DEF_CMD ( ABS, 10 )
DEF_CMD ( DUP, 11 )
DEF_CMD ( DUMP, 12 )
DEF_CMD ( RET, 13 )
DEF_CMD ( borderJUMP, 14 )
DEF_CMD ( JMP, 15 )
DEF_CMD ( JE, 16 )
DEF_CMD ( JNE, 17 )
DEF_CMD ( JA, 18 )
DEF_CMD ( JAE, 19 )
DEF_CMD ( JB, 20 )
DEF_CMD ( JBE, 21 )
DEF_CMD ( CALL, 22 )
DEF_CMD ( borderARGUMENT, 23 )
DEF_CMD ( PUSH, 24 )
DEF_CMD ( POP, 25 )
DEF_CMD ( cpuLAST, 26 )




#endif /* asmCommands_h */
