#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// PriorityQueueNode`1<System.Object>
struct PriorityQueueNode_1_t3411438041;
// Cell
struct Cell_t2096514;
// Player
struct Player_t2393081601;
// Unit
struct Unit_t2641317;
// Buff
struct Buff_t2081907;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_PriorityQueueNode_1_gen3411438041.h"
#include "AssemblyU2DCSharp_Cell2096514.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

#pragma once
// PriorityQueueNode`1<System.Object>[]
struct PriorityQueueNode_1U5BU5D_t3151093412  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PriorityQueueNode_1_t3411438041 * m_Items[1];

public:
	inline PriorityQueueNode_1_t3411438041 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PriorityQueueNode_1_t3411438041 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PriorityQueueNode_1_t3411438041 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Cell[]
struct CellU5BU5D_t582885943  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Cell_t2096514 * m_Items[1];

public:
	inline Cell_t2096514 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Cell_t2096514 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Cell_t2096514 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Player[]
struct PlayerU5BU5D_t1951211484  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Player_t2393081601 * m_Items[1];

public:
	inline Player_t2393081601 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Player_t2393081601 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Player_t2393081601 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Unit[]
struct UnitU5BU5D_t1707357005  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Unit_t2641317 * m_Items[1];

public:
	inline Unit_t2641317 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Unit_t2641317 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Unit_t2641317 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Buff[]
struct BuffU5BU5D_t2714489954  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
