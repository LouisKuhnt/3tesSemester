#ifndef DYNAMICINT_H
#define DYNAMICINT_H

class DynamicInt {
		private:
			const int* pointer;
		public:
			DynamicInt(int);
			DynamicInt(const DynamicInt& dynamicInt);
			~DynamicInt();
			int get() const;
	};

#endif