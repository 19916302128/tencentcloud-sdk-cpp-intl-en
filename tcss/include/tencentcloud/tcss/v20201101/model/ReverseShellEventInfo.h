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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTINFO_H_

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
                * Container runtime security - Information of the reverse shell
                */
                class ReverseShellEventInfo : public AbstractModel
                {
                public:
                    ReverseShellEventInfo();
                    ~ReverseShellEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Process path
                     * @return ProcessPath Process path
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
                     * @param ProcessPath Process path
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param ImageId Image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Container ID
                     * @return ContainerId Container ID
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID
                     * @param ContainerId Container ID
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

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
                     * 获取Generation time
                     * @return FoundTime Generation time
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置Generation time
                     * @param FoundTime Generation time
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取Event solution
                     * @return Solution Event solution
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Event solution
                     * @param Solution Event solution
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return Description Event description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event description
                     * @param Description Event description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_ADD_WHITE`: Allowed.
                     * @return Status Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_ADD_WHITE`: Allowed.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_ADD_WHITE`: Allowed.
                     * @param Status Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_ADD_WHITE`: Allowed.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param EventId Event ID
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param Remark Remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Parent process name
                     * @return PProcessName Parent process name
                     */
                    std::string GetPProcessName() const;

                    /**
                     * 设置Parent process name
                     * @param PProcessName Parent process name
                     */
                    void SetPProcessName(const std::string& _pProcessName);

                    /**
                     * 判断参数 PProcessName 是否已赋值
                     * @return PProcessName 是否已赋值
                     */
                    bool PProcessNameHasBeenSet() const;

                    /**
                     * 获取Number of events
                     * @return EventCount Number of events
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置Number of events
                     * @param EventCount Number of events
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Last generation time
                     * @return LatestFoundTime Last generation time
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Last generation time
                     * @param LatestFoundTime Last generation time
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取Destination address
                     * @return DstAddress Destination address
                     */
                    std::string GetDstAddress() const;

                    /**
                     * 设置Destination address
                     * @param DstAddress Destination address
                     */
                    void SetDstAddress(const std::string& _dstAddress);

                    /**
                     * 判断参数 DstAddress 是否已赋值
                     * @return DstAddress 是否已赋值
                     */
                    bool DstAddressHasBeenSet() const;

                    /**
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return ContainerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param ContainerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     * @return ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     * @param ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取Container isolation operation source
                     * @return ContainerIsolateOperationSrc Container isolation operation source
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container isolation operation source
                     * @param ContainerIsolateOperationSrc Container isolation operation source
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * @return ContainerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * @param ContainerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     */
                    bool ContainerStatusHasBeenSet() const;

                private:

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Container ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Generation time
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * Event solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_ADD_WHITE`: Allowed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Parent process name
                     */
                    std::string m_pProcessName;
                    bool m_pProcessNameHasBeenSet;

                    /**
                     * Number of events
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Last generation time
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Destination address
                     */
                    std::string m_dstAddress;
                    bool m_dstAddressHasBeenSet;

                    /**
                     * Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
	"NODE_DESTROYED"      // The node is terminated.
	"CONTAINER_EXITED"    // The container exited.
	"CONTAINER_DESTROYED" // The container was terminated.
	"SHARED_HOST"         // The container shares the network with the server.
	"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
	"UNKNOW"              // The reason is unknown.
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container isolation operation source
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLEVENTINFO_H_
