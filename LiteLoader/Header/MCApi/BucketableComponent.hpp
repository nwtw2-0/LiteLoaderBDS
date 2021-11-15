// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BucketableComponent {

public:
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI void initFromDefinition(class Actor&);

    MCAPI static void implInteraction(class Actor&, class Player&);

private:
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;
};