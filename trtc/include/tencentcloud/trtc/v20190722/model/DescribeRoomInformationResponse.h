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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RoomState.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeRoomInformation response structure.
                */
                class DescribeRoomInformationResponse : public AbstractModel
                {
                public:
                    DescribeRoomInformationResponse();
                    ~DescribeRoomInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of data entries displayed on the current page
                     * @return Total Total number of data entries displayed on the current page
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Room information list
                     * @return RoomList Room information list
                     */
                    std::vector<RoomState> GetRoomList() const;

                    /**
                     * 判断参数 RoomList 是否已赋值
                     * @return RoomList 是否已赋值
                     */
                    bool RoomListHasBeenSet() const;

                private:

                    /**
                     * Total number of data entries displayed on the current page
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Room information list
                     */
                    std::vector<RoomState> m_roomList;
                    bool m_roomListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONRESPONSE_H_
