
const AVOutputFormat ff_ffout_muxer = {
  .name            = "ffout",
  .long_name       = "MOQ/1",
  .extensions      = "ffout",
  .priv_data_size  = sizeof(MoqContext),
  .audio_codec     = AV_CODEC_ID_AAC,
  .video_codec     = AV_CODEC_ID_H264,
  .init            = ffout_init,
  .deinit          = ffout_deinit,
  .write_packet    = ffout_write_packet,
  .write_header    = ffout_write_header,
  .write_trailer   = ffout_write_trailer,
  .check_bitstream = ffout_check_bitstream,
  .codec_tag       = (const AVCodecTag* const []) {
    ffout_video_codec_ids, ffout_audio_codec_ids, 0
  },
};
