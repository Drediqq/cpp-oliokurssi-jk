#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
#include <string>

class ItalianChef : public Chef {
public:
  explicit ItalianChef(const std::string &name);
  ~ItalianChef() override;
  std::string getName() const;
  void makePasta() const;
};

#endif // ITALIANCHEF_H