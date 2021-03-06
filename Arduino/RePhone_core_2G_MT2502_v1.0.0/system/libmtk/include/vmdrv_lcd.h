/*****************************************************************************
*  Copyright Statement:
*  ____________________
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS_IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef VMDRV_LCD_SDK_H
#define VMDRV_LCD_SDK_H

#ifdef _cplusplus
extern "C" {
#endif

#include "vmtype.h"


typedef enum {
   VM_DRV_LCD_BAIS,
   VM_DRV_LCD_BIAS = VM_DRV_LCD_BAIS,
   VM_DRV_LCD_CONTRAST,
   VM_DRV_LCD_LINERATE,
   VM_DRV_LCD_TEMPERATURE_COMPENSATION
}VM_DRV_LCD_FUNCTION_TYPE;

typedef enum
{
   VM_DRV_LCD_IOCTRL_OK,
   VM_DRV_LCD_IOCTRL_FAIL,
   VM_DRV_LCD_IOCTRL_NOT_SUPPORT
}VM_DRV_LCD_IOCTRL_STATUS;

typedef enum
{
   VM_DRV_LCD_IOCTRL_QUERY_FRAME_RATE,
   VM_DRV_LCD_IOCTRL_SET_FRAME_RATE,
   VM_DRV_LCD_IOCTRL_QUERY_FRAME_MARKER,
   VM_DRV_LCD_IOCTRL_SET_FRAME_MARKER,
   VM_DRV_LCD_IOCTRL_QUERY_SUPPORT_H_V_SIGNAL_FUNC,
   VM_DRV_LCD_IOCTRL_QUERY_SUPPORT_V_PULSE_WIDTH,
   VM_DRV_LCD_IOCTRL_QUERY_SUPPORT_H_PULSE_WIDTH,
   VM_DRV_LCD_IOCTRL_QUERY_BACK_PORCH,
   VM_DRV_LCD_IOCTRL_QUERY_FRONT_PORCH,
   VM_DRV_LCD_IOCTRL_SET_BACK_PORCH, 
   VM_DRV_LCD_IOCTRL_SET_FRONT_PORCH,
   VM_DRV_LCD_IOCTRL_QUERY_TE_EDGE_ATTRIB,
   VM_DRV_LCD_IOCTRL_QUERY_SUPPORT_READBACK_FUNC,
   VM_DRV_LCD_IOCTRL_QUERY_SCANLINE_REG,
   VM_DRV_LCD_IOCTRL_QUERY_IF_CS_NUMBER,
   VM_DRV_LCD_IOCTRL_QUERY_IF_CS_NUMBER_OF_SUBLCD, 
   VM_DRV_LCD_IOCTRL_QUERY_LCM_MODE_COUNT,
   VM_DRV_LCD_IOCTRL_QUERY_LCM_MODE, 
   VM_DRV_LCD_IOCTRL_QUERY_LCM_WIDTH, 
   VM_DRV_LCD_IOCTRL_QUERY_LCM_HEIGHT,
   VM_DRV_LCD_IOCTRL_QUERY_FLIP_MIRROR,
   VM_DRV_LCD_IOCTRL_QUERY_ROTATION,
   VM_DRV_LCD_IOCTRL_QUERY_SYNC_MODE, 
   VM_DRV_LCD_IOCTRL_QUERY_DATA_TIMEING_SETTING,
   VM_DRV_LCD_IOCTRL_QUERY_CMD_TIMEING_SETTING,
   VM_DRV_LCD_IOCTRL_QUERY_LCD_PPI,
   VM_DRV_LCD_IOCTRL_CABC, 
   VM_DRV_LCD_IOCTRL_QUERY_TEAR_CONTROL_FOR_ONE_TE_MODE, 
   VM_DRV_LCD_IOCTRL_CABC_SET_BRIGHTNESS,
   VM_DRV_LCD_IOCTL_ESD_CHECK,
   VM_DRV_LCD_IOCTL_ESD_RESET,
   VM_DRV_LCD_IOCTRL_QUERY_DATA_TRANSFER_COMPLETE_CALLBACK,
   VM_DRV_LCD_IOCTRL_EXECUTE_DATA_TRANSFER_COMPLETE_CALLBACK,
   VM_DRV_LCD_IOCTRL_SET_3D_PANEL_WORKING_MODE,
   VM_DRV_LCD_IOCTRL_RSVD = 0xFF
}VM_DRV_LCD_IOCTRL_ID;

typedef enum 
{
    VM_DRV_LCD_FALSE,
    VM_DRV_LCD_TRUE
}VM_DRV_LCD_BOOL;

typedef enum{
	VM_DRV_LCD_WRITE_SERIAL0_A0_LOW_ADDR  = 0,
	VM_DRV_LCD_WRITE_SERIAL0_A0_HIGH_ADDR,
	VM_DRV_LCD_ENABLE_SERIAL0_SINGLE_A0,
	VM_DRV_LCD_DISABLE_SERIAL0_SINGLE_A0,
	VM_DRV_LCD_ENABLE_SERIAL0_CS_STAY_LOW,
	VM_DRV_LCD_DISABLE_SERIAL0_CS_STAY_LOW,
	VM_DRV_LCD_ENABLE_SERIAL0_3WIRE,
	VM_DRV_LCD_DISABLE_SERIAL0_3WIRE,
	VM_DRV_LCD_ENABLE_SERIAL0_2PIN,
	VM_DRV_LCD_DISABLE_SERIAL0_2PIN,
	VM_DRV_LCD_SET_SERIAL0_IF_SIZE,
	VM_DRV_LCD_SET_SERIAL0_IF_2PIN_SIZE,
	VM_DRV_LCD_ENABLE_LCD_CMD_COMPLETE_INT,
	VM_DRV_LCD_DISABLE_LCD_ROI_CTRL_CMD_FIRST,
	VM_DRV_LCD_START_LCD_TRANSFER,
	VM_DRV_LCD_SET_LCD_ROI_CTRL_OUTPUT_FORMAT,
	VM_DRV_LCD_ENABLE_HW_CS,
	VM_DRV_LCD_MAX_NUM
	
} VM_DRV_LCD_OPERATION;

typedef struct
{
	void (* vm_drv_lcd_init_ptr)(VMUINT32 background, void **buf_addr);
	void (* vm_drv_lcd_turn_on_power_ptr)(VM_DRV_LCD_BOOL on);
	void (* vm_drv_lcd_set_bright_level_ptr)(VMUINT8 level);
	void (* vm_drv_lcd_turn_on_screen_ptr)(VM_DRV_LCD_BOOL on);
	void (* vm_drv_lcd_block_write_ptr)(VMUINT16 startx,VMUINT16 starty,VMUINT16 endx,VMUINT16 endy);
	void (* vm_drv_lcd_get_size_ptr)(VMUINT16 *out_LCD_width,VMUINT16 *out_LCD_height);
	void (* vm_drv_lcd_enter_sleep_mode_ptr)(void);
	void (* vm_drv_lcd_exit_sleep_mode_ptr)(void);
	void (* vm_drv_lcd_turn_on_partial_display_ptr) (VMUINT16 start_page,VMUINT16 end_page);
	void (* vm_drv_lcd_turn_off_partial_display_ptr) (void);
	VMUINT8 (*vm_drv_lcd_get_partial_display_alignment_ptr) (void);
	VMUINT8 (* vm_drv_lcd_get_engineering_mode_param_number_ptr)(VM_DRV_LCD_FUNCTION_TYPE type);
	void (* vm_drv_lcd_set_bias_ptr)(VMUINT8 *bias);
	void (* vm_drv_lcd_set_contrast_ptr)(VMUINT8 *contrast);
	void (* vm_drv_lcd_set_Line_rate_ptr)(VMUINT8 *linerate);
	void (* vm_drv_lcd_set_temperature_compensate_ptr)(VMUINT8 *compensate);
	VM_DRV_LCD_BOOL (* vm_drv_lcd_check_esd_ptr)(void);
	void (* vm_drv_lcd_set_rotation_ptr)(VMUINT8 rotate_value);
	void (* vm_drv_lcd_issue_update_cmd_ptr)(VMUINT16 startx, VMUINT16 starty,VMUINT16 endx,VMUINT16 endy);
	void (*vm_drv_lcd_gamma_test_ptr)(VMUINT8 level, VMUINT8 color);
	void (*vm_drv_lcd_flicker_test_ptr)(VMUINT8 level);
	void (* vm_drv_lcd_set_frame_marker_ptr)(VMUINT32 frame_marker);
	void (* vm_drv_lcd_enter_idle_mode_ptr)(void);
	void (* vm_drv_lcd_exit_idle_mode_ptr)(void);
	VM_DRV_LCD_IOCTRL_STATUS (*vm_drv_lcd_io_ctrl_ptr)(VM_DRV_LCD_IOCTRL_ID ID, void* parameters);
}vm_drv_lcd_function_list_t;

void vm_drv_lcd_delay_ms(VMUINT16 data);
void vm_drv_lcd_set_serial_clock(VMUINT8 SerialPort, VMUINT8 CLK);
void vm_drv_lcd_init_timing(VMUINT8 SerialPort, VMUINT8 CSS, VMUINT8 CSH, VMUINT8 WR_1ST, VMUINT8 WR_2ND, VMUINT8 RD_1ST, VMUINT8 RD_2ND);
void vm_drv_lcd_set_serial0_1v8_driving(VMUINT8 cur);
VMINT vm_drv_lcd_setup_driver(vm_drv_lcd_function_list_t* func_list);
void vm_drv_lcd_operation(VM_DRV_LCD_OPERATION opcode);
void vm_drv_lcd_operation2(VM_DRV_LCD_OPERATION opcode, VMUINT32 para);

#ifdef _cplusplus
}
#endif

#endif
