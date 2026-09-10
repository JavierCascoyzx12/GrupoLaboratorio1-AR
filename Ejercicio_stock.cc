#include <iostream>

int stock = 50;

void IngresarStock(int &stock, int cantidad);


int main(){

    int cantidad;
    std::cout<<"ingrese el nuevo stock:"<< std::endl;
    std::cin>>cantidad;
    if(cantidad < 0){
        std::cout<<"el stock no puede ser negativo"<<std::endl;
        return 1;
    } else{
        IngresarStock(stock, cantidad);
    std::cout<<"el stock actual es: "<<stock<<std::endl;
    }
    
}

void IngresarStock(int &stock, int cantidad){
    stock += cantidad;
}

