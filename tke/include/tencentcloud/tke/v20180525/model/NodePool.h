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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/NodeCountSummary.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Node pool description
                */
                class NodePool : public AbstractModel
                {
                public:
                    NodePool();
                    ~NodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node pool ID
                     * @return NodePoolId Node pool ID
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool ID
                     * @param NodePoolId Node pool ID
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Node pool name
                     * @return Name Node pool name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node pool name
                     * @param Name Node pool name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Cluster instance ID
                     * @return ClusterInstanceId Cluster instance ID
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param ClusterInstanceId Cluster instance ID
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                    /**
                     * 获取The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * @return LifeState The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * @param LifeState The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID
                     * @return LaunchConfigurationId Launch configuration ID
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID
                     * @param LaunchConfigurationId Launch configuration ID
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Auto-scaling group ID
                     * @return AutoscalingGroupId Auto-scaling group ID
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置Auto-scaling group ID
                     * @param AutoscalingGroupId Auto-scaling group ID
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Labels
                     * @return Labels Labels
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels
                     * @param Labels Labels
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Array of taint
                     * @return Taints Array of taint
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Array of taint
                     * @param Taints Array of taint
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Node list
                     * @return NodeCountSummary Node list
                     */
                    NodeCountSummary GetNodeCountSummary() const;

                    /**
                     * 设置Node list
                     * @param NodeCountSummary Node list
                     */
                    void SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary);

                    /**
                     * 判断参数 NodeCountSummary 是否已赋值
                     * @return NodeCountSummary 是否已赋值
                     */
                    bool NodeCountSummaryHasBeenSet() const;

                    /**
                     * 获取
                     * @return AutoscalingGroupStatus 
                     */
                    std::string GetAutoscalingGroupStatus() const;

                    /**
                     * 设置
                     * @param AutoscalingGroupStatus 
                     */
                    void SetAutoscalingGroupStatus(const std::string& _autoscalingGroupStatus);

                    /**
                     * 判断参数 AutoscalingGroupStatus 是否已赋值
                     * @return AutoscalingGroupStatus 是否已赋值
                     */
                    bool AutoscalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MaxNodesNum Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param MaxNodesNum Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MinNodesNum Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param MinNodesNum Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DesiredNodesNum Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t GetDesiredNodesNum() const;

                    /**
                     * 设置Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param DesiredNodesNum Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetDesiredNodesNum(const int64_t& _desiredNodesNum);

                    /**
                     * 判断参数 DesiredNodesNum 是否已赋值
                     * @return DesiredNodesNum 是否已赋值
                     */
                    bool DesiredNodesNumHasBeenSet() const;

                    /**
                     * 获取The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return NodePoolOs The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param NodePoolOs The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ImageId Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param ImageId Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DesiredPodNum This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t GetDesiredPodNum() const;

                    /**
                     * 设置This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param DesiredPodNum This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetDesiredPodNum(const int64_t& _desiredPodNum);

                    /**
                     * 判断参数 DesiredPodNum 是否已赋值
                     * @return DesiredPodNum 是否已赋值
                     */
                    bool DesiredPodNumHasBeenSet() const;

                    /**
                     * 获取Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return UserScript Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param UserScript Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Tags Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeletionProtection Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DeletionProtection Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cluster instance ID
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Launch configuration ID
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Auto-scaling group ID
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Array of taint
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Node list
                     */
                    NodeCountSummary m_nodeCountSummary;
                    bool m_nodeCountSummaryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_autoscalingGroupStatus;
                    bool m_autoscalingGroupStatusHasBeenSet;

                    /**
                     * Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_desiredNodesNum;
                    bool m_desiredNodesNumHasBeenSet;

                    /**
                     * The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_desiredPodNum;
                    bool m_desiredPodNumHasBeenSet;

                    /**
                     * Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
