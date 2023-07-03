const URLProtocol ff_libffout_protocol = {
    .name = "ffout",
    .url_open  = ffout_open,
    .url_read  = ffout_read,
    .url_write = ffout_write,
    .url_close = ffout_close,
    .priv_data_size = sizeof(MoqTransportContext),
};
