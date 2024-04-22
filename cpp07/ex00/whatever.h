//
// Created by fvon-nag on 04.03.24.
//

#ifndef CPP07_WHATEVER_H
#define CPP07_WHATEVER_H

template <typename T>

void swap(T &t1, T &t2) {
    T c = t1;
    t1 = t2;
    t2 = c;
}

template <typename T>
T min(T t1, T t2){
    if (t1 < t2)
        return t1;
    else
        return t2;
}

template <typename T>
T max(T t1, T t2){
    if (t1 > t2)
        return t1;
    else
        return t2;
}

#endif //CPP07_WHATEVER_H
