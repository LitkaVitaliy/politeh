#include <iostream>
#include <string>

class Headdress {
private:
    float price; // ֳ�� ��������� �����
    std::string color; // ����
    std::string size; // �����
    std::string material; // �������
    std::string type; // ��� (���������, �����, �����)
    std::string season; // �����
    int count; // ʳ������ ��������� �������
    bool isSold; // ���������, �� ����� �� ��, ������� ����� �� �

public:
    // ����������� � ����������� ��� ����������� ��'����
    Headdress(float p, std::string clr, std::string s, std::string m, std::string t, std::string se, int cnt, bool isSold_ = false)
        : price(p), color(std::move(clr)), size(std::move(s)), material(std::move(m)), type(std::move(t)), season(std::move(se)), count(cnt), isSold(isSold_) {

    }

    // ����������� ���������
    Headdress(const Headdress& other)
        : price(other.price), color(other.color), size(other.size), material(other.material),
        type(other.type), season(other.season), count(other.count), isSold(other.isSold) {

    }

    // ���������� �� �������������, ������� ���� ��������� �� ������ ��������� �����
    ~Headdress() = default;

    // ������� ��� ���� �������� ��'����
    void setPrice(float newPrice) {
        price = newPrice; // ���������� ���� ����
    }

    void setColor(const std::string& newColor) {
        color = newColor; // ���������� ����� ����
    }

    void setSize(const std::string& newSize) {
        size = newSize; // ���������� ����� �����
    }

    void setMaterial(const std::string& newMaterial) {
        material = newMaterial; // ���������� ����� �������
    }

    void setType(const std::string& newType) {
        type = newType; // ���������� ����� ���
    }

    void setSeason(const std::string& newSeason) {
        season = newSeason; // ���������� ����� �����
    }

    void setIsSold(bool flag) {
        isSold = flag; // ���������� ��������� �������
    }

    // �������� ������� �� ������� ��������
    bool sell(int sellCount) {
        if (sellCount <= count) {
            count -= sellCount;
            if (count == 0) {
                this->setIsSold(true);
            }
            return true;
        }
        else {
            //std::cout << "�������: ��������� ������� �����, �� �� �����.\n";
            return false;
        }
    }

    // �������� ������� �� ������� �������� UPD: ����������� ������ ��������, � ��� ������� ����������� �������
    bool add(int addCount) {
        if (addCount > 0) {
            count += addCount;
            this->setIsSold(false);
            return true;
        }
        else {
            //std::cout << "�������: ʳ������ ��� ��������� �� ���� ���������.\n";
            return false;
        }
    }

    // ������� ��� ��������� ���������� ��� ��'���
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

    // ���� ���������� ��� �������� ��� UPD: ���������� ���������� ��� ������.
    std::string getInfo() const {
        return  "ֳ��: " + std::to_string(price)
            + "\n����: " + color
            + "\n�����: " + size
            + "\n�������: " + material
            + "\n���: " + type
            + "\n�����: " + season
            + "\nʳ������: " + std::to_string(count)
            + "\n�������: " + (isSold ? "���" : "�") + "\n";
    }

};