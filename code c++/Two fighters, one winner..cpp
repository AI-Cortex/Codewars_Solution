// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Two fighters, one winner.
// link : https://www.codewars.com/kata/577bd8d4ae2807c64b00045b

std::string declareWinner(Fighter *fighter1, Fighter *fighter2, std::string firstAttacker)
{
    if (fighter1->getName() != firstAttacker)
        std::swap(fighter1, fighter2);
    
    int f1 = fighter1->getHealth() / fighter2->getDamagePerAttack() + (fighter1->getHealth() % fighter2->getDamagePerAttack() > 0);
    int f2 = fighter2->getHealth() / fighter1->getDamagePerAttack() + (fighter2->getHealth() % fighter1->getDamagePerAttack() > 0);
    return f1 >= f2 ? fighter1->getName() : fighter2->getName();
}