#pragma once
#include <set>
#include <list>
#include <cmath>
#include <iterator>

using namespace std;

namespace ariel
{
    class MagicalContainer
    {
    private:
        multiset<int> sorted;
        list<int> primed;
        list<int> crucifixion;

    public:
        void addElement(int);
        void removeElement(int);
        int size();

        // ----------------AscendingIterator-----------------

        class AscendingIterator
        {
        private:
            MagicalContainer &container;

        public:
            ~AscendingIterator() = default;
            AscendingIterator(MagicalContainer &);
            AscendingIterator(const AscendingIterator &);
            AscendingIterator &operator=(AscendingIterator &&) noexcept;
            AscendingIterator &operator=(const AscendingIterator &);
            AscendingIterator(AscendingIterator &&) noexcept = default;

            bool operator==(const AscendingIterator &) const;
            bool operator!=(const AscendingIterator &) const;
            bool operator>(const AscendingIterator &) const;
            bool operator<(const AscendingIterator &) const;

            int operator*();
            AscendingIterator &operator++();

            AscendingIterator &begin();
            AscendingIterator &end();
        };

        // ----------------SideCrossIterator-----------------

        class SideCrossIterator
        {
        private:
            MagicalContainer &container;

        public:
            ~SideCrossIterator() = default;
            SideCrossIterator(MagicalContainer &);
            SideCrossIterator(const SideCrossIterator &);
            SideCrossIterator &operator=(SideCrossIterator &&) noexcept;
            SideCrossIterator &operator=(const SideCrossIterator &);
            SideCrossIterator(SideCrossIterator &&) noexcept = default;

            bool operator==(const SideCrossIterator &) const;
            bool operator!=(const SideCrossIterator &) const;
            bool operator>(const SideCrossIterator &) const;
            bool operator<(const SideCrossIterator &) const;

            int operator*();
            SideCrossIterator &operator++();

            SideCrossIterator &begin();
            SideCrossIterator &end();
        };

        // ----------------PrimeIterator-----------------

        class PrimeIterator
        {
        private:
            MagicalContainer &container;

        public:
            ~PrimeIterator() = default;
            PrimeIterator(MagicalContainer &);
            PrimeIterator(const PrimeIterator &);
            PrimeIterator &operator=(PrimeIterator &&) noexcept;
            PrimeIterator &operator=(const PrimeIterator &);
            PrimeIterator(PrimeIterator &&) noexcept = default;

            bool operator==(const PrimeIterator &) const;
            bool operator!=(const PrimeIterator &) const;
            bool operator>(const PrimeIterator &) const;
            bool operator<(const PrimeIterator &) const;

            int operator*();
            PrimeIterator &operator++();

            PrimeIterator &begin();
            PrimeIterator &end();
        };
    };
};