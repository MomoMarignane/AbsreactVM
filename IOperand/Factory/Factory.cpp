/*
** EPITECH PROJECT, 2023
** SYN_abstractVM_$2023
** File description:
** Factory.cpp
*/

#include "Factory.hpp"

Operands::Factory::Factory()
{
    std::cout << "Factory ok !" << std::endl;
}

Operands::IOperand* Operands::Factory::createOperand(eOperandType type, const std::string &value)
{
    if (type == eOperandType::INT8)
        return createInt8(value);
    if (type == eOperandType::INT16)
        return createInt16(value);
    if (type == eOperandType::INT32)
        return createInt32(value);
    if (type == eOperandType::FLOAT)
        return createFloat(value);
    if (type == eOperandType::DOUBLE)
        return createDouble(value);
    return nullptr;
}

Operands::IOperand* Operands::Factory::createInt8(const std::string& value)
{
    Operands::IOperand *newOperand = new Operands::Int8(value);
    return newOperand;
}

Operands::IOperand* Operands::Factory::createInt16(const std::string& value)
{
    Operands::IOperand *newOperand = new Operands::Int16(value);
    return newOperand;
}

Operands::IOperand* Operands::Factory::createInt32(const std::string& value)
{
    Operands::IOperand *newOperand = new Operands::Int32(value);
    return newOperand;
}

Operands::IOperand* Operands::Factory::createFloat(const std::string& value)
{
    Operands::IOperand *newOperand = new Operands::FLOAT(value);
    return newOperand;
}

Operands::IOperand* Operands::Factory::createDouble(const std::string& value)
{
    Operands::IOperand *newOperand = new Operands::DOUBLE(value);
    return newOperand;
}