if (NOT TIBACU_BUILD_MODE)
    set (TIBACU_BUILD_MODE STATIC)
endif ()

include(pile_support)
pileInclude (TiBaCu)
tibacuInit(${TIBACU_BUILD_MODE})
