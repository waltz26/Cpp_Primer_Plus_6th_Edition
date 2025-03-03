#ifndef GOLF_H_
#define GOLF_H_

class Golf{
private:
    static const int LEN=40;
    char fullname[LEN];
    int handicap;
public:
    Golf(const char *name="",int hc=0);
    void setgolf();
    void sethandicap(int hc);
    void showgolf() const;
};

#endif
