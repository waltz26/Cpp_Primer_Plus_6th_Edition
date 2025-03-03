#ifndef PLORG_H_
#define PLORG_H_

class Plorg{
private:
    static const int LEN=20;
    char name[LEN];
    int ci;
public:
    Plorg(const char *n="Plorga");
    void setci(int c);
    void show() const;
};

#endif
