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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAllStreamPlayInfoList request structure.
                */
                class DescribeAllStreamPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeAllStreamPlayInfoListRequest();
                    ~DescribeAllStreamPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The time point to query in the format of “yyyy-mm-dd HH:MM:00”(accurate to the minute). You can query data from the last month. Because there is a five-minute delay in the data, if you want to get the latest data, we recommend you pass in a time point five minutes earlier than the current time.
                     * @return QueryTime The time point to query in the format of “yyyy-mm-dd HH:MM:00”(accurate to the minute). You can query data from the last month. Because there is a five-minute delay in the data, if you want to get the latest data, we recommend you pass in a time point five minutes earlier than the current time.
                     */
                    std::string GetQueryTime() const;

                    /**
                     * 设置The time point to query in the format of “yyyy-mm-dd HH:MM:00”(accurate to the minute). You can query data from the last month. Because there is a five-minute delay in the data, if you want to get the latest data, we recommend you pass in a time point five minutes earlier than the current time.
                     * @param QueryTime The time point to query in the format of “yyyy-mm-dd HH:MM:00”(accurate to the minute). You can query data from the last month. Because there is a five-minute delay in the data, if you want to get the latest data, we recommend you pass in a time point five minutes earlier than the current time.
                     */
                    void SetQueryTime(const std::string& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取The playback domains to query. If you leave this empty, all playback domains will be queried.
                     * @return PlayDomains The playback domains to query. If you leave this empty, all playback domains will be queried.
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置The playback domains to query. If you leave this empty, all playback domains will be queried.
                     * @param PlayDomains The playback domains to query. If you leave this empty, all playback domains will be queried.
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                private:

                    /**
                     * The time point to query in the format of “yyyy-mm-dd HH:MM:00”(accurate to the minute). You can query data from the last month. Because there is a five-minute delay in the data, if you want to get the latest data, we recommend you pass in a time point five minutes earlier than the current time.
                     */
                    std::string m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * The playback domains to query. If you leave this empty, all playback domains will be queried.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_
