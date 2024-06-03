/******************************************************************************
 *
 * Copyright(c) 2012 - 2020 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 ******************************************************************************/
#ifdef PHL_FEATURE_NIC

#if defined(MAC_8851B_SUPPORT)
#ifdef MAC_FW_8851B_U1
#ifdef MAC_FW_CATEGORY_NICCE
extern u32 array_length_8851b_u1_nicce;
extern u8 array_8851b_u1_nicce[320136];
#endif /* MAC_FW_CATEGORY_NICCE */

#ifdef MAC_FW_CATEGORY_NIC_PLE
extern u32 array_length_8851b_u1_nic_ple;
extern u8 array_8851b_u1_nic_ple[269064];
#endif /* MAC_FW_CATEGORY_NIC_PLE */

#ifdef MAC_FW_CATEGORY_NIC
extern u32 array_length_8851b_u1_nic;
extern u8 array_8851b_u1_nic[264488];
#endif /* MAC_FW_CATEGORY_NIC */

#ifdef MAC_FW_CATEGORY_WOWLAN_PLE
extern u32 array_length_8851b_u1_wowlan_ple;
extern u8 array_8851b_u1_wowlan_ple[272184];
#endif /* MAC_FW_CATEGORY_WOWLAN_PLE */

#ifdef MAC_FW_CATEGORY_WOWLAN
extern u32 array_length_8851b_u1_wowlan;
extern u8 array_8851b_u1_wowlan[269176];
#endif /* MAC_FW_CATEGORY_WOWLAN */

#endif /* MAC_FW_8851B_U1 */
#ifdef MAC_FW_8851B_U2
#ifdef MAC_FW_CATEGORY_NICCE
extern u32 array_length_8851b_u2_nicce;
extern u8 array_8851b_u2_nicce[320176];
#endif /* MAC_FW_CATEGORY_NICCE */

#ifdef MAC_FW_CATEGORY_NIC_PLE
extern u32 array_length_8851b_u2_nic_ple;
extern u8 array_8851b_u2_nic_ple[269120];
#endif /* MAC_FW_CATEGORY_NIC_PLE */

#ifdef MAC_FW_CATEGORY_NIC
extern u32 array_length_8851b_u2_nic;
extern u8 array_8851b_u2_nic[264528];
#endif /* MAC_FW_CATEGORY_NIC */

#ifdef MAC_FW_CATEGORY_WOWLAN_PLE
extern u32 array_length_8851b_u2_wowlan_ple;
extern u8 array_8851b_u2_wowlan_ple[272264];
#endif /* MAC_FW_CATEGORY_WOWLAN_PLE */

#ifdef MAC_FW_CATEGORY_WOWLAN
extern u32 array_length_8851b_u2_wowlan;
extern u8 array_8851b_u2_wowlan[269280];
#endif /* MAC_FW_CATEGORY_WOWLAN */

#endif /* MAC_FW_8851B_U2 */
#endif /* #if MAC_XXXX_SUPPORT */
#endif /* PHL_FEATURE_NIC */
