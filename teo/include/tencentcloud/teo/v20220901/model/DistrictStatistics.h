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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DISTRICTSTATISTICS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DISTRICTSTATISTICS_H_

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
                * The site’s load speed across regions
                */
                class DistrictStatistics : public AbstractModel
                {
                public:
                    DistrictStatistics();
                    ~DistrictStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ISO 3166-2 Alpha-2 country code. For the list of country codes, see [ISO 3166-2](https://zh.m.wikipedia.org/zh-hans/ISO_3166-2).
                     * @return Alpha2 The ISO 3166-2 Alpha-2 country code. For the list of country codes, see [ISO 3166-2](https://zh.m.wikipedia.org/zh-hans/ISO_3166-2).
                     * 
                     */
                    std::string GetAlpha2() const;

                    /**
                     * 设置The ISO 3166-2 Alpha-2 country code. For the list of country codes, see [ISO 3166-2](https://zh.m.wikipedia.org/zh-hans/ISO_3166-2).
                     * @param _alpha2 The ISO 3166-2 Alpha-2 country code. For the list of country codes, see [ISO 3166-2](https://zh.m.wikipedia.org/zh-hans/ISO_3166-2).
                     * 
                     */
                    void SetAlpha2(const std::string& _alpha2);

                    /**
                     * 判断参数 Alpha2 是否已赋值
                     * @return Alpha2 是否已赋值
                     * 
                     */
                    bool Alpha2HasBeenSet() const;

                    /**
                     * 获取The overall load time, in milliseconds.
                     * @return LoadTime The overall load time, in milliseconds.
                     * 
                     */
                    int64_t GetLoadTime() const;

                    /**
                     * 设置The overall load time, in milliseconds.
                     * @param _loadTime The overall load time, in milliseconds.
                     * 
                     */
                    void SetLoadTime(const int64_t& _loadTime);

                    /**
                     * 判断参数 LoadTime 是否已赋值
                     * @return LoadTime 是否已赋值
                     * 
                     */
                    bool LoadTimeHasBeenSet() const;

                private:

                    /**
                     * The ISO 3166-2 Alpha-2 country code. For the list of country codes, see [ISO 3166-2](https://zh.m.wikipedia.org/zh-hans/ISO_3166-2).
                     */
                    std::string m_alpha2;
                    bool m_alpha2HasBeenSet;

                    /**
                     * The overall load time, in milliseconds.
                     */
                    int64_t m_loadTime;
                    bool m_loadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DISTRICTSTATISTICS_H_
