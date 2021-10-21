#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList{
		private:
			double *array;
			int size;
		public:
			ArrayList(int size);
			~ArrayList();
			ArrayList(const ArrayList& arrayList);
			double get(int i);
			void set(int i, double number);
	};

#endif