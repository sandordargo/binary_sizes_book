#pragma once


template< typename Subject, typename StateTag >
class Observer
{
 public:
   virtual ~Observer() = default;

   virtual void update( Subject const& subject, StateTag property ) = 0;
};