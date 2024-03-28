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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPDATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPDATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * UpdatePredictiveDialingCampaign request structure.
                */
                class UpdatePredictiveDialingCampaignRequest : public AbstractModel
                {
                public:
                    UpdatePredictiveDialingCampaignRequest();
                    ~UpdatePredictiveDialingCampaignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Generated task ID.
                     * @return CampaignId Generated task ID.
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 设置Generated task ID.
                     * @param _campaignId Generated task ID.
                     * 
                     */
                    void SetCampaignId(const int64_t& _campaignId);

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取Task Name
                     * @return Name Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task Name
                     * @param _name Task Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Called list supporting E.164 or number formats without country code.
                     * @return Callees Called list supporting E.164 or number formats without country code.
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置Called list supporting E.164 or number formats without country code.
                     * @param _callees Called list supporting E.164 or number formats without country code.
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取Calling list using the number formats displayed on the management side.
                     * @return Callers Calling list using the number formats displayed on the management side.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置Calling list using the number formats displayed on the management side.
                     * @param _callers Calling list using the number formats displayed on the management side.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Being called sequence: 0 for random 1 for in order.
                     * @return CallOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 设置Being called sequence: 0 for random 1 for in order.
                     * @param _callOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    void SetCallOrder(const int64_t& _callOrder);

                    /**
                     * 判断参数 CallOrder 是否已赋值
                     * @return CallOrder 是否已赋值
                     * 
                     */
                    bool CallOrderHasBeenSet() const;

                    /**
                     * 获取ID of the used skill group of agents.
                     * @return SkillGroupId ID of the used skill group of agents.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置ID of the used skill group of agents.
                     * @param _skillGroupId ID of the used skill group of agents.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * @return Priority Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * @param _priority Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Expected call drop rate, percentage, 5 - 50.
                     * @return ExpectedAbandonRate Expected call drop rate, percentage, 5 - 50.
                     * 
                     */
                    int64_t GetExpectedAbandonRate() const;

                    /**
                     * 设置Expected call drop rate, percentage, 5 - 50.
                     * @param _expectedAbandonRate Expected call drop rate, percentage, 5 - 50.
                     * 
                     */
                    void SetExpectedAbandonRate(const int64_t& _expectedAbandonRate);

                    /**
                     * 判断参数 ExpectedAbandonRate 是否已赋值
                     * @return ExpectedAbandonRate 是否已赋值
                     * 
                     */
                    bool ExpectedAbandonRateHasBeenSet() const;

                    /**
                     * 获取Call retry interval, in seconds, [60 - 86,400].
                     * @return RetryInterval Call retry interval, in seconds, [60 - 86,400].
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置Call retry interval, in seconds, [60 - 86,400].
                     * @param _retryInterval Call retry interval, in seconds, [60 - 86,400].
                     * 
                     */
                    void SetRetryInterval(const int64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取Task start time. Unix timestamp. The task will automatically start after this time.
                     * @return StartTime Task start time. Unix timestamp. The task will automatically start after this time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Task start time. Unix timestamp. The task will automatically start after this time.
                     * @param _startTime Task start time. Unix timestamp. The task will automatically start after this time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task termination time. Unix timestamp. The task will automatically terminate after this time.
                     * @return EndTime Task termination time. Unix timestamp. The task will automatically terminate after this time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Task termination time. Unix timestamp. The task will automatically terminate after this time.
                     * @param _endTime Task termination time. Unix timestamp. The task will automatically terminate after this time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specified IVR ID.
                     * @return IVRId Specified IVR ID.
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 设置Specified IVR ID.
                     * @param _iVRId Specified IVR ID.
                     * 
                     */
                    void SetIVRId(const int64_t& _iVRId);

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取Number of call retries, 0 - 2.
                     * @return RetryTimes Number of call retries, 0 - 2.
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置Number of call retries, 0 - 2.
                     * @param _retryTimes Number of call retries, 0 - 2.
                     * 
                     */
                    void SetRetryTimes(const int64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                private:

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Generated task ID.
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Called list supporting E.164 or number formats without country code.
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * Calling list using the number formats displayed on the management side.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Being called sequence: 0 for random 1 for in order.
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * ID of the used skill group of agents.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Running priority of multiple tasks in the same application, from high to low 1 - 5.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Expected call drop rate, percentage, 5 - 50.
                     */
                    int64_t m_expectedAbandonRate;
                    bool m_expectedAbandonRateHasBeenSet;

                    /**
                     * Call retry interval, in seconds, [60 - 86,400].
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * Task start time. Unix timestamp. The task will automatically start after this time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task termination time. Unix timestamp. The task will automatically terminate after this time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specified IVR ID.
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * Number of call retries, 0 - 2.
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPDATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_
