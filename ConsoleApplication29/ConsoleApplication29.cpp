#include <iostream>

// Абстрактний клас з шаблонним методом
class AbstractClass {
public:
    // Шаблонний метод
    void templateMethod() {
        step1();
        step2();
        step3();
    }

    virtual ~AbstractClass() = default;

protected:
    // Абстрактний метод, який повинен бути реалізований в підкласах
    virtual void step1() = 0;

    // Метод з реалізацією за замовчуванням
    void step2() {
        std::cout << "AbstractClass: Default step2 implementation\n";
    }

    // Абстрактний метод, який повинен бути реалізований в підкласах
    virtual void step3() = 0;
};

// Конкретний клас, що розширює AbstractClass
class ConcreteClass : public AbstractClass {
protected:
    void step1() override {
        std::cout << "ConcreteClass: Implementing step1\n";
    }

    // Перевизначення step2 необов'язкове, так як він вже має реалізацію за замовчуванням

    void step3() override {
        std::cout << "ConcreteClass: Implementing step3\n";
    }
};

int main() {
    // Використання паттерна "Шаблонний метод"
    ConcreteClass concreteObject;
    concreteObject.templateMethod();

    return 0;
}
