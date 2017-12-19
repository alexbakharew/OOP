#pragma once
typedef struct elem elem;
struct elem
{
	void* pointer;
	elem* next;
	elem* prev;
};
class TQueue
{
public:
	TQueue();
	bool push(void*);
	void* pop();
	bool is_empty();
	~TQueue();
private:
	elem* begin;
	elem* end;
	size_t size;
};