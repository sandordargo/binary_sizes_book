#pragma once

#include "observer.h"
#include "person.h"

class AddressObserver : public Observer<Person,Person::StateChange>
{
 public:
   void update( Person const& person, Person::StateChange property ) override;
};
