//
// Created by LuizFaleiros on 21/06/2020.
//
#include <Arduino.h>
#ifndef TESTE_CONFIG_H
#define TESTE_CONFIG_H


class config {
    
    private :
        int dirtyMaxUmidty;
        int dirtMinUmidity;
        int airMaxUmidity;
        int airMinUmidity;
        int initialStats;
        int actualStats;
        bool hasVentilation;
        String ip;
        String submask;
        String serverAddress;

    public:



};


#endif //TESTE_CONFIG_H
