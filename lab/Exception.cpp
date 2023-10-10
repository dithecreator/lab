//
//  Exception.cpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#include "Exception.hpp"
#include <string.h>


Exception::Exception(const char* message)
{
    strcpy(m_message, message);
}

const char* Exception::GetMessage() const
{
    return m_message;
}
