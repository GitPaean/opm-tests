-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2024, SINTEF Digital, TNO
-- Copyright (C) 2026, SINTEF Digital

-- Shared field, group and well liquid summary requests.

ALL

-- ALL omits liquid production rates and totals.
FLPR
FLPT
-- FIELD is the root group containing both wells. Check group liquid output
-- alongside the field and well liquid summaries.
GLPR
FIELD /
GLPT
FIELD /
WLPR
/
WLPT
/
WMCTL
/

-- Connection output for every connection of each well.
CPR
'INJ' /
'PROD' /
/
CTFAC
'INJ' /
'PROD' /
/
CPI
'INJ' /
'PROD' /
/
COFR
'INJ' /
'PROD' /
/
CGFR
'INJ' /
'PROD' /
/
CWFR
'INJ' /
'PROD' /
/
COFRF
'INJ' /
'PROD' /
/
COFRS
'INJ' /
'PROD' /
/
CGFRF
'INJ' /
'PROD' /
/
CGFRS
'INJ' /
'PROD' /
/
COPR
'INJ' /
'PROD' /
/
CGPR
'INJ' /
'PROD' /
/
CWPR
'INJ' /
'PROD' /
/
CGIR
'INJ' /
'PROD' /
/
CWIR
'INJ' /
'PROD' /
/
COPT
'INJ' /
'PROD' /
/
CGPT
'INJ' /
'PROD' /
/
CWPT
'INJ' /
'PROD' /
/
CGIT
'INJ' /
'PROD' /
/
CWIT
'INJ' /
'PROD' /
/
CVPR
'INJ' /
'PROD' /
/
CVIR
'INJ' /
'PROD' /
/
CVPT
'INJ' /
'PROD' /
/
CVIT
'INJ' /
'PROD' /
/
CWCT
'INJ' /
'PROD' /
/
CGOR
'INJ' /
'PROD' /
/
CWGR
'INJ' /
'PROD' /
/

-- Well status, events, block pressure and stream molecular weight.
WSTAT
/
WBP
/
WMMW
/
WPWE0
/
WPWE1
/
WPWE2
/
WPWE4
/
WPWE7
/
WOPRF
/
WOPRS
/
WGPRF
/
WGPRS
/

-- Well stream mole fractions and component molar rates by phase.
WXMF
'*' 1 /
'*' 2 /
'*' 3 /
/
WYMF
'*' 1 /
'*' 2 /
'*' 3 /
/
WZMF
'*' 1 /
'*' 2 /
'*' 3 /
/
WCGMR
'*' 1 /
'*' 2 /
'*' 3 /
/
WCOMR
'*' 1 /
'*' 2 /
'*' 3 /
/

-- Hydrocarbon and component molar rates and totals. OPM Flow does
-- not parse these keywords yet.
WHMPR
/
WHMPT
/
WHMIR
/
WHMIT
/
WCMPR
'*' 1 /
'*' 2 /
'*' 3 /
/
WCMPT
'*' 1 /
'*' 2 /
'*' 3 /
/
WCMIR
'*' 1 /
'*' 2 /
'*' 3 /
/
WCMIT
'*' 1 /
'*' 2 /
'*' 3 /
/
WCHMR
'*' 1 /
'*' 2 /
'*' 3 /
/
WCHMT
'*' 1 /
'*' 2 /
'*' 3 /
/
WCGMT
'*' 1 /
'*' 2 /
'*' 3 /
/
WCOMT
'*' 1 /
'*' 2 /
'*' 3 /
/

-- Tabulate the summary vectors in a separate run summary file.
RUNSUM
SEPARATE
