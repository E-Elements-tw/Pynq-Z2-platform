/* File: C:/E_element/Demo/MPSoC/lenet5/lenet5/Release/_sds/p0/.cf_work/portinfo.c */
#include "cf_lib.h"
#include "cf_request.h"
#include "sds_lib.h"
#include "sds_trace.h"
#include "portinfo.h"
#include "stdio.h"  // for printf
#include "xlnk_core_cf.h"
#include "accel_info.h"
#include "axi_lite_dm.h"
#include "sysport_info.h"
#include "zero_copy_dm.h"

sysport_info_t _sds_sysport_p0_processing_system7_0_S_AXI_ACP = {
  .name = "processing_system7_0_S_AXI_ACP",
  .id = 1,
  .address_space = 0,
  .cmd_type = sysport_commands_type_no_action,
};

sysport_info_t _sds_sysport_p0_processing_system7_0_S_AXI_HP0 = {
  .name = "processing_system7_0_S_AXI_HP0",
  .id = 2,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_processing_system7_0_S_AXI_HP1 = {
  .name = "processing_system7_0_S_AXI_HP1",
  .id = 3,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_processing_system7_0_S_AXI_HP2 = {
  .name = "processing_system7_0_S_AXI_HP2",
  .id = 4,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysport_p0_processing_system7_0_S_AXI_HP3 = {
  .name = "processing_system7_0_S_AXI_HP3",
  .id = 5,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

accel_info_t _sds__p0_CONVOLUTION_LAYER_1_1 = {
  .device_id = 0,
  .phys_base_addr = 0x43c00000,
  .addr_range = 0x10000,
  .func_name = "CONVOLUTION_LAYER_1_1",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_CONVOLUTION_LAYER_2_1 = {
  .device_id = 1,
  .phys_base_addr = 0x43c10000,
  .addr_range = 0x10000,
  .func_name = "CONVOLUTION_LAYER_2_1",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

accel_info_t _sds__p0_CONVOLUTION_LAYER_3_1 = {
  .device_id = 2,
  .phys_base_addr = 0x43c20000,
  .addr_range = 0x10000,
  .func_name = "CONVOLUTION_LAYER_3_1",
  .ip_type = "axis_acc_adapter",
  .irq = 0,
};

int _p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_input_feature_offset_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = 0xc,
  .status_reg_offset = 0x40c,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_HP2,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_weights_offset_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = 0x10,
  .status_reg_offset = 0x410,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_HP1,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_bias_offset_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = 0x14,
  .status_reg_offset = 0x414,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_HP0,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_output_feature_offset_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = 0x18,
  .status_reg_offset = 0x418,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_HP3,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

int _p0_swinst_CONVOLUTION_LAYER_1_1_init_sg_list[] = {0x1c};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_1_1_init_info = {
  .phys_base_addr = 0x43c00000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_1_1_init_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x41c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_1_1,
};

int _p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_input_feature_offset_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = 0xc,
  .status_reg_offset = 0x40c,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_weights_offset_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = 0x10,
  .status_reg_offset = 0x410,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_bias_offset_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = 0x14,
  .status_reg_offset = 0x414,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_output_feature_offset_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = 0x18,
  .status_reg_offset = 0x418,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

int _p0_swinst_CONVOLUTION_LAYER_2_1_init_sg_list[] = {0x1c};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_2_1_init_info = {
  .phys_base_addr = 0x43c10000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_2_1_init_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x41c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_2_1,
};

int _p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_sg_list[] = {0x8};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_input_feature_offset_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = 0xc,
  .status_reg_offset = 0x40c,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_weights_offset_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = 0x10,
  .status_reg_offset = 0x410,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_bias_offset_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = 0x14,
  .status_reg_offset = 0x414,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

zero_copy_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_output_feature_offset_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = 0x18,
  .status_reg_offset = 0x418,
  .config = XLNK_ZERO_COPY_KEYHOLE |
    XLNK_ZERO_COPY_STAT_REG_WRITE(XLNK_ZERO_COPY_STAT_REG_QUEUING),
  .data_sysport = &_sds_sysport_p0_processing_system7_0_S_AXI_ACP,
  .dir = XLNK_BI_DIRECTIONAL,
  .cache = 0,
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

int _p0_swinst_CONVOLUTION_LAYER_3_1_init_sg_list[] = {0x1c};

axi_lite_info_t _p0_swinst_CONVOLUTION_LAYER_3_1_init_info = {
  .phys_base_addr = 0x43c20000,
  .data_reg_offset = _p0_swinst_CONVOLUTION_LAYER_3_1_init_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x41c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds__p0_CONVOLUTION_LAYER_3_1,
};

struct _p0_swblk_CONVOLUTION_LAYER_1 _p0_swinst_CONVOLUTION_LAYER_1_1 = {
  .cmd_CONVOLUTION_LAYER_1 = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_info}, 
    .send_i = &axi_lite_send },
  .input_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_input_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .weights_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_weights_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .bias_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_bias_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .output_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_output_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .init = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_1_1_init_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_CONVOLUTION_LAYER_2 _p0_swinst_CONVOLUTION_LAYER_2_1 = {
  .cmd_CONVOLUTION_LAYER_2 = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_info}, 
    .send_i = &axi_lite_send },
  .input_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_input_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .weights_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_weights_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .bias_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_bias_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .output_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_output_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .init = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_2_1_init_info}, 
    .send_i = &axi_lite_send },
};

struct _p0_swblk_CONVOLUTION_LAYER_3 _p0_swinst_CONVOLUTION_LAYER_3_1 = {
  .cmd_CONVOLUTION_LAYER_3 = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_info}, 
    .send_i = &axi_lite_send },
  .input_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_input_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .weights_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_weights_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .bias_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_bias_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .output_feature_offset = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_output_feature_offset_info}, 
    .send_ref_i = &zero_copy_send_ref_i },
  .init = { .base = { .channel_info = &_p0_swinst_CONVOLUTION_LAYER_3_1_init_info}, 
    .send_i = &axi_lite_send },
};

extern void pfm_hook_init();
extern void pfm_hook_shutdown();
void _p0_cf_framework_open(int first)
{
  int xlnk_init_done;
  cf_context_init();
  xlnkCounterMap(650000000);
  xlnk_init_done = cf_xlnk_open(first);
  if (!xlnk_init_done) {
    pfm_hook_init();
    cf_xlnk_init(first);
  } else if (xlnk_init_done < 0) {
    fprintf(stderr, "ERROR: unable to open xlnk\n");
    exit(-1);
  }
  cf_get_current_context();
  sysport_open(&_sds_sysport_p0_processing_system7_0_S_AXI_ACP);
  sysport_open(&_sds_sysport_p0_processing_system7_0_S_AXI_HP0);
  sysport_open(&_sds_sysport_p0_processing_system7_0_S_AXI_HP1);
  sysport_open(&_sds_sysport_p0_processing_system7_0_S_AXI_HP2);
  sysport_open(&_sds_sysport_p0_processing_system7_0_S_AXI_HP3);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_input_feature_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_weights_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_bias_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_output_feature_offset_info);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_1_1_init_info);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_input_feature_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_weights_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_bias_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_output_feature_offset_info);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_2_1_init_info);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_input_feature_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_weights_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_bias_offset_info);
  zero_copy_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_output_feature_offset_info);
  axi_lite_open(&_p0_swinst_CONVOLUTION_LAYER_3_1_init_info);
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[0] = _p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[1] = _p0_swinst_CONVOLUTION_LAYER_1_1_input_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[2] = _p0_swinst_CONVOLUTION_LAYER_1_1_weights_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[3] = _p0_swinst_CONVOLUTION_LAYER_1_1_bias_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[4] = _p0_swinst_CONVOLUTION_LAYER_1_1_output_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id[5] = _p0_swinst_CONVOLUTION_LAYER_1_1_init_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_1_1.arg_dm_id_count = 6;
  accel_open(&_sds__p0_CONVOLUTION_LAYER_1_1);
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[0] = _p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[1] = _p0_swinst_CONVOLUTION_LAYER_2_1_input_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[2] = _p0_swinst_CONVOLUTION_LAYER_2_1_weights_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[3] = _p0_swinst_CONVOLUTION_LAYER_2_1_bias_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[4] = _p0_swinst_CONVOLUTION_LAYER_2_1_output_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id[5] = _p0_swinst_CONVOLUTION_LAYER_2_1_init_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_2_1.arg_dm_id_count = 6;
  accel_open(&_sds__p0_CONVOLUTION_LAYER_2_1);
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[0] = _p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[1] = _p0_swinst_CONVOLUTION_LAYER_3_1_input_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[2] = _p0_swinst_CONVOLUTION_LAYER_3_1_weights_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[3] = _p0_swinst_CONVOLUTION_LAYER_3_1_bias_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[4] = _p0_swinst_CONVOLUTION_LAYER_3_1_output_feature_offset_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id[5] = _p0_swinst_CONVOLUTION_LAYER_3_1_init_info.dm_id;
  _sds__p0_CONVOLUTION_LAYER_3_1.arg_dm_id_count = 6;
  accel_open(&_sds__p0_CONVOLUTION_LAYER_3_1);
}

void _p0_cf_framework_close(int last)
{
  accel_close(&_sds__p0_CONVOLUTION_LAYER_1_1);
  accel_close(&_sds__p0_CONVOLUTION_LAYER_2_1);
  accel_close(&_sds__p0_CONVOLUTION_LAYER_3_1);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_cmd_CONVOLUTION_LAYER_1_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_input_feature_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_weights_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_bias_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_output_feature_offset_info);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_1_1_init_info);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_cmd_CONVOLUTION_LAYER_2_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_input_feature_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_weights_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_bias_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_output_feature_offset_info);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_2_1_init_info);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_cmd_CONVOLUTION_LAYER_3_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_input_feature_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_weights_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_bias_offset_info);
  zero_copy_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_output_feature_offset_info);
  axi_lite_close(&_p0_swinst_CONVOLUTION_LAYER_3_1_init_info);
  sysport_close(&_sds_sysport_p0_processing_system7_0_S_AXI_ACP);
  sysport_close(&_sds_sysport_p0_processing_system7_0_S_AXI_HP0);
  sysport_close(&_sds_sysport_p0_processing_system7_0_S_AXI_HP1);
  sysport_close(&_sds_sysport_p0_processing_system7_0_S_AXI_HP2);
  sysport_close(&_sds_sysport_p0_processing_system7_0_S_AXI_HP3);
  pfm_hook_shutdown();
  xlnkClose(last, NULL);
}

#define TOTAL_PARTITIONS 1
int current_partition_num = 0;
struct {
  void (*open)(int);
  void (*close)(int);
}

_ptable[TOTAL_PARTITIONS]  = {
    {.open = &_p0_cf_framework_open, .close= &_p0_cf_framework_close}, 
};

void switch_to_next_partition(int partition_num)
{
#ifdef __linux__
  if (current_partition_num != partition_num) {
    _ptable[current_partition_num].close(0);
    char buf[128];
    sprintf(buf, "cat /mnt/_sds/_p%d_.bin > /dev/xdevcfg", partition_num);
    system(buf);
    _ptable[partition_num].open(0);
    current_partition_num = partition_num;
  }
#endif
}

void init_first_partition() __attribute__ ((constructor));
void close_last_partition() __attribute__ ((destructor));
void init_first_partition()
{
    current_partition_num = 0;
    _ptable[current_partition_num].open(1);

    sds_trace_setup();
}


void close_last_partition()
{
#ifdef PERF_EST
    apf_perf_estimation_exit();
#endif
    sds_trace_cleanup();
    _ptable[current_partition_num].close(1);
    current_partition_num = 0;
}

