
#include <iostream>

#include "silver/argparser/bag.hpp"


namespace argparser = silver::argparser;


int main(int argc, char* argv[]) 
{
    argparser::Bag bag = argparser::parse(argc, argv);

    std::cout << bag.to_string() << std::endl;

    return 0;
}

