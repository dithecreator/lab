//
//  IndexException.hpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#ifndef IndexException_hpp
#define IndexException_hpp

#include <stdio.h>
#include "Exception.hpp"
class IndexException : public Exception{
public:
    IndexException(const char* mes);
    virtual const char* GetMessage() const;
};
#endif /* IndexException_hpp */
