#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
private:
    T* _array;
    unsigned int _size;

public:
    Array() : _array(NULL), _size(0) {}

    Array(unsigned int n) : _array(new T[n]), _size(n)
    {
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = T();
    }

    Array(const Array& other) : _array(NULL), _size(0)
    {
        *this = other;
    }

    Array& operator=(const Array& other)
    {
        if (this != &other)
        {
            delete[] _array;
            _size = other._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        return *this;
    }

    ~Array()
    {
        delete[] _array;
    }

    T& operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::exception();
        return _array[index];
    }

    unsigned int size() const
    {
        return _size;
    }
};

#endif
