/*  =========================================================================
    zwebrap_selftest.c - run selftests

    Runs all selftests.

    -------------------------------------------------------------------------
    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#include "zwebrap_classes.h"

int
main (int argc, char *argv [])
{
    bool verbose;
    if (argc == 2 && streq (argv [1], "-v"))
        verbose = true;
    else
        verbose = false;

    printf ("Running zwebrap selftests...\n");

    zwr_request_test (verbose);
    zwr_response_test (verbose);
    zwr_connection_test (verbose);
    zwr_microhttpd_test (verbose);
    xrap_msg_test (verbose);
    xrap_traffic_test (verbose);
    zwr_server_test (verbose);
    zwr_client_test (verbose);
    zwr_dispatcher_test (verbose);

    printf ("Tests passed OK\n");
    return 0;
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
