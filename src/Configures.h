#ifndef CONFIGURES_H
#define CONFIGURES_H


class Configures
{
    public:
        Configures();

        int popSize;
        double elitism;
        int generations;
        double crossover;
        int MAX_THREADS;

        int num_citys;
        int max_itens;

        int DIMENSION;
        int NUMBER_OF_ITEMS;
        int CAPACITY_OF_KNAPSACK;
        double MIN_SPEED;
        double MAX_SPEED;
        double RENTING_RATIO;

        virtual ~Configures();

    protected:

    private:
};

extern Configures * conf;

#endif // CONFIGURES_H