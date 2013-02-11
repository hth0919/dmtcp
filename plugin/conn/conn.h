/****************************************************************************
 *   Copyright (C) 2006-2013 by Jason Ansel, Kapil Arya, and Gene Cooperman *
 *   jansel@csail.mit.edu, kapil@ccs.neu.edu, gene@ccs.neu.edu              *
 *                                                                          *
 *   This file is part of the dmtcp/src module of DMTCP (DMTCP:dmtcp/src).  *
 *                                                                          *
 *  DMTCP:dmtcp/src is free software: you can redistribute it and/or        *
 *  modify it under the terms of the GNU Lesser General Public License as   *
 *  published by the Free Software Foundation, either version 3 of the      *
 *  License, or (at your option) any later version.                         *
 *                                                                          *
 *  DMTCP:dmtcp/src is distributed in the hope that it will be useful,      *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *  GNU Lesser General Public License for more details.                     *
 *                                                                          *
 *  You should have received a copy of the GNU Lesser General Public        *
 *  License along with DMTCP:dmtcp/src.  If not, see                        *
 *  <http://www.gnu.org/licenses/>.                                         *
 ****************************************************************************/

#pragma once
#ifndef CONNECTION_PLUGIN
#define CONNECTION_PLUGIN

#include "dmtcpplugin.h"

#define HANDSHAKE_SIGNATURE_MSG "DMTCP_SOCK_HANDSHAKE_V0\n"
#define CONNECTION_ID_START 99000

#define DRAINER_CHECK_FREQ 0.1
#define DRAINER_WARNING_FREQ 10

//at least one of these must be enabled:
#define HANDSHAKE_ON_CONNECT    0
#define HANDSHAKE_ON_CHECKPOINT 1

#define _real_socket NEXT_FNC(socket)
#define _real_bind NEXT_FNC(bind)
#define _real_close NEXT_FNC(close)

#define _real_fcntl NEXT_FNC(fcntl)
#define _real_select NEXT_FNC(select)
#define _real_pthread_mutex_lock NEXT_FNC(pthread_mutex_lock)
#define _real_pthread_mutex_unlock NEXT_FNC(pthread_mutex_unlock)

#endif
