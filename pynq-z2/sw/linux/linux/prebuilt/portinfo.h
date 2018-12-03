#ifndef _SDS_PORTINFO_H
#define _SDS_PORTINFO_H
/* File: C:/E_element/Demo/MPSoC/lenet5/lenet5/Release/_sds/p0/.cf_work/portinfo.h */
#ifdef __cplusplus
extern "C" {
#endif

struct _p0_swblk_CONVOLUTION_LAYER_1 {
  cf_port_send_t cmd_CONVOLUTION_LAYER_1;
  cf_port_send_t input_feature_offset;
  cf_port_send_t weights_offset;
  cf_port_send_t bias_offset;
  cf_port_send_t output_feature_offset;
  cf_port_send_t init;
};

struct _p0_swblk_CONVOLUTION_LAYER_2 {
  cf_port_send_t cmd_CONVOLUTION_LAYER_2;
  cf_port_send_t input_feature_offset;
  cf_port_send_t weights_offset;
  cf_port_send_t bias_offset;
  cf_port_send_t output_feature_offset;
  cf_port_send_t init;
};

struct _p0_swblk_CONVOLUTION_LAYER_3 {
  cf_port_send_t cmd_CONVOLUTION_LAYER_3;
  cf_port_send_t input_feature_offset;
  cf_port_send_t weights_offset;
  cf_port_send_t bias_offset;
  cf_port_send_t output_feature_offset;
  cf_port_send_t init;
};

extern struct _p0_swblk_CONVOLUTION_LAYER_1 _p0_swinst_CONVOLUTION_LAYER_1_1;
extern struct _p0_swblk_CONVOLUTION_LAYER_2 _p0_swinst_CONVOLUTION_LAYER_2_1;
extern struct _p0_swblk_CONVOLUTION_LAYER_3 _p0_swinst_CONVOLUTION_LAYER_3_1;
void _p0_cf_framework_open(int);
void _p0_cf_framework_close(int);

#ifdef __cplusplus
};
#endif
#ifdef __cplusplus
extern "C" {
#endif
void switch_to_next_partition(int);
void init_first_partition();
void close_last_partition();
#ifdef __cplusplus
};
#endif /* extern "C" */
#endif /* _SDS_PORTINFO_H_ */
