#pragma once


template<typename To, typename From>
To convert(From f)
{
    return static_cast<To>(f);
}
