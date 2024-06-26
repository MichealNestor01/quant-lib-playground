/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
Copyright (C) 2016 Fabrice Lecuyer

This file is part of QuantLib, a free-software/open-source library
for financial quantitative analysts and developers - http://quantlib.org/

QuantLib is free software: you can redistribute it and/or modify it
under the terms of the QuantLib license.  You should have received a
copy of the license along with this program; if not, please email
<quantlib-dev@lists.sf.net>. The license is also available online at
<http://quantlib.org/license.shtml>.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

/*! \file bkbm.hpp
\brief %Bkbm index
*/

#ifndef quantlib_bkbm_hpp
#define quantlib_bkbm_hpp

#include <ql/indexes/iborindex.hpp>
#include <ql/time/calendars/newzealand.hpp>
#include <ql/time/daycounters/actual365fixed.hpp>
#include <ql/currencies/oceania.hpp>

namespace QuantLib {

    //! %Bkbm index
    /*! Bkbm rate fixed by NZFMA.

        See <http://www.nzfma.org/Site/data/default.aspx>.
    */
    class Bkbm : public IborIndex {
      public:
        Bkbm(const Period& tenor, Handle<YieldTermStructure> h = {})
        : IborIndex("Bkbm", tenor,
                    0, // settlement days
                    NZDCurrency(), NewZealand(),
                    ModifiedFollowing, true,
                    Actual365Fixed(), std::move(h)) {
            QL_REQUIRE(this->tenor().units() != Days,
                       "for daily tenors (" << this->tenor() <<
                       ") dedicated DailyTenor constructor must be used");
        }
    };

    //! 1-month %Bkbm index
    class Bkbm1M : public Bkbm {
      public:
        explicit Bkbm1M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(1, Months), std::move(h)) {}
    };

    //! 2-months %Bkbm index
    class Bkbm2M : public Bkbm {
      public:
        explicit Bkbm2M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(2, Months), std::move(h)) {}
    };

    //! 3-months %Bkbm index
    class Bkbm3M : public Bkbm {
      public:
        explicit Bkbm3M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(3, Months), std::move(h)) {}
    };

    //! 4-months %Bkbm index
    class Bkbm4M : public Bkbm {
      public:
        explicit Bkbm4M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(4, Months), std::move(h)) {}
    };

    //! 5-months %Bkbm index
    class Bkbm5M : public Bkbm {
      public:
        explicit Bkbm5M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(5, Months), std::move(h)) {}
    };

    //! 6-months %Bkbm index
    class Bkbm6M : public Bkbm {
      public:
        explicit Bkbm6M(Handle<YieldTermStructure> h = {})
        : Bkbm(Period(6, Months), std::move(h)) {}
    };

}

#endif
