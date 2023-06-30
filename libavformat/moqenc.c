
const AVOutputFormat ff_moq_muxer = {
  .name            = "moq",
  .long_name       = "MOQ/1",
  .extensions      = "moq",
  .priv_data_size  = sizeof(MoqContext),
  .audio_codec     = AV_CODEC_ID_AAC,
  .video_codec     = AV_CODEC_ID_H264,
  .init            = moq_init,
  .deinit          = moq_deinit,
  .write_packet    = moq_write_packet,
  .write_header    = moq_write_header,
  .write_trailer   = moq_write_trailer,
  .check_bitstream = moq_check_bitstream,
  .codec_tag       = (const AVCodecTag* const []) {
    moq_video_codec_ids, moq_audio_codec_ids, 0
  },
};
