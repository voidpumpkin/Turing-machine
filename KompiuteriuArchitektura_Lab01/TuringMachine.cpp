#include "TuringMachine.h"



TuringMachine::TuringMachine() {
}


TuringMachine::~TuringMachine() {
}

int TuringMachine::makeStep(InstructionLine instructionLine) {
	if (instructionLine.nextSymbol != '*')
		tape[head] = instructionLine.nextSymbol;
	return 0;
}

void TuringMachine::fillTape(std::string tape) {
	for (int i = 0; i < tape.size(); i++) {
		this->tape.push_back(tape[i]);
	}
}