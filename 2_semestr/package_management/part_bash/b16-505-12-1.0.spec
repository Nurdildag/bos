Name:          b16-505-12
Version:       1.0
Release:       1%{?dist}
Summary:       Nurdilda Gabiden ... B16-505 ...
Group:         Testing
License:       GPL
URL:           https://github.com/Nurdildag/my-rpm-package
Source0:       %{name}-%{version}.tar.gz
BuildRequires: /bin/rm, /bin/mkdir, /bin/cp
Requires:      /bin/bash, /usr/bin/date
BuildArch:     noarch

%description
A test package

%prep
%setup -q

%install
mkdir -p %{buildroot}%{_bindir}
install -m 755 b16-505-12.sh %{buildroot}%{_bindir}

%files
%{_bindir}/b16-505-12.sh

%changelog
* Thu Oct 16 2012 Nurdilda
- Added %{_bindir}/b16-505-12.sh
