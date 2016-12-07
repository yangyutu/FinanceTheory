#include "PayOffBridge.h"


PayOffBridge::PayOffBridge(const PayOffBridge& original) // copy constructor
{
    ThePayOffPtr = original.ThePayOffPtr->clone();
}

PayOffBridge::PayOffBridge(const PayOff& innerPayOff)
{
    ThePayOffPtr = innerPayOff.clone();
}

 PayOffBridge::~PayOffBridge()
{
    delete ThePayOffPtr; // release memory
}

PayOffBridge& PayOffBridge::operator=(const PayOffBridge& original)
{
    if (this != &original)// avoid self-assignment
    {
        delete ThePayOffPtr;
        ThePayOffPtr = original.ThePayOffPtr->clone();
    }

    return *this;
}


