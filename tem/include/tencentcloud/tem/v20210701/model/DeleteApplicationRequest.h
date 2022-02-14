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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DeleteApplication request structure.
                */
                class DeleteApplicationRequest : public AbstractModel
                {
                public:
                    DeleteApplicationRequest();
                    ~DeleteApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ApplicationId Service ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Service ID
                     * @param ApplicationId Service ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Retain as default
                     * @return SourceChannel Retain as default
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Retain as default
                     * @param SourceChannel Retain as default
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Whether to delete this application automatically when there is no running version.
                     * @return DeleteApplicationIfNoRunningVersion Whether to delete this application automatically when there is no running version.
                     */
                    bool GetDeleteApplicationIfNoRunningVersion() const;

                    /**
                     * 设置Whether to delete this application automatically when there is no running version.
                     * @param DeleteApplicationIfNoRunningVersion Whether to delete this application automatically when there is no running version.
                     */
                    void SetDeleteApplicationIfNoRunningVersion(const bool& _deleteApplicationIfNoRunningVersion);

                    /**
                     * 判断参数 DeleteApplicationIfNoRunningVersion 是否已赋值
                     * @return DeleteApplicationIfNoRunningVersion 是否已赋值
                     */
                    bool DeleteApplicationIfNoRunningVersionHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Retain as default
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Whether to delete this application automatically when there is no running version.
                     */
                    bool m_deleteApplicationIfNoRunningVersion;
                    bool m_deleteApplicationIfNoRunningVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_
