#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GuiController
struct GuiController_t1495593751;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;
// AttackEventArgs
struct AttackEventArgs_t1330664719;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_AttackEventArgs1330664719.h"

// System.Void GuiController::.ctor()
extern "C"  void GuiController__ctor_m1058011188 (GuiController_t1495593751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::Start()
extern "C"  void GuiController_Start_m5148980 (GuiController_t1495593751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnGameStarted(System.Object,System.EventArgs)
extern "C"  void GuiController_OnGameStarted_m4002324092 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnGameEnded(System.Object,System.EventArgs)
extern "C"  void GuiController_OnGameEnded_m3489889461 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnTurnEnded(System.Object,System.EventArgs)
extern "C"  void GuiController_OnTurnEnded_m459854602 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnCellDehighlighted(System.Object,System.EventArgs)
extern "C"  void GuiController_OnCellDehighlighted_m2999177149 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnCellHighlighted(System.Object,System.EventArgs)
extern "C"  void GuiController_OnCellHighlighted_m766615262 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnUnitAttacked(System.Object,AttackEventArgs)
extern "C"  void GuiController_OnUnitAttacked_m1189055351 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, AttackEventArgs_t1330664719 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnUnitDehighlighted(System.Object,System.EventArgs)
extern "C"  void GuiController_OnUnitDehighlighted_m501108443 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::OnUnitHighlighted(System.Object,System.EventArgs)
extern "C"  void GuiController_OnUnitHighlighted_m1023233404 (GuiController_t1495593751 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuiController::RestartLevel()
extern "C"  void GuiController_RestartLevel_m3112404229 (GuiController_t1495593751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
