#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellGrid
struct CellGrid_t3441650664;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GuiController
struct  GuiController_t1495593751  : public MonoBehaviour_t3012272455
{
public:
	// CellGrid GuiController::CellGrid
	CellGrid_t3441650664 * ___CellGrid_2;
	// UnityEngine.GameObject GuiController::UnitsParent
	GameObject_t4012695102 * ___UnitsParent_3;
	// UnityEngine.UI.Button GuiController::NextTurnButton
	Button_t990034267 * ___NextTurnButton_4;
	// UnityEngine.UI.Image GuiController::UnitImage
	Image_t3354615620 * ___UnitImage_5;
	// UnityEngine.UI.Text GuiController::InfoText
	Text_t3286458198 * ___InfoText_6;
	// UnityEngine.UI.Text GuiController::StatsText
	Text_t3286458198 * ___StatsText_7;

public:
	inline static int32_t get_offset_of_CellGrid_2() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___CellGrid_2)); }
	inline CellGrid_t3441650664 * get_CellGrid_2() const { return ___CellGrid_2; }
	inline CellGrid_t3441650664 ** get_address_of_CellGrid_2() { return &___CellGrid_2; }
	inline void set_CellGrid_2(CellGrid_t3441650664 * value)
	{
		___CellGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___CellGrid_2, value);
	}

	inline static int32_t get_offset_of_UnitsParent_3() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___UnitsParent_3)); }
	inline GameObject_t4012695102 * get_UnitsParent_3() const { return ___UnitsParent_3; }
	inline GameObject_t4012695102 ** get_address_of_UnitsParent_3() { return &___UnitsParent_3; }
	inline void set_UnitsParent_3(GameObject_t4012695102 * value)
	{
		___UnitsParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___UnitsParent_3, value);
	}

	inline static int32_t get_offset_of_NextTurnButton_4() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___NextTurnButton_4)); }
	inline Button_t990034267 * get_NextTurnButton_4() const { return ___NextTurnButton_4; }
	inline Button_t990034267 ** get_address_of_NextTurnButton_4() { return &___NextTurnButton_4; }
	inline void set_NextTurnButton_4(Button_t990034267 * value)
	{
		___NextTurnButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___NextTurnButton_4, value);
	}

	inline static int32_t get_offset_of_UnitImage_5() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___UnitImage_5)); }
	inline Image_t3354615620 * get_UnitImage_5() const { return ___UnitImage_5; }
	inline Image_t3354615620 ** get_address_of_UnitImage_5() { return &___UnitImage_5; }
	inline void set_UnitImage_5(Image_t3354615620 * value)
	{
		___UnitImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___UnitImage_5, value);
	}

	inline static int32_t get_offset_of_InfoText_6() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___InfoText_6)); }
	inline Text_t3286458198 * get_InfoText_6() const { return ___InfoText_6; }
	inline Text_t3286458198 ** get_address_of_InfoText_6() { return &___InfoText_6; }
	inline void set_InfoText_6(Text_t3286458198 * value)
	{
		___InfoText_6 = value;
		Il2CppCodeGenWriteBarrier(&___InfoText_6, value);
	}

	inline static int32_t get_offset_of_StatsText_7() { return static_cast<int32_t>(offsetof(GuiController_t1495593751, ___StatsText_7)); }
	inline Text_t3286458198 * get_StatsText_7() const { return ___StatsText_7; }
	inline Text_t3286458198 ** get_address_of_StatsText_7() { return &___StatsText_7; }
	inline void set_StatsText_7(Text_t3286458198 * value)
	{
		___StatsText_7 = value;
		Il2CppCodeGenWriteBarrier(&___StatsText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
