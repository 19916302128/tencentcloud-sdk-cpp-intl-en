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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_

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
                * DescribeBackupUrl response structure.
                */
                class DescribeBackupUrlResponse : public AbstractModel
                {
                public:
                    DescribeBackupUrlResponse();
                    ~DescribeBackupUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Download address on the public network (valid for 6 hours)
                     * @return DownloadUrl Download address on the public network (valid for 6 hours)
                     */
                    std::vector<std::string> GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Download address on the private network (valid for 6 hours)
                     * @return InnerDownloadUrl Download address on the private network (valid for 6 hours)
                     */
                    std::vector<std::string> GetInnerDownloadUrl() const;

                    /**
                     * 判断参数 InnerDownloadUrl 是否已赋值
                     * @return InnerDownloadUrl 是否已赋值
                     */
                    bool InnerDownloadUrlHasBeenSet() const;

                private:

                    /**
                     * Download address on the public network (valid for 6 hours)
                     */
                    std::vector<std::string> m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Download address on the private network (valid for 6 hours)
                     */
                    std::vector<std::string> m_innerDownloadUrl;
                    bool m_innerDownloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
