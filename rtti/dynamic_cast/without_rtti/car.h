#pragma once

class Car {
public:
  virtual ~Car() = default;
  virtual void doSomeFun() = 0;
};
