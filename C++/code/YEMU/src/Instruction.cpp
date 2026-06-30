#include "CPU.h"
#include "Instruction.h"
#include <iostream>

using std::cout;
using std::endl;

void Instruction::execute(CPU& cpu, Byte instr) {
  Byte opcode = getOpcode(instr);

  switch(opcode)
  {
    case 0x0: //0000 = mov
      mov(cpu, instr);
      break;
    case 0x1: //0001 = add
      add(cpu, instr);
      break;
    case 0xE: //1110 = load
      load(cpu, instr);
      break;
    case 0xF: //1111 = store
      store(cpu, instr);
      break;
    default:
      cout << "[Instruction] UnKnown opcode" << endl;
      cpu.halt();
      break;
  }
}


Byte Instruction::getOpcode(Byte instr) {
  return (instr >> 4) & 0x0f;
}

Byte Instruction::getRT(Byte instr) {
  return (instr >> 2) & 0x03;
}

Byte Instruction::getRS(Byte instr) {
  return instr & 0x03;
}

Byte Instruction::getAddr(Byte instr) {
  return instr & 0x0F;
}

void Instruction::mov(CPU& cpu, Byte instr) {
  Byte rt = getRT(instr);
  Byte rs = getRS(instr);
  Byte value = cpu.getReg(rs);
  cpu.setReg(rt, value);
  cout << "[Instruction] mov R" << static_cast<int>(rt)
            << ", R" << static_cast<int>(rs)
            << " (R[" << static_cast<int>(rt) << "] <- "
            << static_cast<int>(value) << ")" << endl;
}

void Instruction::add(CPU& cpu, Byte instr) {
  Byte rt = getRT(instr);
  Byte rs = getRS(instr);
  Byte rs_val = cpu.getReg(rs);
  Byte rt_val = cpu.getReg(rt);
  Byte result = rs_val + rt_val;
  cpu.setReg(rt, result);

  cout << "[Instruction] add R" << static_cast<int>(rt)
            << ", R" << static_cast<int>(rs)
            << " (R[" << static_cast<int>(rt) << "] <- "
            << static_cast<int>(rs_val) << " + "
            << static_cast<int>(rt_val) << " = "
            << static_cast<int>(result) << ")" << endl;
}

void Instruction::load(CPU& cpu, Byte instr) {
  Byte addr = getAddr(instr);
  Byte value = cpu.getMem(addr);
  cpu.setReg(0, value);
  cout << "[Instruction] load addr=0x" << std::hex
            << static_cast<int>(addr) << std::dec
            << " (R[0] <- M[" << static_cast<int>(addr)
            << "] = " << static_cast<int>(value) << ")" << endl;
}

void Instruction::store(CPU& cpu, Byte instr) {
  Byte addr = getAddr(instr);
  Byte value = cpu.getReg(0);
  cpu.setMem(addr, value);
  cout << "[Instruction] store addr=0x" << std::hex
            << static_cast<int>(addr) << std::dec
            << " (M[" << static_cast<int>(addr)
            << "] <- R[0] = " << static_cast<int>(value) << ")" << endl;
}

