#pragma once


template <typename T>
class Base
{};


template <typename U>
class Derived : public Base<U>
{};
