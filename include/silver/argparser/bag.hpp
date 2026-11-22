
#pragma once

#include <string>
#include <vector>


namespace silver::argparser
{


    class Bag
    {

        std::vector<std::string> args;


    public:

        Bag(std::vector<std::string> args);

        std::string to_string() const;
    
    };


    Bag parse(int argc, char* argv[]);

}


