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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSGEOIP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSGEOIP_H_

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
                * DDoS regional blocking
                */
                class DDoSGeoIp : public AbstractModel
                {
                public:
                    DDoSGeoIp();
                    ~DDoSGeoIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to clear the blocklist of the region. Values:
<li>`off`: Clear the blocklist of the region.</li>
<li>`on`: Perform no operations.</li>
                     * @return Switch Whether to clear the blocklist of the region. Values:
<li>`off`: Clear the blocklist of the region.</li>
<li>`on`: Perform no operations.</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to clear the blocklist of the region. Values:
<li>`off`: Clear the blocklist of the region.</li>
<li>`on`: Perform no operations.</li>
                     * @param Switch Whether to clear the blocklist of the region. Values:
<li>`off`: Clear the blocklist of the region.</li>
<li>`on`: Perform no operations.</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Region information. For more information on the ID, see [DescribeSecurityPolicyRegions](https://tcloud4api.woa.com/document/product/1657/81247?!preview&!document=1).
                     * @return RegionIds Region information. For more information on the ID, see [DescribeSecurityPolicyRegions](https://tcloud4api.woa.com/document/product/1657/81247?!preview&!document=1).
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置Region information. For more information on the ID, see [DescribeSecurityPolicyRegions](https://tcloud4api.woa.com/document/product/1657/81247?!preview&!document=1).
                     * @param RegionIds Region information. For more information on the ID, see [DescribeSecurityPolicyRegions](https://tcloud4api.woa.com/document/product/1657/81247?!preview&!document=1).
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     */
                    bool RegionIdsHasBeenSet() const;

                private:

                    /**
                     * Whether to clear the blocklist of the region. Values:
<li>`off`: Clear the blocklist of the region.</li>
<li>`on`: Perform no operations.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Region information. For more information on the ID, see [DescribeSecurityPolicyRegions](https://tcloud4api.woa.com/document/product/1657/81247?!preview&!document=1).
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSGEOIP_H_
