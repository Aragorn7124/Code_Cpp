#include "CPU.h"
#include "Instruction.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

CPU::CPU() : pc_(0), halt_flag_(false) {
  reg_[0] = 1;
  for (int i = 1; i < 4; i++)
  {
    reg_[i] = 0;
  }
  for (int i = 0; i < 16; i++)
  {
    mem_[i] = 0;
  }
}

void CPU::run() {
  cout << "cpu is run, pc = " << static_cast<int>(pc_) << endl;

  while(!halt_flag_ && pc_ < 16)
  {
    Byte instr = mem_[pc_];
    pc_++;
    Instruction::execute(*this, instr);
    printState();
  }
}

Byte CPU::getReg(Byte index) const {
  return reg_[index & 0x03];
}
void CPU::setReg(Byte index, Byte val) {
  reg_[index & 0x03] = val;
}

Byte CPU::getMem(Byte addr) const {
  return mem_[addr & 0x0f];
}
void CPU::setMem(Byte addr, Byte val) {
  mem_[addr & 0x0F] = val;
}

void CPU::loadProgram(const Byte* program, int length) {
  for (int i = 0; i < length && i < 16; i++)
  {
    mem_[i] = program[i];
  }
  cout << "[CPU] Program loaded, lenth= " << length << endl;
}

void CPU::printState () const {
  cout << "----CPU Srate----" << endl;
  cout << "PC: " << static_cast<int>(pc_) << endl;
  for (int i = 0; i < 4; i++)
  {
    cout << "R" << i << ": " << static_cast<int>(reg_[i]) << endl;
  }
  cout << "Memory: " << endl;
  for (int i = 0; i < 16;i++)
  {
    cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(mem_[i]) << endl;
  }
  cout << std::dec << endl;
  cout << "---------" << endl;
}

void CPU::halt() {
  halt_flag_ = true;
}

bool CPU::isHalt() const {
  return halt_flag_;
}
