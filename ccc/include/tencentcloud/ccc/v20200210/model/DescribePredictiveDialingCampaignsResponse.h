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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePredictiveDialingCampaigns response structure.
                */
                class DescribePredictiveDialingCampaignsResponse : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignsResponse();
                    ~DescribePredictiveDialingCampaignsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total data volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total data volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CampaignList Data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribePredictiveDialingCampaignsElement> GetCampaignList() const;

                    /**
                     * 判断参数 CampaignList 是否已赋值
                     * @return CampaignList 是否已赋值
                     * 
                     */
                    bool CampaignListHasBeenSet() const;

                private:

                    /**
                     * Total data volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribePredictiveDialingCampaignsElement> m_campaignList;
                    bool m_campaignListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSRESPONSE_H_
