#include "mutantStack.hpp"

int main()
{
        mutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "First cout will be top of stack(17): " << mstack.top() << std::endl;
        std::cout << "popping value off stack" << std::endl;
        mstack.pop();
        std::cout << "second cout will be the size: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        mutantStack<int>::iterator it = mstack.begin();
        mutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    return 0;
}