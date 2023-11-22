#pragma once

template <typename T>
void iter(T* array, size_t length, void (*func)(const T&))
{
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}
