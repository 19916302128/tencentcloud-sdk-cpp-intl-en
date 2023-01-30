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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * List of ports
                */
                class PortInfo : public AbstractModel
                {
                public:
                    PortInfo();
                    ~PortInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type
                     * @return Type Type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
                     * @param Type Type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIP Public IP
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP
                     * @param PublicIP Public IP
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取Server port
                     * @return PublicPort Server port
                     */
                    uint64_t GetPublicPort() const;

                    /**
                     * 设置Server port
                     * @param PublicPort Server port
                     */
                    void SetPublicPort(const uint64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取Container port
                     * @return ContainerPort Container port
                     */
                    uint64_t GetContainerPort() const;

                    /**
                     * 设置Container port
                     * @param ContainerPort Container port
                     */
                    void SetContainerPort(const uint64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取Container PID
                     * @return ContainerPID Container PID
                     */
                    uint64_t GetContainerPID() const;

                    /**
                     * 设置Container PID
                     * @param ContainerPID Container PID
                     */
                    void SetContainerPID(const uint64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param ContainerName Container name
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param HostID Server ID
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
                     * @param HostIP Server IP
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param ProcessName Process name
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Monitored address in the container
                     * @return ListenContainer Monitored address in the container
                     */
                    std::string GetListenContainer() const;

                    /**
                     * 设置Monitored address in the container
                     * @param ListenContainer Monitored address in the container
                     */
                    void SetListenContainer(const std::string& _listenContainer);

                    /**
                     * 判断参数 ListenContainer 是否已赋值
                     * @return ListenContainer 是否已赋值
                     */
                    bool ListenContainerHasBeenSet() const;

                    /**
                     * 获取Monitored address outside the container
                     * @return ListenHost Monitored address outside the container
                     */
                    std::string GetListenHost() const;

                    /**
                     * 设置Monitored address outside the container
                     * @param ListenHost Monitored address outside the container
                     */
                    void SetListenHost(const std::string& _listenHost);

                    /**
                     * 判断参数 ListenHost 是否已赋值
                     * @return ListenHost 是否已赋值
                     */
                    bool ListenHostHasBeenSet() const;

                    /**
                     * 获取Operating account
                     * @return RunAs Operating account
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Operating account
                     * @param RunAs Operating account
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return HostName Server name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param HostName Server name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param PublicIp Public IP
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Server port
                     */
                    uint64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * Container port
                     */
                    uint64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * Container PID
                     */
                    uint64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Monitored address in the container
                     */
                    std::string m_listenContainer;
                    bool m_listenContainerHasBeenSet;

                    /**
                     * Monitored address outside the container
                     */
                    std::string m_listenHost;
                    bool m_listenHostHasBeenSet;

                    /**
                     * Operating account
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_
