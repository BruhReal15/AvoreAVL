template <typename T>
void ArvoreAVL::inserir(const T &info) throw char*{
    if(!tem()){
        No<T> *novoNo = new No<T>(&info);

       if(this->raiz == nullptr)
           this->raiz == novoNo;

       else {
           this->inserir(raiz->proximo(novoNo));
       }
    }
    else
        throw *char("Essa informação já consta na árvore");

}

template <typename T>
void ArvoreAVL::excluir(const T &Info) throw char* {
    if(!tem())
        throw *char("A informação passada não existe na árvore");
    else{

    }
}

template <typename T>
bool ArvoreAVL::tem(const T &Info) {

    if(this->raiz == &info)
        return true;
    else
    {
        this->raiz->proximo(&info);

    }


}

template<typename U>
std::ostream &operator<<(std::ostream &os, const ArvoreAVL<U> &avl) {}

template <typename T>
int ArvoreAVL::balanceamento(const std::stack<No < T> *> & pilha){}

template <typename T>
void ArvoreAVL::rEsquerda(No <T> *pai, No <T> *filho) {}

template <typename T>
void ArvoreAVL::rDireita(No <T> *pai, No <T> *filho) {}