#include<list>
#include<iostream>

template<class T>
class Almacen{
public:

    Almacen(int tamano){
        for(int i = 0; i < tamano; i++){
            std::cout << "Item: " << std::endl;
            std::cin >> elemento;
            lista.push_front(elemento);
        }
    }
    void addBeg(int n){
        lista.push_front(n);
    }
    
    void addEnd(int n){
        lista.push_back(n);
    }
    
    bool isEmpty(){
        if(lista.size() > 0){
            return false;
        }
        else{
            return true;
        }
    }
    
    int size(){
        return lista.size();
    }
    
    void deleteAt(int pos){
        std::list<int>::iterator it;
        it = lista.begin();
        for(int i = 0; i <= pos; i++){
            ++it;
        }
        lista.erase(it);    
    }
    
private:
    std::list<int> lista;
    T elemento;
};