#include "libavformat/url.h"
#include "ffout.h"
#include <stdio.h>

static int ffout_open1(URLContext *url_ctx, const char *url, int flags){
    printf("hi from ffout_open1\n");
    return 0;
}

const URLProtocol ff_libffout_protocol = {
    .name = "ffout",
    .url_open  = ffout_open,
//    .url_read  = ffout_read,
    .url_write = ffout_write,
    .url_close = ffout_close,
    //.priv_data_size = sizeof(MoqTransportContext),
    .priv_data_size = 20,
};
