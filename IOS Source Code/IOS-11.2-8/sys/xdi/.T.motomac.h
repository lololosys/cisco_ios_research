
motomac.h,8526
#define __MOTOMAC_H__67,2331
#define NOP_REG 72,2482
#define SR1 73,2537
#define DTR 74,2597
#define IOR 75,2653
#define BADR 76,2717
#define IMR1 77,2779
#define PSR 78,2846
#define ADR 79,2909
#define CMR 80,2972
#define PNOP 81,3031
#define CER 82,3064
#define IMR2 83,3133
#define SR2 84,3201
#define FCR 85,3261
#define COMMAND_DONE 91,3479
#define CONTROL_REG_FREE 92,3518
#define HOST_ERROR 93,3557
#define INTERNAL_OP_ERROR 94,3614
#define RECEIVE_OV_ERROR_5 95,3653
#define RECEIVE_OV_ERROR_4 96,3692
#define PORT_OP_ERROR_B 97,3731
#define PORT_OP_ERROR_A 98,3770
#define CAMEL_INTERRUPT 99,3809
#define SMT_CNT_EXPIRED 100,3848
#define RING_ERROR_5 101,3887
#define RING_ERROR_4 102,3926
#define RING_ERROR_3 103,3965
#define RING_ERROR_2 104,4004
#define RING_ERROR_1 105,4043
#define RING_ERROR_0 106,4082
#define RECEIVE_COMPLETE_5 108,4122
#define CLEAR_RECEIVE_5 109,4161
#define RECEIVE_COMPLETE_4 111,4241
#define CLEAR_RECEIVE_4 112,4280
#define RING_CMD_COMPLETE_3 114,4360
#define RING_CMD_COMPLETE_2 115,4399
#define RING_CMD_COMPLETE_1 116,4438
#define RING_CMD_COMPLETE_0 117,4477
#define RING_NOT_RDY_5 118,4516
#define RING_NOT_RDY_4 119,4555
#define RING_NOT_RDY_3 120,4594
#define RING_NOT_RDY_2 121,4633
#define RING_NOT_RDY_1 122,4672
#define RING_NOT_RDY_0 123,4711
#define CLEAR_SR1 125,4751
#define ERROR_SMT_FRAME 133,5030
#define ERROR_NO_SMT_FRAME 134,5069
#define WRITE_RING_RDY_REG_0 148,5379
#define WRITE_RING_RDY_REG_1 149,5422
#define WRITE_RING_RDY_REG_2 150,5465
#define WRITE_RING_RDY_REG_3 151,5508
#define WRITE_RING_RDY_REG_4 152,5551
#define WRITE_RING_RDY_REG_5 153,5594
#define READ_RING_RDY_REG_0 155,5638
#define READ_RING_RDY_REG_1 156,5681
#define READ_RING_RDY_REG_2 157,5724
#define READ_RING_RDY_REG_3 158,5767
#define READ_RING_RDY_REG_4 159,5810
#define READ_RING_RDY_REG_5 160,5853
#define WRITE_MACIF_TRANSMIT_DIS_3 167,6042
#define WRITE_MACIF_TRANSMIT_DIS_2 168,6093
#define WRITE_MACIF_TRANSMIT_DIS_1 169,6144
#define WRITE_MACIF_TRANSMIT_DIS_0 170,6195
#define WRITE_MACIF_TRANSMIT_DIS_7 171,6246
#define WRITE_MACIF_TRANSMIT_DIS_6 172,6297
#define WRITE_MACIF_TRANSMIT_EN_3 176,6396
#define WRITE_MACIF_TRANSMIT_EN_0 178,6493
#define WRITE_MACIF_TRANSMIT_DIS_ALL 181,6563
#define WRITE_MACIF_TRANSMIT_EN 184,6644
#define READ_MACIF_TRANSMIT_REG 186,6696
#define WRITE_MACIF_RECEIVE_DIS_ALL 192,6960
#define WRITE_MACIF_RECEIVE_EN_ALL 193,7011
#define WRITE_MACIF_RECEIVE_EN_RE5 194,7062
#define WRITE_MACIF_RECEIVE_EN_RE4 195,7113
#define READ_MACIF_RECEIVE_REG 196,7164
#define WRITE_ICR 203,7407
#define     CAM_DISABLE 204,7458
#define     DOUBLE_BUFFER_MODE 205,7509
#define READ_ICR 207,7561
#define WRITE_RFR_4 216,7850
#define WRITE_RFR_5 217,7928
#define READ_RFR_4 218,7994
#define READ_RFR_5 219,8045
#define WRITE_SMT_TIMER_STL_0 231,8609
#define WRITE_SMT_TIMER_STL_1 232,8660
#define READ_SMT_TIMER_STR_0 242,9106
#define READ_SMT_TIMER_STR_1 243,9157
#define READ_RECEIVE_LENGTH_REG_4 253,9653
#define READ_RECEIVE_LENGTH_REG_5 254,9704
#define WRITE_BURST_LIMIT_REG_A 263,9995
#define READ_BURST_LIMIT_REG_A 264,10046
#define READ_BURST_LIMIT_REG_B 265,10097
#define WRITE_FIFO_WATERMARK_REG_0 278,10545
#define WRITE_FIFO_WATERMARK_REG_3 279,10596
#define WRITE_FIFO_WATERMARK_REG_4 280,10647
#define WRITE_FIFO_WATERMARK_REG_5 281,10713
#define WRITE_FIFO_WATERMARK_REG_6 282,10779
#define READ_FIFO_WATERMARK_REG_0 283,10832
#define READ_FIFO_WATERMARK_REG_3 284,10883
#define READ_FIFO_WATERMARK_REG_4 285,10934
#define READ_FIFO_WATERMARK_REG_5 286,10985
#define WRITE_RING_PARAMETER_REG_0 301,11545
#define WRITE_RING_PARAMETER_REG_3 302,11600
#define WRITE_RING_PARAMETER_REG_4 303,11671
#define WRITE_RING_PARAMETER_REG_5 304,11742
#define READ_RING_PARAMETER_REG_0 305,11813
#define READ_RING_PARAMETER_REG_3 306,11868
#define READ_RING_PARAMETER_REG_4 307,11923
#define READ_RING_PARAMETER_REG_5 308,11978
#define WRITE_COMMAND_PARAMETER_REG_A 318,12372
#define READ_COMMAND_PARAMETER_REG_A 319,12427
#define READ_COMMAND_PARAMETER_REG_B 320,12482
#define WRITE_PORT_MEMORY_PAGE_REG_A 327,12760
#define READ_PORT_MEMORY_PAGE_REG_A 328,12815
#define READ_PORT_MEMORY_PAGE_REG_B 329,12870
#define WRITE_PORT_CONTROL_DIS_REG_A 339,13259
#define WRITE_PORT_CONTROL_EN_REG_A 340,13314
#define READ_PORT_CONTROL_REG_A 341,13369
#define READ_PORT_CONTROL_REG_B 342,13424
#define WRITE_MAXIMUM_RECEIVE_MEMORY_SPACE_REG_4 351,13705
#define WRITE_MAXIMUM_RECEIVE_MEMORY_SPACE_REG_5 352,13779
#define READ_MAXIMUM_RECEIVE_MEMORY_SPACE_REG_4 353,13853
#define READ_MAXIMUM_RECEIVE_MEMORY_SPACE_REG_5 354,13916
#define READ_RING_STATE_REG_0 359,14115
#define READ_RING_STATE_REG_3 360,14178
#define READ_RING_STATE_REG_4 361,14241
#define READ_RING_STATE_REG_5 362,14304
#define READ_INTERNAL_ERROR_STATUS_REG 371,14603
#define     INTERNAL_OVERRUN_ERROR 372,14658
#define     INTERNAL_UNDERRUN_ERROR 373,14713
#define     TRANSMIT_INTERNAL_PARITY_ERROR 374,14768
#define     MER_MAC_ERROR 375,14823
#define     MEMORY_OVERRUN_ERROR 376,14878
#define     PORTB_INTERNAL_ERROR 377,14933
#define     PORTA_INTERNAL_ERROR 378,14988
#define READ_FSI_REV_REG 384,15172
#define READ_IFDDI_REV_REG 389,15357
#define SOFTWARE_RESET 396,15535
#define CONTROL_REG_A 403,15780
#define CONTROL_REG_B 404,15820
#define INTERRUPT_MASK_REG_A 405,15860
#define INTERRUPT_MASK_REG_B 406,15900
#define INTERRUPT_MASK_REG_C 407,15940
#define MY_SHORT_ADDRESS_REG 408,15980
#define MY_LONG_ADDRESS_REG_A 409,16021
#define MY_LONG_ADDRESS_REG_B 410,16062
#define MY_LONG_ADDRESS_REG_C 411,16103
#define TREQ_REG 412,16144
#define TVX_VALUE_AND_TMAX_REG 413,16201
#define REV_NO_REG 414,16242
#define INTERRUPT_EVENT_REG_C 415,16283
#define VOID_TIME_REG 416,16324
#define TOKEN_COUNT_REG 417,16365
#define FRAME_COUNT_REG 418,16406
#define LOST_AND_ERROR_COUNT_REG 419,16447
#define INTERRUPT_EVENT_REG_A 420,16488
#define INTERRUPT_EVENT_REG_B 421,16529
#define RECEIVE_STATUS_REG 422,16570
#define TRANSMIT_STATUS_REG 423,16611
#define NEGOTIATED_TTRT_A_REG 424,16652
#define NEGOTIATED_TTRT_B_REG 425,16693
#define INFORMATION_FIELD_REG_A 426,16734
#define INFORMATION_FIELD_REG_B 427,16775
#define MAC_BIST_SIGNATURE_REG 428,16816
#define TVX_TIMER_REG 429,16857
#define TRT_TIMER_REG_A 430,16898
#define TRT_TIMER_REG_B 431,16939
#define THT_TIMER_REG_A 432,16980
#define SENT_COUNT_THT_TIMER_REG 433,17021
#define PACKET_REQUEST_REG 434,17062
#define REC_CRC_REG_A 435,17103
#define REC_CRC_REG_B 436,17144
#define TRANSMIT_CRC_REG_A 437,17185
#define TRANSMIT_CRC_REG_B 438,17226
#define MAC_ON 443,17402
#define SET_BIT_5 444,17437
#define SET_BIT_4 445,17472
#define CANONICAL_FORM 446,17507
#define FLUSH_SA47 447,17542
#define COPY_IND_LLC 448,17577
#define COPY_GRP_LLC 449,17612
#define DISABLE_BRDCST 450,17647
#define RING_PURGE 455,17817
#define FDX_MODE 456,17852
#define BRIDGE_STRIP 457,17887
#define TXPARITY_ON 458,17922
#define MAC_RESET 460,17958
#define RESET_CLAIM 461,17993
#define RESET_BEACON 462,18028
#define FSI_BEACON 464,18064
#define IGNORE_SACAM 465,18099
#define EXT_DA_MATCH 466,18134
#define MAC_MODE_CTL 467,18169
#define RCDAT_PARITY_ON 468,18204
#define TXDAT_BAD_PAR 469,18239
#define BEACON_RCVD 473,18415
#define CLAIM_RCVD 474,18450
#define FRAME_ERR 475,18485
#define FRAME_RCVD 476,18520
#define RING_OP_CHNG 477,18555
#define TVX_EXPIR 478,18590
#define LATE_TKN 479,18625
#define RCVRY_FAIL 480,18660
#define DUPL_TKN 481,18695
#define DUPL_ADDR 482,18730
#define MY_BEACON 487,18907
#define OTHER_BEACON 488,18942
#define MY_CLAIM 489,18977
#define BAD_T_BID 490,19012
#define NOT_COPIED 491,19047
#define RING_OP 495,19222
#define R_FLAG 500,19397
#define CAMEL_CONTROL_REG 507,19550
#define CAMEL_INTERRUPT_MASK_REG 508,19588
#define CAMEL_INTERRUPT_EVENT_REG 509,19626
#define CAMEL_ZERO_REG_A 510,19664
#define CAMEL_INTERRUPT_LOC_REG 511,19702
#define CAMEL_REV_NUMBER_REG 512,19740
#define CAMEL_ZERO_REG_B 513,19778
#define CAMEL_ZERO_REG_C 514,19817
#define CAMEL_ZERO_REG_D 515,19858
#define CAMEL_ZERO_REG_E 516,19897
#define CAMEL_ZERO_REG_F 517,19936
#define BYPASS_CTRL_ON 522,20116
#define CAM_ADD_PREFIX 526,20281
#define CAM_CMP_PREFIX 527,20316
#define CAM_READ_PREFIX 528,20351
#define MIF68840_INTERNAL_CAM_VALID 531,20434
#define MIF68840_INTERNAL_CAM_MATCH 532,20485