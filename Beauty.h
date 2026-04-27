#pragma once
#include <iostream>
using namespace std;

// ===== БАЗОВИЙ КЛАС =====
class BeautyProduct
{
protected:
    string brand;
    double price;
    string effect;

public:
    BeautyProduct();
    virtual ~BeautyProduct();

    int SetBrand(string b);
    int SetPrice(double p);
    int SetEffect(string e);

    virtual int Show();

protected:
    int CreateProduct();
};

// ===== 1 НАЩАДОК =====
class Lipstick : virtual public BeautyProduct
{
public:
    Lipstick();
    ~Lipstick();

    int Show() override;
};

// ===== 2 НАЩАДОК =====
class Perfume : virtual public BeautyProduct
{
public:
    Perfume();
    ~Perfume();

    int Show() override;
};

// ===== РОМБ (3 КЛАС) =====
class LuxuryProduct : public Lipstick, public Perfume
{
public:
    LuxuryProduct();
    ~LuxuryProduct();

    int Show() override; // ВАЖЛИВО!
};