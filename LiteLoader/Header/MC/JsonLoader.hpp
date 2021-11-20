// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/JsonLoaderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class JsonLoader {
#include "Extra/JsonLoaderAPI.hpp"
public:
    virtual ~JsonLoader();
    virtual bool isBool();
    virtual bool isInt();
    virtual bool isString();
    virtual void unk_vfn_4();
    virtual bool isArray();
    virtual bool doSerialize(std::string&);
    virtual bool doSerialize(double&);
    virtual bool doSerialize(float&);
    virtual bool doSerialize(unsigned __int64&);
    virtual bool doSerialize(__int64&);
    virtual bool doSerialize(unsigned int&);
    virtual bool doSerialize(int&);
    virtual bool doSerialize(unsigned short&);
    virtual bool doSerialize(short&);
    virtual bool doSerialize(unsigned char&);
    virtual bool doSerialize(signed char&);
    virtual bool doSerialize(bool&);
    virtual bool doBeginMember(unsigned __int64, std::string&);
    virtual bool doBeginMember(char const*, bool);
    virtual void unk_vfn_20();
    virtual bool doBeginArray(unsigned __int64&);
    virtual bool doBeginArrayItem(unsigned __int64);
    virtual void unk_vfn_23();
    virtual void unk_vfn_24();
    virtual bool doBeginObject(unsigned __int64&);
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();

private:
    MCAPI void _loadJson(std::string const&);
    MCAPI void _useJson(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&);
    MCAPI void _useJson(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&);
};