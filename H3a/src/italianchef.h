#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"


class ItalianChef : public Chef {
public:
  explicit ItalianChef(const std::string &name); // constructor
  ~ItalianChef() override;                       // destructor
  std::string getName() const;
  void makePasta() const;
};

#endif // ITALIANCHEF_H