#include "Queue.hpp"

Queue::~Queue(){

	QueueNode* endOfLine;

	while (endOfLine) {
		QueueNode* garbage;
		endOfLine = endOfLine->next;
		delete garbage;
	}

}

bool Queue::isEmpty() {
	if (head && tail == nullptr) {
		return true;
	}

	return false;
}