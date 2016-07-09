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

// NextGuiController
struct NextGuiController_t1657555684;
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

// System.Void NextGuiController::.ctor()
extern "C"  void NextGuiController__ctor_m1721983751 (NextGuiController_t1657555684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::Start()
extern "C"  void NextGuiController_Start_m669121543 (NextGuiController_t1657555684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnGameStarted(System.Object,System.EventArgs)
extern "C"  void NextGuiController_OnGameStarted_m3792589583 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnTurnEnded(System.Object,System.EventArgs)
extern "C"  void NextGuiController_OnTurnEnded_m3865219165 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnGameEnded(System.Object,System.EventArgs)
extern "C"  void NextGuiController_OnGameEnded_m2600286728 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnUnitAttacked(System.Object,AttackEventArgs)
extern "C"  void NextGuiController_OnUnitAttacked_m979320842 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, AttackEventArgs_t1330664719 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnUnitDestroyed(System.Object,AttackEventArgs)
extern "C"  void NextGuiController_OnUnitDestroyed_m1981817718 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, AttackEventArgs_t1330664719 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnUnitDehighlighted(System.Object,System.EventArgs)
extern "C"  void NextGuiController_OnUnitDehighlighted_m2012940590 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::OnUnitHighlighted(System.Object,System.EventArgs)
extern "C"  void NextGuiController_OnUnitHighlighted_m1234862223 (NextGuiController_t1657555684 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::DismissPanel()
extern "C"  void NextGuiController_DismissPanel_m980066423 (NextGuiController_t1657555684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NextGuiController::RestartLevel()
extern "C"  void NextGuiController_RestartLevel_m1371330258 (NextGuiController_t1657555684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
