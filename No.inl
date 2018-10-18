template<typename T>
No<T>::No(const T &info) {
    this->info = info;
    this->direita = nullptr;
    this->esquerda = nullptr;
}

template<typename T>
T No<T>::getInfo() {
    return this->info;
}

template<typename T>
No<T> *No<T>::getEsquerda() {
    return this->esquerda;
}

template<typename T>
No<T> *No<T>::getDireita() {
    return this->direita;
}


template<typename T>
int No<T>::getFatorDeBalanceamento() {
    return -1;
}

template<typename T>
void No<T>::setInfo(const T &info) {
    this->info = info;
}

template<typename T>
void No<T>::setEsquerda(No *esq) {
    this->esquerda = esq;
}

template<typename T>
void No<T>::setDireita(No *dir) {
    this->direita = dir;
}

template<typename T>
No<T>* No<T>::proximo(const T &info){
    if(this->info > &info)
        return this->getEsquerda();
    else
        return this->getDireita();

}

template<typename T>
bool No<T>::éFolha(){

    if((this->getEsquerda() == nullptr)||(this->getDireita() == nullptr))
        return true;

    return false;
}
