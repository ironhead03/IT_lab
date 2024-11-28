struct Leg
{
    int length;
};

struct Arm
{
    int power;
};

struct Person
{
    std::array<Leg, 2> legs;
    Arm arms[2];
};

int main()
{
    Person person;
}

//Типы:/Types: Leg, Arm, Person, int, std::array
//Объекты:/Objects: length, power, legs, arms, person