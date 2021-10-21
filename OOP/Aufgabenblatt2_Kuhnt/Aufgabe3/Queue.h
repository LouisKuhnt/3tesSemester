#ifndef QUEUE_H
#define QUEUE_H

class Queue{
		private:
		int head, tail, size;
		int array[50];
		
		public:
		Queue();
		void put(int v);
		int get();
		bool isEmpty();
	};

#endif