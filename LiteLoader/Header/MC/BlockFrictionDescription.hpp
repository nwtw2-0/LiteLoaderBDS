// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKFRICTIONDESCRIPTION
#include "Extra/BlockFrictionDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKFRICTIONDESCRIPTION
class BlockFrictionDescription {
#include "Extra/BlockFrictionDescriptionAPI.hpp"
public:
    /*0*/ virtual ~BlockFrictionDescription();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&) const;
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static std::string const NameID;
};