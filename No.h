#ifndef ARVOREAVL_NO_H
#define ARVOREAVL_NO_H


template<typename T>
class No {
public:
    No<T>(const T& info);
    No<T>(const T &info, No *esq, No *dir);

    T getInfo();

    No<T>* getEsquerda();

    No<T>* getDireita() ;

    int getFatorDeBalanceamento() ;

    void setInfo(const T &info);

    void setEsquerda(No* esq) ;

    void setDireita(No* dir);

    No<T> *proximo(const T &info);

    bool éFolha();


private:
    T info;
    No *esquerda;
    No *direita;
};

#include "No.inl"


#endif //ARVOREAVL_NO_H
