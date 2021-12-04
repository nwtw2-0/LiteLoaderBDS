// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERSTONECUTTER
#include "Extra/CraftHandlerStonecutterAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERSTONECUTTER
class CraftHandlerStonecutter : public CraftHandlerBase {
#include "Extra/CraftHandlerStonecutterAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerStonecutter();
    /*2*/ virtual int /*enum ItemStackNetResult*/ preHandleAction(int /*enum ItemStackRequestActionType*/);
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;
};