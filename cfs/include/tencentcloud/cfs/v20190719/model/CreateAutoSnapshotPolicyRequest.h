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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateAutoSnapshotPolicy request structure.
                */
                class CreateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    CreateAutoSnapshotPolicyRequest();
                    ~CreateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The day of the week on which to repeat the snapshot operation
                     * @return DayOfWeek The day of the week on which to repeat the snapshot operation
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置The day of the week on which to repeat the snapshot operation
                     * @param DayOfWeek The day of the week on which to repeat the snapshot operation
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取The time point when to repeat the snapshot operation
                     * @return Hour The time point when to repeat the snapshot operation
                     */
                    std::string GetHour() const;

                    /**
                     * 设置The time point when to repeat the snapshot operation
                     * @param Hour The time point when to repeat the snapshot operation
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param PolicyName Policy name
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Snapshot retention period
                     * @return AliveDays Snapshot retention period
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置Snapshot retention period
                     * @param AliveDays Snapshot retention period
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     */
                    bool AliveDaysHasBeenSet() const;

                private:

                    /**
                     * The day of the week on which to repeat the snapshot operation
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * The time point when to repeat the snapshot operation
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Snapshot retention period
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
