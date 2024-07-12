// ◦ Playrix ◦
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <Visual/Behaviours/Panels/PanelBehaviour.h>

%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{BehaviourName}'
/// @name(%{BehaviourName})
@endif
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{ClassName} : public ::Visual::Panels::PanelBehaviour
{
	VISUAL_CLASS()

public:
	using Ptr = ::Core::IntrusivePtr<%{ClassName}>;
	using WeakPtr = ::Core::IntrusiveWeakPtr<%{ClassName}>;

protected:
	void PrepareComponents() override;
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
