//
// Copyright (C) 2006 Nicolas Rougier
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.

#ifndef __DANA_PHYSICS_UNIT_H__
#define __DANA_PHYSICS_UNIT_H__

#include <boost/python.hpp>
#include "core/unit.h"

using namespace boost::python;

namespace dana { namespace physics {

    // Unit class
    class Unit : public core::Unit {
    
        public:
            bool source;

        public:
            // Constructor
            Unit(void);
            
            // Desctructor
            virtual ~Unit(void);
            
            // Evaluate new potential and return difference
            virtual float evaluate (void);
            
        public:
            // Boost python extension
            static void boost (void);
    };

}} // namespace dana::physics

#endif