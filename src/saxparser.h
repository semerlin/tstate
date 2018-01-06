/**
 * This file is part of the tstate Library.
 *
 * Copyright 2017, Huang Yang <elious.huang@gmail.com>. All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */
#ifndef SAXPARSER_H_
#define SAXPARSER_H_

#include "ttypes.h"

T_BEGIN_DECLS

typedef void (*StartDocument)(void *ctx);
typedef void (*EndDocument)(void *ctx);
typedef void (*StartElement)(void *ctx, const tchar *name, const tchar **atts);
typedef void (*EndElement)(void *ctx, const tchar *name);
typedef void (*Characters)(void *ctx, const tchar *ch, tint len);
typedef void (*Warning)(void *ctx, const tchar *msg);
typedef void (*Error)(void *ctx, const tchar *msg);
typedef void (*FatalError)(void *ctx, const tchar *msg);

typedef struct
{
    StartDocument start_document;
    EndDocument end_document;
    StartElement start_element;
    EndElement end_element;
    Characters characters;
    Warning warning;
    Error error;
    FatalError fatal_error;
}sax_handler;

void sax_init_default_handler(sax_handler *hdlr);

T_END_DECLS

#endif /* SAXPARSER_H_ */


