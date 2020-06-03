#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>

/** szablon klasy wraz z metodami (szablonami) przyjmujący typ zmiennych i rozmiar SIZE **/
template <typename T, int SIZE>
class Vector{
  T data[SIZE]; /** Vector jako SIZE zmiennych typu T **/
public:
  const T &operator[](int i) const;
  T &operator[](int i);
  T operator*(Vector<T, SIZE> arg) const;
  Vector<T, SIZE> operator+(Vector<T, SIZE> arg) const;
  Vector<T, SIZE> operator-(Vector<T, SIZE> arg) const;
  Vector<T, SIZE> operator-(T diff) const;
  Vector<T, SIZE> operator/(T divider) const;
  Vector<T, SIZE> operator*(T factor);
  Vector<T,SIZE> operator+=(T element);
};

template <typename T, int SIZE>
const T &Vector<T, SIZE>::operator[](int i) const
{
  if (i < 0 || i >= SIZE)
  {
    std::cerr << "POZA ZAKRESEM" << std::endl;
  }
  return data[i];
}

template <typename T, int SIZE>
T &Vector<T, SIZE>::operator[](int i)
{
  return const_cast<T &>(const_cast<const Vector<T, SIZE> *>(this)->operator[](i));
}

template <typename T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::operator+(Vector<T, SIZE> arg) const
{
  for (int i = 0; i < SIZE; i++)
  {
    arg[i] += data[i];
  }

  return arg;
}

template <typename T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::operator-(Vector<T, SIZE> arg) const
{
  for (int i = 0; i < SIZE; i++)
  {
    arg[i] -= data[i];
    arg[i] *= -1;
  }

  return arg;
}

template <typename T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::operator-(T diff) const
{
  Vector<T, SIZE> result;
  for (int i = 0; i < SIZE; i++)
  {
    result[i] = data[i] - diff;
  }

  return result;
}

template <typename T, int SIZE>
T Vector<T, SIZE>::operator*(Vector<T, SIZE> arg) const
{
  T result = 0;

  for (int i = 0; i < SIZE; i++)
  {
    result += data[i] * arg[i];
  }

  return result;
}

template <typename T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::operator*(T factor)
{
  Vector<T, SIZE> result;

  for (int i = 0; i < SIZE; i++)
  {
    result[i] = data[i] * factor;
  }

  return result;
}

template <typename T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::operator/(T divider) const
{
  Vector<T, SIZE> result;

  if (divider == 0.0)
  {
    std::cerr << "DZIELENIE PRZEZ 0" << std::endl;
    divider = 1;
  }

  for (int i = 0; i < SIZE; i++)
  {
    result[i] = data[i] / divider;
  }

  return result;
}

template <typename T, int SIZE>
Vector<T,SIZE> Vector<T,SIZE>::operator+=(T element)
{
  for(int i = 0; i < SIZE; i++)
  {
    data[i] += element[i];
  }
  return this;
}

template <typename T, int SIZE>
std::istream &operator>>(std::istream &stream, Vector<T, SIZE> &vec)
{
  for (int i = 0; i < SIZE; i++)
  {
    stream >> vec[i];
  }

  return stream;
}

template <typename T, int SIZE>
std::ostream &operator<<(std::ostream &stream, const Vector<T, SIZE> &vec)
{
  for (int i = 0; i < SIZE; i++)
  {
    stream << vec[i] << " ";
  }

  return stream;
}

using Vector3D = Vector<double,3>;






