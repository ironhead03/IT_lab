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

//Типы:/Types: Leg, Arm, Person, int, std::array<Leg, 2>
//Объекты:/Objects: person, person.legs, person.legs[0].length, person.legs[1].length, arms[0], arms[1], arms[0].power, arms[1].power
