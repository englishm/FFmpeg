const URLProtocol ff_libmoq_protocol = {
    .name = "moq",
    .url_open  = moq_open,
    .url_read  = moq_read,
    .url_write = moq_write,
    .url_close = moq_close,
    .priv_data_size = sizeof(MoqTransportContext),
};
