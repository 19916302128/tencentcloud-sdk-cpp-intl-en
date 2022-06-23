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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeAutoBackupConfig response structure.
                */
                class DescribeAutoBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeAutoBackupConfigResponse();
                    ~DescribeAutoBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup type. Auto backup type: 1 "scheduled rollback"
                     * @return AutoBackupType Backup type. Auto backup type: 1 "scheduled rollback"
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                    /**
                     * 获取Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.
                     * @return WeekDays Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取Time period.
                     * @return TimePeriod Time period.
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     */
                    bool TimePeriodHasBeenSet() const;

                private:

                    /**
                     * Backup type. Auto backup type: 1 "scheduled rollback"
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * Time period.
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
