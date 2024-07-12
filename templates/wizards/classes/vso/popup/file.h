// ◦ Playrix ◦
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <UI/VsoPopup.h>
#include <Visual/Behaviour/Behaviour.h>

%{JS: Cpp.openNamespaces('%{Class}')}
class %{BehaviourClassName};
using %{BehaviourClassName}Ptr = ::Core::IntrusivePtr<%{BehaviourClassName}>;

class %{ClassName} : public ::VsoPopup
{
	VISUAL_CLASS()

public:
	using Parent = ::VsoPopup;
	using Ptr = ::Core::IntrusivePtr<%{ClassName}>;
	using WeakPtr = ::Core::IntrusiveWeakPtr<%{ClassName}>;

	using VsoPopup::VsoPopup;

	%{BehaviourClassName}Ptr GetBehaviour() const;

protected:
	void OnInit() override;
	void Update(float dt) override;
};
%{JS: Cpp.closeNamespaces('%{Class}')}

%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{BehaviourName}'
/// @name(%{BehaviourName})
@endif
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{BehaviourClassName} : public ::Visual::Behaviour
{
	VISUAL_CLASS()

public:
	using Parent = ::Visual::Behaviour;
	using Ptr = ::Core::IntrusivePtr<%{BehaviourClassName}>;
	using WeakPtr = ::Core::IntrusiveWeakPtr<%{BehaviourClassName}>;

	void InitPopup();

protected:
	void Update(float dt) override;
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
