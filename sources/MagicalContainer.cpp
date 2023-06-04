#include "MagicalContainer.hpp"

bool isPrime(int number)
{
    if (number < 2)
        return false;
    int sqrtNumber = sqrt(number);
    for (int i = 2; i <= sqrtNumber; ++i)
        if (number % i == 0)
            return false;
    return true;
}

namespace ariel
{
    // ----------------MagicalContainer-----------------

    void MagicalContainer::addElement(int Elem) {}
    void MagicalContainer::removeElement(int Elem) {}
    int MagicalContainer::size() { return 0; }

    // ----------------AscendingIterator-----------------

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container) {}
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container) {}
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other) { return *this; }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(AscendingIterator &&other) noexcept { return *this; }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &container) const { return false; }
    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &container) const { return false; }
    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &container) const { return false; }
    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &container) const { return false; }

    int MagicalContainer::AscendingIterator::operator*() { return 0; }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() { return *this; }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin() { return *this; }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end() { return *this; }

    // ----------------SideCrossIterator-----------------

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container) {}
    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container) {}
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other) { return *this; }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &&other) noexcept { return *this; }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &container) const { return false; }
    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &container) const { return false; }
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &container) const { return false; }
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &container) const { return false; }

    int MagicalContainer::SideCrossIterator::operator*() { return 0; }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() { return *this; }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin() { return *this; }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end() { return *this; }

    // ----------------PrimeIterator-----------------

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container) {}
    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container) {}
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other) { return *this; }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(PrimeIterator &&other) noexcept { return *this; }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &container) const { return false; }
    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &container) const { return false; }
    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &container) const { return false; }
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &container) const { return false; }

    int MagicalContainer::PrimeIterator::operator*() { return 0; }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() { return *this; }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin() { return *this; }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end() { return *this; }
};