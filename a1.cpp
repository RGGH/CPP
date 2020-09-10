#include <iostream>
using namespace std;

class cat

{
private:                        //store data
    int age;
    int weight;
    string colour;

public:
    // constructor
    cat(int initAge, int initWeight, string initColour);
    ~cat(); // destructor

    //


    //

};



cat::cat(int initAge, int initWeight, string initColour)
{
    age = initAge;
    weight = initWeight;
    colour = initColour;
}

cat::~cat()
{
}



int main()
{
    printf("hello");
}