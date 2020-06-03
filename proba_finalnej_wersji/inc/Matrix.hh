#pragma once

#include <iostream>
#include "Vector.hh"
#include <cmath>


template <typename T, int SIZE>
class Matrix{
protected:
  Vector<T, SIZE> vec[SIZE];

public:
  const T &operator()(int i, int j) const;
  T &operator()(int i, int j);
  Vector<T, SIZE> &operator[](int i);
  
  T determinant() const;
  Vector<T, SIZE> operator*(Vector<T, SIZE> arg) const;
};

template <typename T, int SIZE>
const T &Matrix<T, SIZE>::operator()(int i, int j) const
{
  if (i < 0 || i >= SIZE || j < 0 || j >= SIZE)
  {
    std::cerr << "POZA ZAKRESEM" << std::endl;
  }
  return vec[j][i];
}
template <typename T, int SIZE>
T &Matrix<T, SIZE>::operator()(int i, int j)
{
  return const_cast<T &>(const_cast<const Matrix<T, SIZE> *>(this)->operator()(i, j));
}

template <typename T, int SIZE>
Vector<T, SIZE> &Matrix<T, SIZE>::operator[](int i)
{
  return vec[i];
}

using std::abs;
template <typename T, int SIZE>
T Matrix<T, SIZE>::determinant() const
{
  Matrix<T, SIZE> copy = *this;

  T temp1, temp2;
  int verseSwitch = 1;
  T det;
  int i, j;

  if (abs(copy(0, 0)) < 0.0000001)
  {
    for (i = 0; i < SIZE; i++)
    {
      if (abs(copy(i, 0)) > 0.0000001)
      {
        verseSwitch *= -1;
        for (j = 0; j < SIZE; j++)
        {
          temp1 = copy(i, j);
          temp2 = copy(0, j);
          copy(0, j) = temp1;
          copy(i, j) = temp2;
        }
      }
    }
  }
  for (i = j = 0; i < SIZE - 1 && j < SIZE - 1; i++, j++)
  {
    for (int m = i + 1; m < SIZE; m++)
    {
      for (int n = SIZE - 1; n >= j; n--)
      {
        copy(m, n) -= (copy(m, j) / copy(i, j) * copy(i, n));
      }
    }
  }
  det = copy(0,0);

  for (i = j = 1; i < SIZE && j < SIZE; i++, j++)
  {
    det *= copy(i, j);
  }

  if(!verseSwitch)
  {
    det *= -1;
  }

  return det;
}


template <typename T, int SIZE>
Vector<T, SIZE> Matrix<T, SIZE>::operator*(Vector<T, SIZE> arg) const
{
  Vector<T, SIZE> result;

  for (int i = 0; i < SIZE; i++)
  {
    result[i] = this->operator()(i, i) - this->operator()(i, i);
    for (int j = 0; j < SIZE; j++)
    {
      result[i] += this->operator()(i, j) * arg[j];
    }
  }

  return result;
}

template <typename T, int SIZE>
std::istream &operator>>(std::istream &stream, Matrix<T, SIZE> &matrix)
{
  for (int i = 0; i < SIZE; i++)
  {
    stream >> matrix[i];
  }
  return stream;
}


template <typename T, int SIZE>
std::ostream &operator<<(std::ostream &stream, const Matrix<T, SIZE> &matrix)
{
  for (int i = 0; i < SIZE; i++)
  {
    stream << "     ";
    for (int j = 0; j < SIZE; j++)
    {
      stream << matrix(i, j) << " ";
    }
    stream << std::endl;
  }

  return stream;
}
