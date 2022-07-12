#ifndef BEEHIVEDP_APIARY_H
#define BEEHIVEDP_APIARY_H
#include <string>
#include <fstream>

using namespace std;


class beehive
{
    public:
        beehive(std::string name, int number, std::string type, int nof)
            :name_(name), number_(number), type_(type), number_of_frames_(nof)
        {std::cout<<"Beehive created.";}

    void setName(const std::string& name) //setter 
        {
            name_ = name;
        }

    std::string getName() const //getter
        {
            return name_;
        }

    private:
        std::string name_;
        int number_;
        std::string type_;
        int number_of_frames_;

};



#endif