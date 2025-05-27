#ifndef IREPORT_HPP
#define IREPORT_HPP

class IReport {
public:
    virtual void generate() const = 0;
    virtual ~IReport() = default;
};

#endif
