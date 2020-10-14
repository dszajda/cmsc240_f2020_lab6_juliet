#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;
   
   cv.put(33);
   std::cout << std::endl;
   std::cout << dv.get(0) << std::endl;
   cv.put(1);
   std::cout << dv.size() << std::endl;
   std::cout << dv.get(1) << std::endl;
   

   
   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range
   dv.put(2.2);
   std::cout << std::endl;
   std::cout << dv.get(0)  << std::endl;
   std::cout << dv.size() << std::endl;
   std::cout << dv.get(1) << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range
   
   iv.put(5);
   std::cout << std::endl;
   std::cout << iv.get(0) << std::endl;
   std::cout << iv.size() << std::endl;
   std::cout << iv.get(1) << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << dv2.append(lv) << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << dv2.append(cv) << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;
   
   std::cout << std::endl;
   iv2.appendCharacterVector(cv);
   iv2.appendDoubleVector(dv);
   std::cout << "appended-to IntegerVector:" << iv2.get(0) << std::endl;
   std::cout << "appended-to IntegerVector:" << iv2.get(1) << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
