#ifndef QUEUE_HPP
#define QUEUE_HPP


class Queue
{
private:
	struct QueueNode {
		int val;
		QueueNode* prev;
		QueueNode* next;

		QueueNode(int payload, QueueNode* prev1 = nullptr, QueueNode* next1 = nullptr) {
			val = payload;
			prev = prev1;
			next = next1;
		}
	};

public:
	QueueNode* head;
	QueueNode* tail;

	bool isEmpty();
	void addBack(int val);
	int getFront();
	void removeFront();
	void printQueue();
	
	Queue() { head = nullptr; tail = nullptr; }
	~Queue();
};

#endif // !QUEUE_HPP
