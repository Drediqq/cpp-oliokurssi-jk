#include <iostream>
#include <string>

class Chef {
public:
	explicit Chef(const std::string& name) : name(name) {
		std::cout << "Chef " << this->name << " constructed" << std::endl;
	}

	virtual ~Chef() {
		std::cout << "Chef " << name << " destructed" << std::endl;
	}

	void makeSalad() const {
		std::cout << "Chef " << name << " makes salad" << std::endl;
	}

	void makeSoup() const {
		std::cout << "Chef " << name << " makes soup" << std::endl;
	}

protected:
	std::string name;
};

class ItalianChef : public Chef {
public:
	explicit ItalianChef(const std::string& name) : Chef(name) {
		std::cout << "ItalianChef " << this->name << " constructed" << std::endl;
	}

	~ItalianChef() override {
		std::cout << "ItalianChef " << name << " destructed" << std::endl;
	}

	std::string getName() const {
		std::cout << "ItalianChef::getName() called" << std::endl;
		return name;
	}

	void makePasta() const {
		std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
	}
};

int main() {
	Chef chef("Gordon Ramsay");
	chef.makeSalad();
	chef.makeSoup();

	ItalianChef italianChef("Anthony Bourdain");
	italianChef.makeSalad();
	italianChef.makeSoup();
	italianChef.makePasta();
	std::cout << italianChef.getName() << std::endl;

	return 0;
}
