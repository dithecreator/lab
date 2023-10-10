//
//  DivideByZero.cpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#include "DivideByZero.hpp"
#include "Exception.hpp"

DivideByZero::DivideByZero(const char* mes) : Exception(mes)
{
}

const char* DivideByZero::GetMessage() const
{
    return m_message;
}
