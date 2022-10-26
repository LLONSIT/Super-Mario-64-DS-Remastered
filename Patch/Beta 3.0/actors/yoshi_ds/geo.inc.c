#include "src/game/envfx_snow.h"

const GeoLayout yoshi_ds_002_switch_opt0_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(0, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_001_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(0, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_mesh),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_001_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_002_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 34, -10, 37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_003_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_004_skinned),
								GEO_ANIMATED_PART(5, 65, 0, 0, yoshi_ds_000_offset_004_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_003_skinned),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(1, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_003_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 35, -10, -37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_006_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_007_skinned),
								GEO_ANIMATED_PART(5, 65, 0, 0, yoshi_ds_000_offset_007_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_004_skinned),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(0, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_004_mesh),
												GEO_CLOSE_NODE(),
												GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, 91, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_009_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_010_skinned),
								GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_010_mesh),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(5, 67, 0, 0, yoshi_ds_000_offset_011_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, -94, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_012_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_013_skinned),
								GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_013_mesh),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(0, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_005_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout yoshi_ds_002_switch_opt0_001_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(0, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_001_mesh_mat_override_metal_0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(0, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_mesh_mat_override_metal_0),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(4, yoshi_ds_000_displaylist_001_mesh_mat_override_metal_0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(4, yoshi_ds_000_displaylist_002_mesh_mat_override_metal_0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 34, -10, 37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_003_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_004_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(1, 65, 0, 0, yoshi_ds_000_offset_004_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_003_skinned_mat_override_metal_0),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(1, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_003_mesh_mat_override_metal_0),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 35, -10, -37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_006_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_007_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(1, 65, 0, 0, yoshi_ds_000_offset_007_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_004_skinned_mat_override_metal_0),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(0, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_004_mesh_mat_override_metal_0),
												GEO_CLOSE_NODE(),
												GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, 91, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_009_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_010_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_010_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 67, 0, 0, yoshi_ds_000_offset_011_mesh_mat_override_metal_0),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, -94, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_012_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_013_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_013_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(0, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_005_mesh_mat_override_metal_0),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout yoshi_ds_002_switch_opt0_001_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(0, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_001_mesh_mat_override_metal_0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(0, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_mesh_mat_override_metal_0),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_001_mesh_mat_override_metal_0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(0, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_002_mesh_mat_override_metal_0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 34, -10, 37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_003_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_004_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(5, 65, 0, 0, yoshi_ds_000_offset_004_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_003_skinned_mat_override_metal_0),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(1, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_003_mesh_mat_override_metal_0),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 35, -10, -37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_006_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_007_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(5, 65, 0, 0, yoshi_ds_000_offset_007_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_004_skinned_mat_override_metal_0),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(0, geo_mario_hand_foot_scaler),
												GEO_SCALE(0, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_004_mesh_mat_override_metal_0),
												GEO_CLOSE_NODE(),
												GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, 91, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_009_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_010_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_010_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(5, 67, 0, 0, yoshi_ds_000_offset_011_mesh_mat_override_metal_0),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(1, 13, -8, -94, 0, 0, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(5, 0, 0, 0, yoshi_ds_000_offset_012_mesh_mat_override_metal_0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(5, yoshi_ds_000_offset_013_skinned_mat_override_metal_0),
								GEO_ANIMATED_PART(5, 68, 0, 0, yoshi_ds_000_offset_013_mesh_mat_override_metal_0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(0, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(5, yoshi_ds_000_displaylist_005_mesh_mat_override_metal_0),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout yoshi_ds_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_mirror_mario_backface_culling),
				GEO_ASM(0, geo_mirror_mario_set_alpha),
				GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(0, geo_move_mario_part_from_parent),
										GEO_ASM(0, geo_mario_tilt_torso),
										GEO_ROTATION_NODE(0, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_001_mesh),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(1, 87, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_head_rotation),
													GEO_ROTATION_NODE(0, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
														GEO_OPEN_NODE(),
															GEO_NODE_START(),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_mesh),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(0, 142, -51, -126, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(0, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(4, yoshi_ds_000_displaylist_001_mesh),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(0, 142, -51, 126, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(0, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(4, yoshi_ds_000_displaylist_002_mesh),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(1, 34, -10, 37, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_003_mesh),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_004_skinned),
														GEO_ANIMATED_PART(1, 65, 0, 0, yoshi_ds_000_offset_004_mesh),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_003_skinned),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_ASM(1, geo_mario_hand_foot_scaler),
																		GEO_SCALE(0, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_003_mesh),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(1, 35, -10, -37, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_006_mesh),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_007_skinned),
														GEO_ANIMATED_PART(1, 65, 0, 0, yoshi_ds_000_offset_007_mesh),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_004_skinned),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(1, 60, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_ASM(0, geo_mario_hand_foot_scaler),
																		GEO_SCALE(0, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_004_mesh),
																		GEO_CLOSE_NODE(),
																		GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_TRANSLATE_ROTATE(1, 13, -8, 91, 0, 0, -180),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_009_mesh),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_010_skinned),
														GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_010_mesh),
														GEO_OPEN_NODE(),
															GEO_ANIMATED_PART(1, 67, 0, 0, yoshi_ds_000_offset_011_mesh),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_TRANSLATE_ROTATE(1, 13, -8, -94, 0, 0, -180),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_TRANSLATE_ROTATE(1, 0, 0, 0, 0, 0, -180),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 0, 0, 0, yoshi_ds_000_offset_012_mesh),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(1, yoshi_ds_000_offset_013_skinned),
														GEO_ANIMATED_PART(1, 68, 0, 0, yoshi_ds_000_offset_013_mesh),
														GEO_OPEN_NODE(),
															GEO_ANIMATED_PART(1, 67, 0, 0, NULL),
															GEO_OPEN_NODE(),
																GEO_ASM(2, geo_mario_hand_foot_scaler),
																GEO_SCALE(0, 65536),
																GEO_OPEN_NODE(),
																	GEO_DISPLAY_LIST(1, yoshi_ds_000_displaylist_005_mesh),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, yoshi_ds_002_switch_opt0_001_switch_opt1),
							GEO_BRANCH(1, yoshi_ds_002_switch_opt0_001_switch_opt2),
							GEO_BRANCH(1, yoshi_ds_002_switch_opt0_001_switch_opt3),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ASM(1, geo_mirror_mario_backface_culling),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, yoshi_ds_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, yoshi_ds_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
