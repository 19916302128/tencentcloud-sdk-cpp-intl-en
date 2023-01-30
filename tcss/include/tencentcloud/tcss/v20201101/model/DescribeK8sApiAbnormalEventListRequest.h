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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeK8sApiAbnormalEventList request structure.
                */
                class DescribeK8sApiAbnormalEventListRequest : public AbstractModel
                {
                public:
                    DescribeK8sApiAbnormalEventListRequest();
                    ~DescribeK8sApiAbnormalEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters.
<li>TimeRange - String - Optional - Time range. Example: ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>`MatchRules` - String - Optional - Hit rule</li>
<li>`RiskLevel` - String - Optional - Threat level</li>
<li>`Status` - String - Optional - Event status</li>
<li>`MatchRuleType` - String - Optional - Hit rule type</li>
<li>`ClusterRunningStatus` - String - Optional - Cluster running status</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`ClusterID` - String - Optional - Cluster ID</li>
                     * @return Filters Filters.
<li>TimeRange - String - Optional - Time range. Example: ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>`MatchRules` - String - Optional - Hit rule</li>
<li>`RiskLevel` - String - Optional - Threat level</li>
<li>`Status` - String - Optional - Event status</li>
<li>`MatchRuleType` - String - Optional - Hit rule type</li>
<li>`ClusterRunningStatus` - String - Optional - Cluster running status</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`ClusterID` - String - Optional - Cluster ID</li>
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filters.
<li>TimeRange - String - Optional - Time range. Example: ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>`MatchRules` - String - Optional - Hit rule</li>
<li>`RiskLevel` - String - Optional - Threat level</li>
<li>`Status` - String - Optional - Event status</li>
<li>`MatchRuleType` - String - Optional - Hit rule type</li>
<li>`ClusterRunningStatus` - String - Optional - Cluster running status</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`ClusterID` - String - Optional - Cluster ID</li>
                     * @param Filters Filters.
<li>TimeRange - String - Optional - Time range. Example: ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>`MatchRules` - String - Optional - Hit rule</li>
<li>`RiskLevel` - String - Optional - Threat level</li>
<li>`Status` - String - Optional - Event status</li>
<li>`MatchRuleType` - String - Optional - Hit rule type</li>
<li>`ClusterRunningStatus` - String - Optional - Cluster running status</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`ClusterID` - String - Optional - Cluster ID</li>
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The number of results returned. Default value: 10. Maximum value: 100.
                     * @return Limit The number of results returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results returned. Default value: 10. Maximum value: 100.
                     * @param Limit The number of results returned. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param Offset Offset. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort order
                     * @return Order Sort order
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order
                     * @param Order Sort order
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field
`LatestFoundTime`: Last creation time
`AlarmCount`: Number of alarms
                     * @return By Sorting field
`LatestFoundTime`: Last creation time
`AlarmCount`: Number of alarms
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
`LatestFoundTime`: Last creation time
`AlarmCount`: Number of alarms
                     * @param By Sorting field
`LatestFoundTime`: Last creation time
`AlarmCount`: Number of alarms
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filters.
<li>TimeRange - String - Optional - Time range. Example: ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>`MatchRules` - String - Optional - Hit rule</li>
<li>`RiskLevel` - String - Optional - Threat level</li>
<li>`Status` - String - Optional - Event status</li>
<li>`MatchRuleType` - String - Optional - Hit rule type</li>
<li>`ClusterRunningStatus` - String - Optional - Cluster running status</li>
<li>`ClusterName` - String - Optional - Cluster name</li>
<li>`ClusterID` - String - Optional - Cluster ID</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The number of results returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field
`LatestFoundTime`: Last creation time
`AlarmCount`: Number of alarms
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
