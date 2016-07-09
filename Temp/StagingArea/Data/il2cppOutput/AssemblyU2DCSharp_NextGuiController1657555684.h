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
// UnityEngine.Canvas
struct Canvas_t3534013893;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NextGuiController
struct  NextGuiController_t1657555684  : public MonoBehaviour_t3012272455
{
public:
	// CellGrid NextGuiController::CellGrid
	CellGrid_t3441650664 * ___CellGrid_2;
	// UnityEngine.GameObject NextGuiController::UnitsParent
	GameObject_t4012695102 * ___UnitsParent_3;
	// UnityEngine.UI.Button NextGuiController::NextTurnButton
	Button_t990034267 * ___NextTurnButton_4;
	// UnityEngine.GameObject NextGuiController::InfoPanel
	GameObject_t4012695102 * ___InfoPanel_5;
	// UnityEngine.GameObject NextGuiController::GameOverPanel
	GameObject_t4012695102 * ___GameOverPanel_6;
	// UnityEngine.Canvas NextGuiController::Canvas
	Canvas_t3534013893 * ___Canvas_7;
	// UnityEngine.GameObject NextGuiController::_infoPanel
	GameObject_t4012695102 * ____infoPanel_8;
	// UnityEngine.GameObject NextGuiController::_gameOverPanel
	GameObject_t4012695102 * ____gameOverPanel_9;

public:
	inline static int32_t get_offset_of_CellGrid_2() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___CellGrid_2)); }
	inline CellGrid_t3441650664 * get_CellGrid_2() const { return ___CellGrid_2; }
	inline CellGrid_t3441650664 ** get_address_of_CellGrid_2() { return &___CellGrid_2; }
	inline void set_CellGrid_2(CellGrid_t3441650664 * value)
	{
		___CellGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___CellGrid_2, value);
	}

	inline static int32_t get_offset_of_UnitsParent_3() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___UnitsParent_3)); }
	inline GameObject_t4012695102 * get_UnitsParent_3() const { return ___UnitsParent_3; }
	inline GameObject_t4012695102 ** get_address_of_UnitsParent_3() { return &___UnitsParent_3; }
	inline void set_UnitsParent_3(GameObject_t4012695102 * value)
	{
		___UnitsParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___UnitsParent_3, value);
	}

	inline static int32_t get_offset_of_NextTurnButton_4() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___NextTurnButton_4)); }
	inline Button_t990034267 * get_NextTurnButton_4() const { return ___NextTurnButton_4; }
	inline Button_t990034267 ** get_address_of_NextTurnButton_4() { return &___NextTurnButton_4; }
	inline void set_NextTurnButton_4(Button_t990034267 * value)
	{
		___NextTurnButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___NextTurnButton_4, value);
	}

	inline static int32_t get_offset_of_InfoPanel_5() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___InfoPanel_5)); }
	inline GameObject_t4012695102 * get_InfoPanel_5() const { return ___InfoPanel_5; }
	inline GameObject_t4012695102 ** get_address_of_InfoPanel_5() { return &___InfoPanel_5; }
	inline void set_InfoPanel_5(GameObject_t4012695102 * value)
	{
		___InfoPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___InfoPanel_5, value);
	}

	inline static int32_t get_offset_of_GameOverPanel_6() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___GameOverPanel_6)); }
	inline GameObject_t4012695102 * get_GameOverPanel_6() const { return ___GameOverPanel_6; }
	inline GameObject_t4012695102 ** get_address_of_GameOverPanel_6() { return &___GameOverPanel_6; }
	inline void set_GameOverPanel_6(GameObject_t4012695102 * value)
	{
		___GameOverPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverPanel_6, value);
	}

	inline static int32_t get_offset_of_Canvas_7() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ___Canvas_7)); }
	inline Canvas_t3534013893 * get_Canvas_7() const { return ___Canvas_7; }
	inline Canvas_t3534013893 ** get_address_of_Canvas_7() { return &___Canvas_7; }
	inline void set_Canvas_7(Canvas_t3534013893 * value)
	{
		___Canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___Canvas_7, value);
	}

	inline static int32_t get_offset_of__infoPanel_8() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ____infoPanel_8)); }
	inline GameObject_t4012695102 * get__infoPanel_8() const { return ____infoPanel_8; }
	inline GameObject_t4012695102 ** get_address_of__infoPanel_8() { return &____infoPanel_8; }
	inline void set__infoPanel_8(GameObject_t4012695102 * value)
	{
		____infoPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&____infoPanel_8, value);
	}

	inline static int32_t get_offset_of__gameOverPanel_9() { return static_cast<int32_t>(offsetof(NextGuiController_t1657555684, ____gameOverPanel_9)); }
	inline GameObject_t4012695102 * get__gameOverPanel_9() const { return ____gameOverPanel_9; }
	inline GameObject_t4012695102 ** get_address_of__gameOverPanel_9() { return &____gameOverPanel_9; }
	inline void set__gameOverPanel_9(GameObject_t4012695102 * value)
	{
		____gameOverPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&____gameOverPanel_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
