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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DeleteStreamPackageLinearAssemblyChannels request structure.
                */
                class DeleteStreamPackageLinearAssemblyChannelsRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageLinearAssemblyChannelsRequest();
                    ~DeleteStreamPackageLinearAssemblyChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of channel ids.
                     * @return Ids List of channel ids.
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置List of channel ids.
                     * @param _ids List of channel ids.
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * List of channel ids.
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_
