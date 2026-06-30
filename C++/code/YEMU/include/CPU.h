#ifndef CPU_H
#define CPU_H

#include "Types.h"

class CPU {
  private:
    Byte reg_[4];
    Byte mem_[16];
    Byte pc_;
    bool halt_flag_;

  public:
    CPU();

    void loadProgram(const Byte *program, int length);
    void run();
    void printState() const;

    //reg
    Byte getReg(Byte index) const;
    void setReg(Byte index, Byte val);

    //mem
    Byte getMem(Byte addr) const;
    void setMem(Byte index, Byte val);

    void halt();
    bool isHalt() const;
};

#endif
