//
//  IndexException.cpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#include "IndexException.hpp"
#include "Exception.hpp"
IndexException::IndexException(const char* mes) : Exception(mes)
{
}

const char* IndexException::GetMessage() const
{
    return m_message;
}
