#ifndef __DOUBLE_VECTOR_CPP__
#define __DOUBLE_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

DoubleVector::DoubleVector()  {}
DoubleVector::~DoubleVector() {}

int DoubleVector::size() 
{
<<<<<<< HEAD
   return 0;
=======
   return doubleVector.size();
>>>>>>> 21bd7684b759ac2a94b54cb962374e844a3885c4
}

// just return the double at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
double DoubleVector::get(int index) 
{ 
<<<<<<< HEAD
   return 0;
=======
   return doubleVector.at(index);
>>>>>>> 21bd7684b759ac2a94b54cb962374e844a3885c4
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void DoubleVector::put(double value, int index)
{
    if (index >= 0 && (unsigned)index <= doubleVector.size()){
	doubleVector[index] = value;
    }
    else {
	doubleVector.push_back(value);
    }
}

// use push_back to append
void DoubleVector::put(double value)
{
    doubleVector.push_back(value);
}

// for each character in characteVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendCharacterVector(CharacterVector& characterVector)
{
    for (int i{0}; i < characterVector.size(); i++){
	doubleVector.push_back(static_cast<double>(characterVector.get(i)));
    }
}

// for each integer in integerVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendIntegerVector(IntegerVector& integerVector)
{
    for (int i{0}; i < integerVector.size(); i++){
        doubleVector.push_back(static_cast<double>(integerVector.get(i)));
    }
}

#endif
