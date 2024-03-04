#include <iostream>
#include <string>

class Headdress {
private:
    float price; // Ціна головного убору
    std::string color; // Колір
    std::string size; // Розмір
    std::string material; // Матеріал
    std::string type; // Тип (наприклад, шапка, кепка)
    std::string season; // Сезон
    int count; // Кількість доступних одиниць
    bool isSold; // Прапорець, що вказує на те, продано товар чи ні

public:
    // Конструктор з параметрами для ініціалізації об'єкта
    Headdress(float p, std::string clr, std::string s, std::string m, std::string t, std::string se, int cnt, bool isSold_ = false)
        : price(p), color(std::move(clr)), size(std::move(s)), material(std::move(m)), type(std::move(t)), season(std::move(se)), count(cnt), isSold(isSold_) {

    }

    // Конструктор копіювання
    Headdress(const Headdress& other)
        : price(other.price), color(other.color), size(other.size), material(other.material),
        type(other.type), season(other.season), count(other.count), isSold(other.isSold) {

    }

    // Деструктор за замовчуванням, оскільки дана программа не містить динамічних даних
    ~Headdress() = default;

    // Сеттери для зміни атрибутів об'єкта
    void setPrice(float newPrice) {
        price = newPrice; // Встановити нову ціну
    }

    void setColor(const std::string& newColor) {
        color = newColor; // Встановити новий колір
    }

    void setSize(const std::string& newSize) {
        size = newSize; // Встановити новий розмір
    }

    void setMaterial(const std::string& newMaterial) {
        material = newMaterial; // Встановити новий матеріал
    }

    void setType(const std::string& newType) {
        type = newType; // Встановити новий тип
    }

    void setSeason(const std::string& newSeason) {
        season = newSeason; // Встановити новий сезон
    }

    void setIsSold(bool flag) {
        isSold = flag; // Встановити прапорець продажу
    }

    // Зменшити кількість на вказане значення
    bool sell(int sellCount) {
        if (sellCount <= count) {
            count -= sellCount;
            if (count == 0) {
                this->setIsSold(true);
            }
            return true;
        }
        else {
            //std::cout << "Помилка: Неможливо продати більше, ніж на складі.\n";
            return false;
        }
    }

    // Збільшити кількість на вказане значення UPD: Повертається булеве значення, у разі помилки викликається месседж
    bool add(int addCount) {
        if (addCount > 0) {
            count += addCount;
            this->setIsSold(false);
            return true;
        }
        else {
            //std::cout << "Помилка: Кількість для додавання має бути додатньою.\n";
            return false;
        }
    }

    // Геттери для отримання інформації про об'єкт
    float getPrice() const {
        return price;
    }

    std::string getColor() const {
        return color;
    }

    std::string getSize() const {
        return size;
    }

    std::string getMaterial() const {
        return material;
    }

    std::string getType() const {
        return type;
    }

    std::string getSeason() const {
        return season;
    }

    int getCount() const {
        return count;
    }

    bool getIsSold() const {
        return isSold;
    }

    // Вивід інформації про головний убір UPD: Повернення інформації для виводу.
    std::string getInfo() const {
        return  "Ціна: " + std::to_string(price)
            + "\nКолір: " + color
            + "\nРозмір: " + size
            + "\nМатеріал: " + material
            + "\nТип: " + type
            + "\nСезон: " + season
            + "\nКількість: " + std::to_string(count)
            + "\nПродано: " + (isSold ? "так" : "ні") + "\n";
    }

};