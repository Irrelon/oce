// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_HDataMapOfStringHArray1OfInteger_HeaderFile
#define _TDataStd_HDataMapOfStringHArray1OfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_HDataMapOfStringHArray1OfInteger_HeaderFile
#include <Handle_TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#endif

#ifndef _TDataStd_DataMapOfStringHArray1OfInteger_HeaderFile
#include <TDataStd_DataMapOfStringHArray1OfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TDataStd_DataMapOfStringHArray1OfInteger;


//! Extension of TDataStd_DataMapOfStringHArray1OfInteger class <br>
//!          to be manipulated by handle. <br>
class TDataStd_HDataMapOfStringHArray1OfInteger : public MMgt_TShared {

public:

  
  Standard_EXPORT   TDataStd_HDataMapOfStringHArray1OfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDataStd_HDataMapOfStringHArray1OfInteger(const TDataStd_DataMapOfStringHArray1OfInteger& theOther);
  
       const TDataStd_DataMapOfStringHArray1OfInteger& Map() const;
  
        TDataStd_DataMapOfStringHArray1OfInteger& ChangeMap() ;




  DEFINE_STANDARD_RTTI(TDataStd_HDataMapOfStringHArray1OfInteger)

protected:




private: 


TDataStd_DataMapOfStringHArray1OfInteger myMap;


};


#include <TDataStd_HDataMapOfStringHArray1OfInteger.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif