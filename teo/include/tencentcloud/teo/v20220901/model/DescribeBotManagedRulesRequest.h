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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBotManagedRules request structure.
                */
                class DescribeBotManagedRulesRequest : public AbstractModel
                {
                public:
                    DescribeBotManagedRulesRequest();
                    ~DescribeBotManagedRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The subdomain name.
                     * @return Entity The subdomain name.
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name.
                     * @param Entity The subdomain name.
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取The page offset. Default value: 0
                     * @return Offset The page offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0
                     * @param Offset The page offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The rule type. Values:
<li>`idcid`</li>
<li>`sipbot`</li>
<li>`uabot`</li>If no value or 0 is passed, all rule types will be selected.
                     * @return RuleType The rule type. Values:
<li>`idcid`</li>
<li>`sipbot`</li>
<li>`uabot`</li>If no value or 0 is passed, all rule types will be selected.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置The rule type. Values:
<li>`idcid`</li>
<li>`sipbot`</li>
<li>`uabot`</li>If no value or 0 is passed, all rule types will be selected.
                     * @param RuleType The rule type. Values:
<li>`idcid`</li>
<li>`sipbot`</li>
<li>`uabot`</li>If no value or 0 is passed, all rule types will be selected.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * The page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The rule type. Values:
<li>`idcid`</li>
<li>`sipbot`</li>
<li>`uabot`</li>If no value or 0 is passed, all rule types will be selected.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_
