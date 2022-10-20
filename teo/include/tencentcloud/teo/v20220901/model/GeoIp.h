/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_GEOIP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_GEOIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Region information
                */
                class GeoIp : public AbstractModel
                {
                public:
                    GeoIp();
                    ~GeoIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Country name
                     * @return Country Country name
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country name
                     * @param Country Country name
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取The continent.
                     * @return Continent The continent.
                     */
                    std::string GetContinent() const;

                    /**
                     * 设置The continent.
                     * @param Continent The continent.
                     */
                    void SetContinent(const std::string& _continent);

                    /**
                     * 判断参数 Continent 是否已赋值
                     * @return Continent 是否已赋值
                     */
                    bool ContinentHasBeenSet() const;

                    /**
                     * 获取The state/province.
                     * @return Province The state/province.
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置The state/province.
                     * @param Province The state/province.
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Country name
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * The continent.
                     */
                    std::string m_continent;
                    bool m_continentHasBeenSet;

                    /**
                     * The state/province.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_GEOIP_H_
