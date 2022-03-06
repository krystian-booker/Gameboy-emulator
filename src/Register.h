#ifndef GAMEBOY_REGISTER_H
#define GAMEBOY_REGISTER_H


template<class T>
class Register {
public:
    Register(const T init);
    T Read();
private:
    T value;
};

template<class T> Register<T>::Register(const T init) : value(init) { }
template<class T> T Register<T>::Read() { return value; }

#endif //GAMEBOY_REGISTER_H
