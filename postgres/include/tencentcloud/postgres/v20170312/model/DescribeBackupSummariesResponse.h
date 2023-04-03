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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/BackupSummary.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupSummaries response structure.
                */
                class DescribeBackupSummariesResponse : public AbstractModel
                {
                public:
                    DescribeBackupSummariesResponse();
                    ~DescribeBackupSummariesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup statistics list.
                     * @return BackupSummarySet Backup statistics list.
                     */
                    std::vector<BackupSummary> GetBackupSummarySet() const;

                    /**
                     * 判断参数 BackupSummarySet 是否已赋值
                     * @return BackupSummarySet 是否已赋值
                     */
                    bool BackupSummarySetHasBeenSet() const;

                    /**
                     * 获取Number of all queried backups.
                     * @return TotalCount Number of all queried backups.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Backup statistics list.
                     */
                    std::vector<BackupSummary> m_backupSummarySet;
                    bool m_backupSummarySetHasBeenSet;

                    /**
                     * Number of all queried backups.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPSUMMARIESRESPONSE_H_
