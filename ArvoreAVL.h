#ifndef ARVOREAVL_ARVOREAVL_H
#define ARVOREAVL_ARVOREAVL_H

#include <iostream>
#include <stack>
#include "No.h"

template <typename T>
class ArvoreAVL {
public:
    void inserir(const T &info) throw(char*);
    void excluir(const T &Info);
    bool tem(const T &Info);

    template<typename U> // tem que ser diferente da classe
    friend std::ostream &operator<<(std::ostream &os, const ArvoreAVL<T> &avl);


private:
    No<T>* raiz;
    void balanceamento(const std::stack<No<T> *> &pilha);
    void rEsquerda(No<T>* pai, No<T>* filho);
    void rDireita(No<T>* pai, No<T>* filho);
};

#include "ArvoreAVL.inl"

#endif //ARVOREAVL_ARVOREAVL_H
