// ◦ Playrix ◦
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <Visual/Behaviour/Behaviour.h>

%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{BehaviourName}'
/// @name(%{BehaviourName})
@endif
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{ClassName} : public ::Visual::Behaviour
{
	VISUAL_CLASS()

public:
	using Parent = ::Visual::Behaviour;
	using Ptr = ::Core::IntrusivePtr<%{ClassName}>;
	using WeakPtr = ::Core::IntrusiveWeakPtr<%{ClassName}>;

protected:
	void Update(float dt) override;

private:
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
