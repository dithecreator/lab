//
//  Exception.hpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#ifndef Exception_hpp
#define Exception_hpp
#include <stdio.h>


class Exception
{
protected:
    char m_message[100];

public:

    Exception(const char* message);

    const char* GetMessage() const;
};


#endif /* Exception_hpp */
