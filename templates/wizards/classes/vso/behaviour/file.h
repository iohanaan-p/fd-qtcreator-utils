%{Cpp:LicenseTemplate}\
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
    using Ptr = ::Core::IntrusivePtr<::%{Class}>;
    using WeakPtr = ::Core::IntrusiveWeakPtr<::%{Class}>;

protected:
    void Update(float dt) override;

private:
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
