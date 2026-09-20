# (c) 2022-2026, Infineon Technologies AG or an affiliate of
# Infineon Technologies AG.
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Truncate signal text for SVG display.
# For each input signal text argument:
#   - If it contains multiple signals (comma-separated), show only the
#     first signal followed by "+"
#   - Outputs param:resultN=<processed_text> for each argument at index N

set channelName stdout

if {[chan names ModusToolbox] eq "ModusToolbox"} {
    set channelName ModusToolbox
}

set count [llength $argv]

for {set i 0} {$i < $count} {incr i} {
    set text [lindex $argv $i]

    # Check if there are multiple signals (semicolon-separated)
    if {[string first ";" $text] != -1} {
        set parts [split $text ";"]
        set first_part [string trim [lindex $parts 0]]
        set text "${first_part}+"
    }

    puts $channelName "param:result${i}=${text}"
}
