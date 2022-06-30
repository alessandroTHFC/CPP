#ifndef SHRUBS_HPP
# define SHRUBS_HPP

#include "AForm.hpp"

class   shrubberyCreation: public AForm {
    private:
        std::string _target;
    public:
    ///Constructors
        shrubberyCreation(void);
        shrubberyCreation(std::string _target);
        shrubberyCreation(shrubberyCreation const &oldShrub);
    ///Deconstructor
        ~shrubberyCreation(void);
    ///Operator Overloads
        shrubberyCreation &operator=(shrubberyCreation const &oldShrub);
    ///Shrub Getters
        std::string    getTarget(void);
    ///Shrub Functions
        void execute(void) const;
};
    ///Ostream Overload
        std::ostream &operator<<(std::ostream &out, shrubberyCreation const &shrub);

#endif