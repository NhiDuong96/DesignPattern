#include <stdio.h>
#include <conio.h>

class Window{
public:
  Window();
  virtual void build();
}

class PMWindow: Window{
public:
  PWWindow()
  virtual void build() const
    {printf("PWWindow")}
}

class MotifWindow: Window{
public:
  MotifWindow()
  virtual void build() const
    {printf("MotifWindow")}
}
