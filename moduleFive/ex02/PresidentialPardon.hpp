#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

#include "AForm.hpp"

class   presidentialPardon: public AForm {
    private:
        std::string _target;
    public:
    ///Constructors
        presidentialPardon(void);
        presidentialPardon(std::string _target);
        presidentialPardon(presidentialPardon const &oldShrub);
    ///Deconstructor
        ~presidentialPardon(void);
    ///Operator Overloads
        presidentialPardon &operator=(presidentialPardon const &oldShrub);
    ///Presidential Getters
        std::string    getTarget(void) const;
    ///Presidential Functions
        void formFunctionality(void) const;
};
    ///Ostream Overload
        std::ostream &operator<<(std::ostream &out, presidentialPardon const &shrub);

#endif