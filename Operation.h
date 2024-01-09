#ifndef OPERATION_H
#define OPERATION_H

class Operation
{
public:
    void getOperation();
    void calculate(double a, double b);

private:
    enum class Type{
        plus,
        minus,
        multiply,
        division
    };

    Type charToOperation(char op);

    Type mOp = Type::plus;
};

#endif// OPERATION_H
