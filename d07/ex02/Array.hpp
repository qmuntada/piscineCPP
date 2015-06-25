
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	public:
		Array <T>(void) : _length(0), _array(NULL) {};
		Array <T>(unsigned int n) : _length(n), _array(NULL)
		{
			this->_array = new T[n];
		};
		Array <T>(Array<T> const &src)
		{
			*this = src;
		};
		~Array <T>(void)
		{
			if (this->_array != NULL)
				delete[] this->_array;
		};
		Array &		operator=(Array<T> const &rhs)
		{
			if (this == &rhs)
				return *this;
			if (this->_array != NULL)
				delete [] this->_array;

			this->_length = rhs.getLength();
			this->_array = new T[this->_length];
			for (int i = 0; i < this->_length; i++)
				this->_array[i] = rhs[i];
			return *this;
		};
		T &			operator[](unsigned int i)
		{
			if (i >= this->_length)
				throw std::exception();
			return this->_array[i];
		}
		unsigned int	getLength(void) const {return this->_length;}

	private:
		unsigned int	_length;
		T				*_array;
};

# endif
