%{Cpp:LicenseTemplate}\
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif

#include <Visual/Assets/Asset.h>

%{JS: Cpp.openNamespaces('%{Class}')}
/// @gdb(name=%{AssetTypeName}%{JS: '%{AssetPrefix}' ? ', prefix=%{AssetPrefix}' : ''})
@if '%{EditorCategory}'
/// @category(%{EditorCategory})
@endif
class %{ClassName} : public ::Visual::Asset
{
    VISUAL_CLASS()

public:
    using Ptr = ::Core::IntrusivePtr<::%{Class}>;
    using WeakPtr = ::Core::IntrusiveWeakPtr<::%{Class}>;

private:
};
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
