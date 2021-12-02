// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SERVERCONTENTKEYPROVIDER
#include "Extra/ServerContentKeyProviderAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERCONTENTKEYPROVIDER
class ServerContentKeyProvider {
#include "Extra/ServerContentKeyProviderAPI.hpp"
public:
    /*0*/ virtual ~ServerContentKeyProvider();
    /*1*/ virtual std::string getContentKey(class ContentIdentity const&) const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual bool canAccess(class ContentIdentity const&) const;
};