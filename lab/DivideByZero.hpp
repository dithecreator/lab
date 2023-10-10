//
//  DivideByZero.hpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#ifndef DivideByZero_hpp
#define DivideByZero_hpp
#include <stdio.h>
#include "Exception.hpp"
class DivideByZero : public Exception {
public:
    DivideByZero(const char* mes);
    virtual const char* GetMessage() const;
};

#endif /* DivideByZero_hpp */
