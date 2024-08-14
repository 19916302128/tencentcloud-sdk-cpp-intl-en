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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * UpdateStreamIngest request structure.
                */
                class UpdateStreamIngestRequest : public AbstractModel
                {
                public:
                    UpdateStreamIngestRequest();
                    ~UpdateStreamIngestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppId of TRTC should be the same as the SDKAppId corresponding to the task room.
                     * @return SdkAppId The SDKAppId of TRTC should be the same as the SDKAppId corresponding to the task room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppId of TRTC should be the same as the SDKAppId corresponding to the task room.
                     * @param _sdkAppId The SDKAppId of TRTC should be the same as the SDKAppId corresponding to the task room.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The unique Id of the task, will return after successfully starting the task.
                     * @return TaskId The unique Id of the task, will return after successfully starting the task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The unique Id of the task, will return after successfully starting the task.
                     * @param _taskId The unique Id of the task, will return after successfully starting the task.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The new url of the media resource.
                     * @return StreamUrl The new url of the media resource.
                     * 
                     */
                    std::string GetStreamUrl() const;

                    /**
                     * 设置The new url of the media resource.
                     * @param _streamUrl The new url of the media resource.
                     * 
                     */
                    void SetStreamUrl(const std::string& _streamUrl);

                    /**
                     * 判断参数 StreamUrl 是否已赋值
                     * @return StreamUrl 是否已赋值
                     * 
                     */
                    bool StreamUrlHasBeenSet() const;

                private:

                    /**
                     * The SDKAppId of TRTC should be the same as the SDKAppId corresponding to the task room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The unique Id of the task, will return after successfully starting the task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The new url of the media resource.
                     */
                    std::string m_streamUrl;
                    bool m_streamUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_
