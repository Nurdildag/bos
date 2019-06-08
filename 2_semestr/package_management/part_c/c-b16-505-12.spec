Name:       c-b16-505-12
Version:    1.0
Release:    1%{?dist}
Summary:    Nurdilda Gabiden ... B16-505 ...
Group:      Testing
License:    GPL
URL:        https://github.com/Nurdildag/my-rpm-package
Source:     %{name}-%{version}.tar.gz
BuildRequires: gcc

%description
A test package

%prep
%setup -q

%build
gcc -O2 -o c-b16-505-12 c-b16-505-12.c

%install
mkdir -p %{buildroot}%{_bindir}
cp c-b16-505-19.c %{buildroot}%{_bindir}

%files
%{_bindir}/c-b16-505-12.c

%changelog
* Mon May 20 2019 Nurdilda
- Added %{_bindir}/c-b16-505-12.c
