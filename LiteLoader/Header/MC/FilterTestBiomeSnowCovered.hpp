// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/FilterTestBiomeSnowCoveredAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FilterTestBiomeSnowCovered : public FilterTest {
#include "Extra/FilterTestBiomeSnowCoveredAPI.hpp"
public:
    virtual ~FilterTestBiomeSnowCovered();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};