
#include <vector>
#include <string>

#include "silver/argparser/bag.hpp"


namespace silver::argparser 
{


    Bag::Bag(std::vector<std::string> args)
        : args(std::move(args))
    {
    }


    std::string Bag::to_string() const
    {
        std::string result;
        
        bool first = true;
        for(const auto& arg: args) {
            if (first)
            {
                result.append(arg);
                first = false;
            }
            else
            {
                result.append(", ").append(arg);
            }
        }

        return result;
    }


    Bag parse(int argc, char** argv)
    {
        std::vector<std::string> args;
        args.reserve(argc);

        for(int i = 0; i < argc; i++)
        {
            args.emplace_back(argv[i]);
        }

        return Bag(std::move(args));
    }


}

