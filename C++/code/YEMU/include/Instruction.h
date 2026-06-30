#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "Types.h"

class CPU;

class Instruction {
  public:
    static void execute(CPU &cpu, Byte instr);

  private:
    static Byte getOpcode(Byte instr);

    static Byte getRT(Byte instr);//reg-RT

    static Byte getRS(Byte instr);//reg-RS

    static Byte getAddr(Byte instr);//Addr

    static void mov(CPU &cpu, Byte instr);
    static void add(CPU &cpu, Byte instr);
    static void load(CPU &cpu, Byte instr);
    static void store(CPU &cpu, Byte instr);
};

#endif
