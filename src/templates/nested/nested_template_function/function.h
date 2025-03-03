#pragma once


template <typename T, template<typename> class Container>
T accumulate(const Container<T>& container)
{
    T sum{};
    for (auto& v : container)
        sum += v;
    return sum;
}
