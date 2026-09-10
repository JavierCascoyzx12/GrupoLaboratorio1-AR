#include <iostream>

int stock = 50;


void ConsultarStock(int stock);


int main()
{

   ConsultarStock(stock);


    return 0;
}

void ConsultarStock(int stock){

    std::cout << "el stock actual es: " << stock  << "\n";

};