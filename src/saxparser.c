#include "saxparser.h"
#include "tassert.h"


static void sax_start_document(void *ctx)
{
}

static void sax_end_document(void *ctx)
{
}

static void sax_start_element(void *ctx, const tchar *name, const tchar **atts)
{
}

static void sax_end_element(void *ctx, const tchar *name)
{
}

static void sax_characters(void *ctx, const tchar *ch, tint len)
{
}

static void sax_warning(void *ctx, const tchar *msg)
{
}

static void sax_error(void *ctx, const tchar *msg)
{
}

static void sax_fatal_error(void *ctx, const tchar *msg)
{
}



void sax_init_default_handler(sax_handler *hdlr)
{
    T_ASSERT(NULL != hdlr);
    hdlr->start_document = sax_start_document;
    hdlr->end_document = sax_end_document;
    hdlr->start_element = sax_start_element;
    hdlr->end_element = sax_end_element;
    hdlr->characters = sax_characters;
    hdlr->warning = sax_warning;
    hdlr->error = sax_error;
    hdlr->fatal_errpr = sax_fatal_error;
}
