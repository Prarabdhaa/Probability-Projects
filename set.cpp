
#include "tuple.h"
#include "set.h"
#include "invariant.h"
#include <iostream>
#include <limits.h>   // needed for INT_MIN

// Set up an error set to be returned as necessary
const Set emptySet(0,(int*)0);
const Set errorSet(-1,(int*)0);


bool Set::isEmpty() const {




 if( _numElements == 0){
 
  return true;
 }
 
 else {
  return false;
 }    

}


bool Set::isError() const {
 if (_numElements == -1)
  return true;
 else
  return false;
}
  
int Set::cardinality() const {
  return 0;
}   

Set Set::union_(const Set& s) const {
  
  this->_pTuples = new Tuple[this->_numElements];
  s._pTuples = new Tuple[s._numElements];

  Set s1 = new Set;
  
  int i=0;

  int j=0;


  int sum = s._numElements + _numElements;

  while(i < s._numElements){

  		s1._pTuples[i] = this->_pTuples[i];
  		i++;


  }

  while(j < this->_numElements){

  		s1._pTuples[i] = this->_pTuples[j];
  		i++;


  }

  
  return s1;
}

Set Set::intersection(const Set& s) const {
  return emptySet;
}

Set Set::difference(const Set& s) const {
  return emptySet;
}

Set Set::select(predicate* p) const {
  return emptySet;
}

Set Set::project(const int numItems, const int items[]) const {
  return emptySet;
}

Set Set::cartesian(const Set& s) const {
  return emptySet;
}

void Set::operator=(const Set& s) {
}

Set::Set() {
_numElements = 0;
_tupleArraySize = 0;
_pTuples = NULL;

}


Set::Set(const Set& s) {

    _pTuples = new Tuple[s._numElements];
   _numElements = s._numElements;
	int i = 0;
	while( i < _numElements )
	   {
		_pTuples[i] = s._pTuples[i];
                i++;
	   } 


}


Set::Set(const int numElements, const int data[]) {
	
	if ( numElements < 0)
          _numElements = -1;
       
	
       else{
        _pTuples = new Tuple[numElements];          
		_numElements = numElements;
       
	   Tuple T[numElements];
		for( int i = 0; i < _numElements; i++)
		{
                    T[i] = Tuple(data[i]);
					_pTuples[i]=T[i];
                    
		}
	   }  


}

Set::Set(const int numElements, const Tuple tuples[]) {

	if ( numElements < 0)
          _numElements = -1;
		
	
	
	_numElements = numElements;
    
 _pTuples = new Tuple[numElements];	


	for(int i=1; i <= numElements; i++)
		{ 
 		  _pTuples[i] = tuples[i];

     
		} 
}


Set::~Set() {

if(!_pTuples)
     delete [] _pTuples;

}

std::ostream& operator<<(std::ostream& os, const Set& s) {
}
