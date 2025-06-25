#ifndef _VARIABLE_HPP_
#define _VARIABLE_HPP_

#include <functional>

using std::function;

template <class T>
class Variable
{
private:
    T _v;

public:
    const T& val;

    function<bool (T const&, T const&)> setter;
    function<T (T const&)> getter;

public:
    Variable(function<bool (T const&, T const&)> setter,
             function<T (T const&)> getter) :
        val(_v),
        setter(setter),
        getter(getter)
    {
    }

    Variable(T const& t) :
        _v(t),
        val(_v),
        setter(nullptr),
        getter(nullptr)
    {
    }

    inline Variable& operator=(T const& v)
    {
        if (setter == nullptr || setter(_v, v))
        {
            _v = v;
        }

        return *this;
    }

    inline operator T()
    {
        if (getter == nullptr)
        {
            return _v;
        }
        else
        {
            return getter(_v);
        }
    }

    inline T operator &()
    {
        return (T)*this;
    }

    inline T* operator *()
    {
        return &_v;
    }
};

#endif /* _VARIABLE_HPP_ */
