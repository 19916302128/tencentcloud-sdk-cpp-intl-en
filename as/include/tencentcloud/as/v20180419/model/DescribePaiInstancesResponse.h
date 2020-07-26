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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/PaiInstance.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribePaiInstances response structure.
                */
                class DescribePaiInstancesResponse : public AbstractModel
                {
                public:
                    DescribePaiInstancesResponse();
                    ~DescribePaiInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Number of eligible PAI instances
                     * @return TotalCount Number of eligible PAI instances
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取PAI instance details
                     * @return PaiInstanceSet PAI instance details
                     */
                    std::vector<PaiInstance> GetPaiInstanceSet() const;

                    /**
                     * 判断参数 PaiInstanceSet 是否已赋值
                     * @return PaiInstanceSet 是否已赋值
                     */
                    bool PaiInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible PAI instances
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * PAI instance details
                     */
                    std::vector<PaiInstance> m_paiInstanceSet;
                    bool m_paiInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESRESPONSE_H_
