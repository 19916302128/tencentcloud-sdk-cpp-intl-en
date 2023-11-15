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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeScanTaskList request structure.
                */
                class DescribeScanTaskListRequest : public AbstractModel
                {
                public:
                    DescribeScanTaskListRequest();
                    ~DescribeScanTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter conditions
                     * @return Filter Filter conditions
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filter conditions
                     * @param _filter Filter conditions
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Tags
                     * @return Tags Tags
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tags
                     * @param _tags Tags
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Filter conditions
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Tags
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTREQUEST_H_
