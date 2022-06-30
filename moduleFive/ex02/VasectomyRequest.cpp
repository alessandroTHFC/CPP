#ifndef VASECTOMY_HPP
# define VASECTOMY_HPP

#include "AForm.hpp"

class   vasectomyRequest: public AForm {
    private:
        std::string _target;
    public:
    ///Constructors
        vasectomyRequest(void);
        vasectomyRequest(std::string _target);
        vasectomyRequest(vasectomyRequest const &oldShrub);
    ///Deconstructor
        ~vasectomyRequest(void);
    ///Operator Overloads
        vasectomyRequest &operator=(vasectomyRequest const &oldShrub);
    ///Shrub Getters
        std::string    getTarget(void);
    ///Shrub Functions
        void execute(void) const;
};
    ///Ostream Overload
        std::ostream &operator<<(std::ostream &out, vasectomyRequest const &shrub);

#endif