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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeCheckItemList request structure.
                */
                class DescribeCheckItemListRequest : public AbstractModel
                {
                public:
                    DescribeCheckItemListRequest();
                    ~DescribeCheckItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of records per query
                     * @return Limit Maximum number of records per query
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of records per query
                     * @param Limit Maximum number of records per query
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Name. Valid values: `risk_level` (risk level); `risk_target` (check target and risky target); `risk_type` (risk type); `risk_attri` (risk type of the check item).
                     * @return Filters Name. Valid values: `risk_level` (risk level); `risk_target` (check target and risky target); `risk_type` (risk type); `risk_attri` (risk type of the check item).
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Name. Valid values: `risk_level` (risk level); `risk_target` (check target and risky target); `risk_type` (risk type); `risk_attri` (risk type of the check item).
                     * @param Filters Name. Valid values: `risk_level` (risk level); `risk_target` (check target and risky target); `risk_type` (risk type); `risk_attri` (risk type of the check item).
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of records per query
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name. Valid values: `risk_level` (risk level); `risk_target` (check target and risky target); `risk_type` (risk type); `risk_attri` (risk type of the check item).
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_
