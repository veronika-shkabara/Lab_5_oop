#include "Beauty.h"

// ===== BeautyProduct =====

BeautyProduct::BeautyProduct()
{
    cout << "BeautyProduct constructor\n";
}

BeautyProduct::~BeautyProduct()
{
    cout << "BeautyProduct destructor\n";
}

int BeautyProduct::SetBrand(string b)
{
    brand = b;
    return 1;
}

int BeautyProduct::SetPrice(double p)
{
    price = p;
    return 1;
}

int BeautyProduct::SetEffect(string e)
{
    effect = e;
    return 1;
}

int BeautyProduct::Show()
{
    cout << "Beauty product\n";
    return 1;
}

int BeautyProduct::CreateProduct()
{
    cout << "Brand: " << brand
         << ", Price: " << price
         << ", Effect: " << effect << endl;
    return 1;
}

// ===== Lipstick =====

Lipstick::Lipstick()
{
    cout << "Lipstick constructor\n";

    SetBrand("Maybelline");
    SetPrice(300);
    SetEffect("moisturizing");
    CreateProduct();
}

Lipstick::~Lipstick()
{
    cout << "Lipstick destructor\n";
}

int Lipstick::Show()
{
    cout << "Lipstick\n";
    return 1;
}

// ===== Perfume =====

Perfume::Perfume()
{
    cout << "Perfume constructor\n";

    SetBrand("Chanel");
    SetPrice(2000);
    SetEffect("nice smell");
    CreateProduct();
}

Perfume::~Perfume()
{
    cout << "Perfume destructor\n";
}

int Perfume::Show()
{
    cout << "Perfume\n";
    return 1;
}

// ===== LuxuryProduct =====

LuxuryProduct::LuxuryProduct()
{
    cout << "LuxuryProduct constructor\n";
}

LuxuryProduct::~LuxuryProduct()
{
    cout << "LuxuryProduct destructor\n";
}

// ❗ ВИРІШЕННЯ ПРОБЛЕМИ РОМБА (Show)
int LuxuryProduct::Show()
{
    cout << "Luxury product:\n";

    Lipstick::Show();
    Perfume::Show();

    return 1;
}