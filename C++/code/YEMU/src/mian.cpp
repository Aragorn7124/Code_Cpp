#include "CPU.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "----exe beging----" << endl;

  CPU cpu;
  cpu.printState();

  Byte program[] = {
    0x04,
    0x09,
    0x19,
    0xFA
  };
  cpu.loadProgram(program, 4);
  cpu.printState();
  cpu.run();
  cpu.printState();

  cout << "----is over----" << endl;
  return 0;
}
