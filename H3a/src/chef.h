#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
public:
  explicit Chef(const std::string &name);
  virtual ~Chef();
  void makeSalad() const;
  void makeSoup() const;

protected:
  std::string name;

};

#endif // CHEF_H