#include "iter.hpp"

int main(void){
    std::cout << "---Tottenham Hotspur Starting 11---" << std::endl;
    int len = 11;
    std::string const teamLineup[11] = {"#1 GK Hugo Lloris", "#14 LWB Ivan Perisic", "#33 LCB Ben Davies", 
                                    "#15 CB Eric Dier", "#4 RCB Cristian Romero", "#5 CM Pierre Emile Hojbjerg", 
                                        "#30 CM Rodrigo Bentancur", "#7 LW Heung Min Son", "#21 RW Dejan Kulusevski", 
                                            "#10 ST Harry Kane",
                                                "---Come On You Spurs---"};
    ///Call function iter with string array, length of the array and the function desired
    iter(teamLineup, len, print);
}