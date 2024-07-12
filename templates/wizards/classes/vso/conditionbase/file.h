// ◦ Playrix ◦
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <Visual/Conditions/FishdomConditionBase.h>

%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{ConditionName}'
/// @name(%{ConditionName})
@endif
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{ClassName} : public ::VsoConditions::FishdomConditionBase
{
	VISUAL_CLASS()

protected:
	bool CheckInternal() const override;
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
