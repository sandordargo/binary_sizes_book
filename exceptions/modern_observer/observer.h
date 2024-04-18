#pragma once

#include <functional>

template< typename Subject, typename StateTag >
class Observer
{
 public:
   // using OnUpdate = std::function<void(Subject const&,StateTag)>;
   // typedef void (*OnUpdate)(Subject const&,StateTag);
   using OnUpdate = void (*)(Subject const&,StateTag);
   // No virtual destructor necessary

   explicit Observer( OnUpdate onUpdate )
      : onUpdate_{ std::move(onUpdate) }
   {
      // Possibly respond on an invalid/empty std::function instance
   }

   // Non-virtual update function
   void update( Subject const& subject, StateTag property )
   {
      onUpdate_( subject, property );
   }

 private:
   OnUpdate onUpdate_;
};