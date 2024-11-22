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

//Типы: Leg, Arm, Person, int, std::array
//Объекты: length, power, legs, arms, person