#include "sources/MagicalContainer.hpp"
#include "doctest.h"

using namespace ariel;

TEST_CASE("Megical Container")
{
    MagicalContainer container;

    // add element
    CHECK_NOTHROW(container.addElement(1));
    CHECK_NOTHROW(container.addElement(2));
    CHECK_NOTHROW(container.addElement(3));
    CHECK_NOTHROW(container.addElement(4));
    CHECK_NOTHROW(container.addElement(5));
    CHECK(container.size() == 5);

    // remove element
    CHECK_NOTHROW(container.removeElement(1));
    CHECK_NOTHROW(container.removeElement(2));
    CHECK(container.size() == 3);

    // add the same element
    CHECK_NOTHROW(container.addElement(3));
    CHECK_NOTHROW(container.addElement(4));
}

TEST_CASE("Ascending")
{
    MagicalContainer Asc1;
    MagicalContainer Asc2;

    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending1(Asc1));
    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending2(Asc2));

    MagicalContainer::AscendingIterator Ascending1(Asc1);
    MagicalContainer::AscendingIterator Ascending2(Asc2);
    MagicalContainer::AscendingIterator Ascending3(Asc2);

    Asc1.addElement(9);
    Asc1.addElement(7);
    Asc1.addElement(8);
    Asc1.addElement(6);
    CHECK(*Ascending1.begin() == 6);

    Asc2.addElement(7);
    Asc2.addElement(5);
    Asc2.addElement(3);
    Asc2.addElement(4);
    Asc2.addElement(2);
    CHECK(*Ascending2.begin() == 2);

    CHECK_NOTHROW(Ascending2.operator==(Ascending3));
    CHECK_THROWS_AS(Ascending1.operator==(Ascending2), invalid_argument);
    CHECK_NOTHROW(Ascending1.operator!=(Ascending2));
    CHECK_THROWS_AS(Ascending1.operator<(Ascending2), invalid_argument);
    CHECK_THROWS_AS(Ascending1.operator>(Ascending2), invalid_argument);

    ++Ascending1;
    CHECK(*Ascending1 == 7);
    ++Ascending1;
    ++Ascending1;
    ++Ascending1;
    CHECK(*Ascending1 == *Ascending1.end());
}

TEST_CASE("SideCross")
{
    MagicalContainer Asc1;
    MagicalContainer Asc2;

    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending1(Asc1));
    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending2(Asc2));

    MagicalContainer::AscendingIterator Ascending1(Asc1);
    MagicalContainer::AscendingIterator Ascending2(Asc2);
    MagicalContainer::AscendingIterator Ascending3(Asc2);

    Asc1.addElement(9);
    Asc1.addElement(7);
    Asc1.addElement(8);
    Asc1.addElement(6);
    CHECK(*Ascending1.begin() == 6);

    Asc2.addElement(7);
    Asc2.addElement(5);
    Asc2.addElement(3);
    Asc2.addElement(4);
    Asc2.addElement(2);
    CHECK(*Ascending2.begin() == 2);

    CHECK_NOTHROW(Ascending2.operator==(Ascending3));
    CHECK_THROWS_AS(Ascending1.operator==(Ascending2), invalid_argument);
    CHECK_NOTHROW(Ascending1.operator!=(Ascending2));
    CHECK_THROWS_AS(Ascending1.operator<(Ascending2), invalid_argument);
    CHECK_THROWS_AS(Ascending1.operator>(Ascending2), invalid_argument);

    ++Ascending2;
    CHECK(*Ascending2 == 7);
    ++Ascending2;
    ++Ascending2;
    ++Ascending2;
    ++Ascending2;
    CHECK(*Ascending1 == *Ascending1.end());
}

TEST_CASE("Prime")
{
    MagicalContainer Asc1;
    MagicalContainer Asc2;

    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending1(Asc1));
    CHECK_NOTHROW(MagicalContainer::AscendingIterator Ascending2(Asc2));

    MagicalContainer::AscendingIterator Ascending1(Asc1);
    MagicalContainer::AscendingIterator Ascending2(Asc2);
    MagicalContainer::AscendingIterator Ascending3(Asc2);

    Asc1.addElement(9);
    Asc1.addElement(7);
    Asc1.addElement(8);
    Asc1.addElement(6);
    CHECK(*Ascending1.begin() == 6);

    Asc2.addElement(7);
    Asc2.addElement(5);
    Asc2.addElement(3);
    Asc2.addElement(4);
    Asc2.addElement(2);
    CHECK(*Ascending2.begin() == 2);

    CHECK_NOTHROW(Ascending2.operator==(Ascending3));
    CHECK_THROWS_AS(Ascending1.operator==(Ascending2), invalid_argument);
    CHECK_NOTHROW(Ascending1.operator!=(Ascending2));
    CHECK_THROWS_AS(Ascending1.operator<(Ascending2), invalid_argument);
    CHECK_THROWS_AS(Ascending1.operator>(Ascending2), invalid_argument);

    CHECK(*Ascending1 == 7);
    CHECK(*Ascending2 < *Ascending1);    
    ++Ascending1;
    ++Ascending2;
    CHECK(*Ascending1 == *Ascending1.end());
    CHECK(*Ascending2 == 3);
}
