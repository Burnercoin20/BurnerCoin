/* Copyright (c) 2014, BurnerCoin 2.0 Developers */
/* See LICENSE for licensing information */

/**
 * \file burnercoin.h
 * \brief Headers for burnercoin.cpp
 **/

#ifndef TOR_BURNERCOIN_H
#define TOR_BURNERCOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* burnercoin_tor_data_directory(
    );

    char const* burnercoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

