
# enable/disable cmake debug messages related to this pile
set (TIBACU_DEBUG_MSG ON)

# make sure support code is present; no harm
# in including it twice; the user, however, should have used
# pileInclude() from pile_support.cmake module.
include(pile_support)

# initialize this module
macro    (tibacuInit
          ref_cnt_use_mode)

    # default name
    if (NOT TIBACU_INIT_NAME)
        set(TIBACU_INIT_NAME "TiBaCu")
    endif ()

    # compose the list of headers and sources
    set(TIBACU_HEADERS
        "tibacu.h")
    set(TIBACU_SOURCES
        "tibacu.cc")

    pileSetSources(
        "${TIBACU_INIT_NAME}"
        "${TIBACU_HEADERS}"
        "${TIBACU_SOURCES}")

    pileSetCommon(
        "${TIBACU_INIT_NAME}"
        "0;0;1;d"
        "ON"
        "${ref_cnt_use_mode}"
        ""
        "category1"
        "tag1;tag2")

endmacro ()
