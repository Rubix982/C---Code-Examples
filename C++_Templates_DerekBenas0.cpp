#include  <iostream>
#include <vector>

class Pizza {
    public:
        virtual void MakePizza() = 0;
};

class NYStyleCrust {
    public:
        std::string AddIngredients(void) {
            return "Crust so thin you can see through it\n\n";
        }
};

class DeepDishCrust {
    public:
        std::string AddIngredients() {
            return "Super Chicago Deep Dish \n\n";
        }
};

template<typename T>
class LotsOfMeet : public T {
    public:
        std::string AddIngredient(void) {
            return "Vegan Cheese, Veggies, " + T::AddIngredient();
        }
};

template<typename T>
class MeatNYStyle : public T, public Pizza {
    public:
        void MakePizza(void) {
            std::cout << "Meat NY Style Pizza: " <<
                T::AddIngredient();
        }
};

template <typename T>
class VeganDeepDish : public T, public Pizza
{
  public:
    void MakePizza(void)
    {
        std::cout << "Meat NY Style Pizza: " << T::AddIngredient();
    }
};

int main(void) {
    std::vector<std::unique_ptr<Pizza>> pizzaOrders;
    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeet<Pizza>>);
    for ( auto & pizza : pizzaOrders ) {
        pizza->MakePizza();
    }

    return 0;
}