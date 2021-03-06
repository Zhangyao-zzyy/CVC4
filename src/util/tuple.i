%{
#include "util/tuple.h"
%}

%rename(equals) CVC4::TupleUpdate::operator==(const TupleUpdate&) const;
%ignore CVC4::TupleUpdate::operator!=(const TupleUpdate&) const;

%rename(apply) CVC4::TupleUpdateHashFunction::operator()(const TupleUpdate&) const;

%ignore CVC4::operator<<(std::ostream&, const TupleUpdate&);

%include "util/tuple.h"
