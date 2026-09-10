#include <iostream>

int stock;

void IngresarStock(int &stock, int cantidad);

int main(){


    return 0;
}

void IngresarStock(int &stock, int cantidad){

    std::cout<<"ingrese la cantidad de stock:"<< endl;
    std::cin>>cantidad;

    stock += cantidad;
}

