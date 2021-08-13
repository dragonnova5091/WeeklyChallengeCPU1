#include "pch.h"

struct Memory
{
	static constexpr unsigned int MAX_MEM = 1024 * 64;
	unsigned char Data[MAX_MEM];


	void init_mem()
	{
		for (unsigned int i = 0; i < MAX_MEM; i++)
		{
			Data[i] = 0;
		}
	}
};


struct CPU
{

	using Byte = unsigned char;
	using Word = unsigned short;

	Word A;
	Word PC;
	Byte SC;

	// sets or resets the CPU registers, and stack and program counters. Also inits the memory RAM;
	void Reset(Memory& memory)
	{
		PC = 0xFFFC;
		SC = 0x0100;
		
		A = 0;

		memory.init_mem();
	}

	void Execute(Memory& memory);
};



void CPU::Execute(Memory& memory)
{

}



int main()
{
	CPU theCPU;
	Memory theMemory;

	theCPU.Reset(theMemory);



	return 0;
}
