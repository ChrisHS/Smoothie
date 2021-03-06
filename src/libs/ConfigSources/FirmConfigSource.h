/*
      This file is part of Smoothie (http://smoothieware.org/). The motion control part is heavily based on Grbl (https://github.com/simen/grbl).
      Smoothie is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
      Smoothie is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
      You should have received a copy of the GNU General Public License along with Smoothie. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FIRMCONFIGSOURCE_H
#define FIRMCONFIGSOURCE_H

#include "ConfigValue.h"
#include "ConfigSource.h"
#include "ConfigCache.h"

using namespace std;
#include <string>

#define FIRM_CONFIGSOURCE_CHECKSUM    CHECKSUM("firm")

class FirmConfigSource : public ConfigSource {
    public:
        FirmConfigSource(uint16_t name_checksum = FIRM_CONFIGSOURCE_CHECKSUM);
        void transfer_values_to_cache( ConfigCache* cache );
        bool is_named( uint16_t check_sum );
        void write( string setting, string value );
        string read( uint16_t check_sums[3] );

};



#endif // FIRMCONFIGSOURCE_H
