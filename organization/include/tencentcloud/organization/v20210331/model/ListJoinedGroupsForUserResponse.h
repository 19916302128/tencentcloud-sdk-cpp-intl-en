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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTJOINEDGROUPSFORUSERRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTJOINEDGROUPSFORUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/JoinedGroups.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListJoinedGroupsForUser response structure.
                */
                class ListJoinedGroupsForUserResponse : public AbstractModel
                {
                public:
                    ListJoinedGroupsForUserResponse();
                    ~ListJoinedGroupsForUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token for querying the next page of returned results. Note: This parameter is displayed only when IsTruncated is true.
                     * @return NextToken Token for querying the next page of returned results. Note: This parameter is displayed only when IsTruncated is true.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Total number of data entries that meet the request parameter conditions.
                     * @return TotalCounts Total number of data entries that meet the request parameter conditions.
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取Maximum number of data entries per page.
                     * @return MaxResults Maximum number of data entries per page.
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Whether the returned result is truncated. Valid values: true: truncated; false: not truncated.
                     * @return IsTruncated Whether the returned result is truncated. Valid values: true: truncated; false: not truncated.
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                    /**
                     * 获取List of user groups joined by the user.
                     * @return JoinedGroups List of user groups joined by the user.
                     * 
                     */
                    std::vector<JoinedGroups> GetJoinedGroups() const;

                    /**
                     * 判断参数 JoinedGroups 是否已赋值
                     * @return JoinedGroups 是否已赋值
                     * 
                     */
                    bool JoinedGroupsHasBeenSet() const;

                private:

                    /**
                     * Token for querying the next page of returned results. Note: This parameter is displayed only when IsTruncated is true.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Total number of data entries that meet the request parameter conditions.
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * Maximum number of data entries per page.
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Whether the returned result is truncated. Valid values: true: truncated; false: not truncated.
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * List of user groups joined by the user.
                     */
                    std::vector<JoinedGroups> m_joinedGroups;
                    bool m_joinedGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTJOINEDGROUPSFORUSERRESPONSE_H_
