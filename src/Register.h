#ifndef GAMEBOY_REGISTER_H
#define GAMEBOY_REGISTER_H


template<class T>
class Register {
public:
    Register(const T init);
    T Read();
    T Write(const T val);
private:
    T value;
};

template<class T> Register<T>::Register(const T init) : value(init) { }
template<class T> T Register<T>::Read() { return value; }
template<class T> T Register<T>::Write(const T val) { value = val; }

#endif //GAMEBOY_REGISTER_H
