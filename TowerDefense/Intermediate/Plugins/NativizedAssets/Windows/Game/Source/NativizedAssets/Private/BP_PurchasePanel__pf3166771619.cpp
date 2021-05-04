#include "NativizedAssets.h"
#include "BP_PurchasePanel__pf3166771619.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/UniformGridPanel.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "TowerDefense/TowerDefenseGameMode.h"
#include "TowerDefense/DefaultEnemy.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "TowerDefense/EnemyAIController.h"
#include "TowerDefense/TowerDefensePlayerController.h"
#include "TowerDefense/TowerDefensePlayerPawn.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "TowerDefense/DefaultTower.h"
#include "TowerDefense/DefaultProjectile.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Sound/SoundNode.h"
#include "TowerDefense/DefaultGridTile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBP_PurchasePanel_C__pf3166771619::UBP_PurchasePanel_C__pf3166771619(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	TowerClasses = TArray<TSubclassOf<ADefaultTower> > ();
	TowerClasses.Reserve(4);
	TowerClasses.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	TowerClasses.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	TowerClasses.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	TowerClasses.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_PurchasePanel_C__pf3166771619::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_PurchasePanel_C__pf3166771619::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_12"), (EObjectFlags)0x00280008);
	__Local__1->WidthOverride = 385.000000f;
	__Local__1->HeightOverride = 800.000000f;
	__Local__1->bOverride_WidthOverride = true;
	__Local__1->bOverride_HeightOverride = true;
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<USizeBoxSlot>(__Local__1, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UBorder>(__Local__0, TEXT("Border_29"), (EObjectFlags)0x00280008);
	__Local__4->Padding.Left = 0.000000f;
	__Local__4->Padding.Top = 0.000000f;
	__Local__4->Padding.Right = 0.000000f;
	__Local__4->Padding.Bottom = 0.000000f;
	__Local__4->Background.ImageSize = FVector2D(92.000000, 92.000000);
	__Local__4->Background.Margin.Left = 0.010000f;
	__Local__4->Background.Margin.Top = 0.010000f;
	__Local__4->Background.Margin.Right = 0.010000f;
	__Local__4->Background.Margin.Bottom = 0.010000f;
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.024158, 0.034340, 0.042311, 1.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__4->Background), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UBorderSlot>(__Local__4, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<FMargin >((__Local__8), UBorderSlot::__PPO__Padding() )));
	__Local__9.Left = 0.000000f;
	__Local__9.Top = 0.000000f;
	__Local__9.Right = 0.000000f;
	__Local__9.Bottom = 0.000000f;
	__Local__8->Parent = __Local__4;
	auto __Local__10 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_29"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(3);
	auto __Local__12 = NewObject<UVerticalBoxSlot>(__Local__10, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__12->Size.Value = 0.100000f;
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_760"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(3);
	auto __Local__15 = NewObject<UOverlaySlot>(__Local__13, TEXT("OverlaySlot_4018"), (EObjectFlags)0x00280008);
	__Local__15->Padding.Left = 50.000000f;
	__Local__15->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__16->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"E71961324AA18D16448E8FBC99950AE9\", \"Store\")")	);
	__Local__16->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__16->Font.OutlineSettings.OutlineSize = 5;
	__Local__16->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__16->Font.Size = 36;
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__17 = NewObject<UOverlaySlot>(__Local__13, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__17->Padding.Right = 25.000000f;
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__17->Parent = __Local__13;
	auto __Local__18 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_87"), (EObjectFlags)0x00280008);
	__Local__18->WidthOverride = 45.000000f;
	__Local__18->HeightOverride = 45.000000f;
	__Local__18->bOverride_WidthOverride = true;
	__Local__18->bOverride_HeightOverride = true;
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<USizeBoxSlot>(__Local__18, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UButton>(__Local__0, TEXT("CloseMenuButton"), (EObjectFlags)0x00280008);
	__Local__21->WidgetStyle.Normal.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__22 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__21->WidgetStyle.Hovered.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(0.520996, 0.545724, 0.577580, 1.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__21->WidgetStyle.Pressed.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.084376, 0.086500, 0.090842, 1.000000);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__21->WidgetStyle.Disabled.ImageSize = FVector2D(256.000000, 256.000000);
	__Local__21->WidgetStyle.Disabled.Margin.Left = 0.250000f;
	__Local__21->WidgetStyle.Disabled.Margin.Top = 0.250000f;
	__Local__21->WidgetStyle.Disabled.Margin.Right = 0.250000f;
	__Local__21->WidgetStyle.Disabled.Margin.Bottom = 0.250000f;
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.015996, 0.024158, 0.033105, 1.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__21->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(1);
	auto __Local__31 = NewObject<UButtonSlot>(__Local__21, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__31->Padding.Left = 10.000000f;
	__Local__31->Padding.Top = 10.000000f;
	__Local__31->Padding.Right = 10.000000f;
	__Local__31->Padding.Bottom = 10.000000f;
	__Local__31->Parent = __Local__21;
	auto __Local__32 = NewObject<UImage>(__Local__0, TEXT("Image_77"), (EObjectFlags)0x00280008);
	__Local__32->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__32->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__33 = FLinearColor(0.182292, 0.182292, 0.182292, 1.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__32->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__32->Slot = __Local__31;
	__Local__32->bIsVariable = false;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__14.Add(__Local__17);
	auto __Local__35 = NewObject<UOverlaySlot>(__Local__13, TEXT("OverlaySlot_4345"), (EObjectFlags)0x00280008);
	__Local__35->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__35->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__35->Parent = __Local__13;
	auto __Local__36 = NewObject<UImage>(__Local__0, TEXT("Separator"), (EObjectFlags)0x00280008);
	__Local__36->Brush.ImageSize = FVector2D(1291.000000, 2.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__36->ColorAndOpacity = FLinearColor(1.000000, 0.005000, 0.000000, 1.000000);
	__Local__36->Slot = __Local__35;
	__Local__36->bIsVariable = false;
	__Local__35->Content = __Local__36;
	__Local__14.Add(__Local__35);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__38 = NewObject<UVerticalBoxSlot>(__Local__10, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__38->Size.Value = 0.400000f;
	__Local__38->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__38->Padding.Top = 10.000000f;
	__Local__38->Parent = __Local__10;
	auto __Local__39 = NewObject<UUniformGridPanel>(__Local__0, TEXT("UniformGridPanel_23"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(4);
	auto __Local__41 = NewObject<UUniformGridSlot>(__Local__39, TEXT("UniformGridSlot_0"), (EObjectFlags)0x00280008);
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UButton>(__Local__0, TEXT("BallistaButton"), (EObjectFlags)0x00280008);
	__Local__42->WidgetStyle.Normal.ImageSize = FVector2D(83.000000, 85.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__42->WidgetStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__42->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__45 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__42->WidgetStyle.Disabled.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__42), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(1);
	auto __Local__48 = NewObject<UButtonSlot>(__Local__42, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__48->Padding.Left = 0.000000f;
	__Local__48->Padding.Top = 0.000000f;
	__Local__48->Padding.Right = 0.000000f;
	__Local__48->Padding.Bottom = 0.000000f;
	__Local__48->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__48->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__48->Parent = __Local__42;
	auto __Local__49 = NewObject<UImage>(__Local__0, TEXT("BallistaImage"), (EObjectFlags)0x00280008);
	__Local__49->Brush.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	__Local__49->Slot = __Local__48;
	__Local__49->bIsVariable = false;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	auto __Local__51 = NewObject<UUniformGridSlot>(__Local__39, TEXT("UniformGridSlot_1"), (EObjectFlags)0x00280008);
	__Local__51->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__51->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__51->Column = 1;
	__Local__51->Parent = __Local__39;
	auto __Local__52 = NewObject<UButton>(__Local__0, TEXT("CatapultButton"), (EObjectFlags)0x00280008);
	__Local__52->WidgetStyle.Normal.ImageSize = FVector2D(83.000000, 85.000000);
	auto& __Local__53 = (*(AccessPrivateProperty<UObject* >(&(__Local__52->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__53 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__52->WidgetStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__54 = (*(AccessPrivateProperty<UObject* >(&(__Local__52->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__54 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__52->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<UObject* >(&(__Local__52->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__55 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__52->WidgetStyle.Disabled.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__56 = (*(AccessPrivateProperty<UObject* >(&(__Local__52->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__56 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(1);
	auto __Local__58 = NewObject<UButtonSlot>(__Local__52, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__58->Padding.Left = 0.000000f;
	__Local__58->Padding.Top = 0.000000f;
	__Local__58->Padding.Right = 0.000000f;
	__Local__58->Padding.Bottom = 0.000000f;
	__Local__58->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__58->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__58->Parent = __Local__52;
	auto __Local__59 = NewObject<UImage>(__Local__0, TEXT("CatapultImage"), (EObjectFlags)0x00280008);
	__Local__59->Brush.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__60 = (*(AccessPrivateProperty<UObject* >(&(__Local__59->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__60 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__59->Slot = __Local__58;
	__Local__59->bIsVariable = false;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__40.Add(__Local__51);
	auto __Local__61 = NewObject<UUniformGridSlot>(__Local__39, TEXT("UniformGridSlot_2"), (EObjectFlags)0x00280008);
	__Local__61->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__61->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__61->Row = 1;
	__Local__61->Parent = __Local__39;
	auto __Local__62 = NewObject<UButton>(__Local__0, TEXT("CannonButton"), (EObjectFlags)0x00280008);
	__Local__62->WidgetStyle.Normal.ImageSize = FVector2D(83.000000, 85.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<UObject* >(&(__Local__62->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__63 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__62->WidgetStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__62->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__62->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__65 = (*(AccessPrivateProperty<UObject* >(&(__Local__62->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__65 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__62->WidgetStyle.Disabled.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__66 = (*(AccessPrivateProperty<UObject* >(&(__Local__62->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__66 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__62), UPanelWidget::__PPO__Slots() )));
	__Local__67 = TArray<UPanelSlot*> ();
	__Local__67.Reserve(1);
	auto __Local__68 = NewObject<UButtonSlot>(__Local__62, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__68->Padding.Left = 0.000000f;
	__Local__68->Padding.Top = 0.000000f;
	__Local__68->Padding.Right = 0.000000f;
	__Local__68->Padding.Bottom = 0.000000f;
	__Local__68->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__68->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__68->Parent = __Local__62;
	auto __Local__69 = NewObject<UImage>(__Local__0, TEXT("CannonImage"), (EObjectFlags)0x00280008);
	__Local__69->Brush.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__69->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__69->Slot = __Local__68;
	__Local__69->bIsVariable = false;
	__Local__68->Content = __Local__69;
	__Local__67.Add(__Local__68);
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__40.Add(__Local__61);
	auto __Local__71 = NewObject<UUniformGridSlot>(__Local__39, TEXT("UniformGridSlot_3"), (EObjectFlags)0x00280008);
	__Local__71->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__71->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__71->Row = 1;
	__Local__71->Column = 1;
	__Local__71->Parent = __Local__39;
	auto __Local__72 = NewObject<UButton>(__Local__0, TEXT("TurretButton"), (EObjectFlags)0x00280008);
	__Local__72->WidgetStyle.Normal.ImageSize = FVector2D(83.000000, 85.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__73 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__72->WidgetStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__74 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__74 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__72->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__75 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__72->WidgetStyle.Disabled.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__76 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__76 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__72), UPanelWidget::__PPO__Slots() )));
	__Local__77 = TArray<UPanelSlot*> ();
	__Local__77.Reserve(1);
	auto __Local__78 = NewObject<UButtonSlot>(__Local__72, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__78->Padding.Left = 0.000000f;
	__Local__78->Padding.Top = 0.000000f;
	__Local__78->Padding.Right = 0.000000f;
	__Local__78->Padding.Bottom = 0.000000f;
	__Local__78->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__78->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__78->Parent = __Local__72;
	auto __Local__79 = NewObject<UImage>(__Local__0, TEXT("TurretImage"), (EObjectFlags)0x00280008);
	__Local__79->Brush.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__80 = (*(AccessPrivateProperty<UObject* >(&(__Local__79->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__80 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	__Local__79->Slot = __Local__78;
	__Local__79->bIsVariable = false;
	__Local__78->Content = __Local__79;
	__Local__77.Add(__Local__78);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__40.Add(__Local__71);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__11.Add(__Local__38);
	auto __Local__81 = NewObject<UVerticalBoxSlot>(__Local__10, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__81->Size.Value = 0.500000f;
	__Local__81->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__81->Parent = __Local__10;
	auto __Local__82 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_50"), (EObjectFlags)0x00280008);
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__82), UPanelWidget::__PPO__Slots() )));
	__Local__83 = TArray<UPanelSlot*> ();
	__Local__83.Reserve(2);
	auto __Local__84 = NewObject<UVerticalBoxSlot>(__Local__82, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__84->Size.Value = 0.800000f;
	__Local__84->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__84->Parent = __Local__82;
	auto __Local__85 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_52"), (EObjectFlags)0x00280008);
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__85), UPanelWidget::__PPO__Slots() )));
	__Local__86 = TArray<UPanelSlot*> ();
	__Local__86.Reserve(1);
	auto __Local__87 = NewObject<USizeBoxSlot>(__Local__85, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__87->Parent = __Local__85;
	auto __Local__88 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_52"), (EObjectFlags)0x00280008);
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__88), UPanelWidget::__PPO__Slots() )));
	__Local__89 = TArray<UPanelSlot*> ();
	__Local__89.Reserve(4);
	auto __Local__90 = NewObject<UVerticalBoxSlot>(__Local__88, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__90->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__90->Parent = __Local__88;
	auto __Local__91 = NewObject<UOverlay>(__Local__0, TEXT("Damage"), (EObjectFlags)0x00280008);
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__91), UPanelWidget::__PPO__Slots() )));
	__Local__92 = TArray<UPanelSlot*> ();
	__Local__92.Reserve(3);
	auto __Local__93 = NewObject<UOverlaySlot>(__Local__91, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__93->Padding.Left = 10.000000f;
	__Local__93->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__93->Parent = __Local__91;
	auto __Local__94 = NewObject<UImage>(__Local__0, TEXT("DamageImage"), (EObjectFlags)0x00280008);
	__Local__94->Brush.ImageSize = FVector2D(45.000000, 45.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<UObject* >(&(__Local__94->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__95 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	__Local__94->Slot = __Local__93;
	__Local__94->bIsVariable = false;
	__Local__93->Content = __Local__94;
	__Local__92.Add(__Local__93);
	auto __Local__96 = NewObject<UOverlaySlot>(__Local__91, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__96->Padding.Bottom = 20.000000f;
	__Local__96->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__96->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__96->Parent = __Local__91;
	auto __Local__97 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_106"), (EObjectFlags)0x00280008);
	__Local__97->WidthOverride = 240.000000f;
	__Local__97->HeightOverride = 15.000000f;
	__Local__97->bOverride_WidthOverride = true;
	__Local__97->bOverride_HeightOverride = true;
	auto& __Local__98 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__97), UPanelWidget::__PPO__Slots() )));
	__Local__98 = TArray<UPanelSlot*> ();
	__Local__98.Reserve(1);
	auto __Local__99 = NewObject<USizeBoxSlot>(__Local__97, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__99->Parent = __Local__97;
	auto __Local__100 = NewObject<UProgressBar>(__Local__0, TEXT("DamageProgressBar"), (EObjectFlags)0x00280008);
	__Local__100->FillColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__98.Add(__Local__99);
	__Local__97->Slot = __Local__96;
	__Local__96->Content = __Local__97;
	__Local__92.Add(__Local__96);
	auto __Local__101 = NewObject<UOverlaySlot>(__Local__91, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__101->Padding.Top = 8.000000f;
	__Local__101->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__101->Parent = __Local__91;
	auto __Local__102 = NewObject<UTextBlock>(__Local__0, TEXT("DamageText"), (EObjectFlags)0x00280008);
	__Local__102->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"1C5650034A13250EA8F2AD95290F9130\", \"100\")")	);
	__Local__102->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__102->Font.OutlineSettings.OutlineSize = 2;
	__Local__102->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__92.Add(__Local__101);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__89.Add(__Local__90);
	auto __Local__103 = NewObject<UVerticalBoxSlot>(__Local__88, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__103->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__103->Parent = __Local__88;
	auto __Local__104 = NewObject<UOverlay>(__Local__0, TEXT("FireChance"), (EObjectFlags)0x00280008);
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__104), UPanelWidget::__PPO__Slots() )));
	__Local__105 = TArray<UPanelSlot*> ();
	__Local__105.Reserve(3);
	auto __Local__106 = NewObject<UOverlaySlot>(__Local__104, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__106->Padding.Left = 10.000000f;
	__Local__106->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__106->Parent = __Local__104;
	auto __Local__107 = NewObject<UImage>(__Local__0, TEXT("FireImage"), (EObjectFlags)0x00280008);
	__Local__107->Brush.ImageSize = FVector2D(45.000000, 45.000000);
	auto& __Local__108 = (*(AccessPrivateProperty<UObject* >(&(__Local__107->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__108 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	__Local__107->Slot = __Local__106;
	__Local__107->bIsVariable = false;
	__Local__106->Content = __Local__107;
	__Local__105.Add(__Local__106);
	auto __Local__109 = NewObject<UOverlaySlot>(__Local__104, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__109->Padding.Bottom = 20.000000f;
	__Local__109->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__109->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__109->Parent = __Local__104;
	auto __Local__110 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox"), (EObjectFlags)0x00280008);
	__Local__110->WidthOverride = 240.000000f;
	__Local__110->HeightOverride = 15.000000f;
	__Local__110->bOverride_WidthOverride = true;
	__Local__110->bOverride_HeightOverride = true;
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__110), UPanelWidget::__PPO__Slots() )));
	__Local__111 = TArray<UPanelSlot*> ();
	__Local__111.Reserve(1);
	auto __Local__112 = NewObject<USizeBoxSlot>(__Local__110, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__112->Parent = __Local__110;
	auto __Local__113 = NewObject<UProgressBar>(__Local__0, TEXT("FireChanceProgressBar"), (EObjectFlags)0x00280008);
	__Local__113->FillColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	__Local__113->Slot = __Local__112;
	__Local__112->Content = __Local__113;
	__Local__111.Add(__Local__112);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__105.Add(__Local__109);
	auto __Local__114 = NewObject<UOverlaySlot>(__Local__104, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__114->Padding.Top = 8.000000f;
	__Local__114->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__114->Parent = __Local__104;
	auto __Local__115 = NewObject<UTextBlock>(__Local__0, TEXT("FireChanceText"), (EObjectFlags)0x00280008);
	__Local__115->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"1C5650034A13250EA8F2AD95290F9130\", \"100\")")	);
	__Local__115->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__115->Font.OutlineSettings.OutlineSize = 2;
	__Local__115->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__115->Slot = __Local__114;
	__Local__114->Content = __Local__115;
	__Local__105.Add(__Local__114);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__89.Add(__Local__103);
	auto __Local__116 = NewObject<UVerticalBoxSlot>(__Local__88, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__116->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__116->Parent = __Local__88;
	auto __Local__117 = NewObject<UOverlay>(__Local__0, TEXT("Range"), (EObjectFlags)0x00280008);
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__117), UPanelWidget::__PPO__Slots() )));
	__Local__118 = TArray<UPanelSlot*> ();
	__Local__118.Reserve(3);
	auto __Local__119 = NewObject<UOverlaySlot>(__Local__117, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__119->Padding.Left = 10.000000f;
	__Local__119->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__119->Parent = __Local__117;
	auto __Local__120 = NewObject<UImage>(__Local__0, TEXT("RangeImage"), (EObjectFlags)0x00280008);
	__Local__120->Brush.ImageSize = FVector2D(45.000000, 45.000000);
	auto& __Local__121 = (*(AccessPrivateProperty<UObject* >(&(__Local__120->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__121 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__120->Slot = __Local__119;
	__Local__120->bIsVariable = false;
	__Local__119->Content = __Local__120;
	__Local__118.Add(__Local__119);
	auto __Local__122 = NewObject<UOverlaySlot>(__Local__117, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__122->Padding.Bottom = 20.000000f;
	__Local__122->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__122->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__122->Parent = __Local__117;
	auto __Local__123 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_1"), (EObjectFlags)0x00280008);
	__Local__123->WidthOverride = 240.000000f;
	__Local__123->HeightOverride = 15.000000f;
	__Local__123->bOverride_WidthOverride = true;
	__Local__123->bOverride_HeightOverride = true;
	auto& __Local__124 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__123), UPanelWidget::__PPO__Slots() )));
	__Local__124 = TArray<UPanelSlot*> ();
	__Local__124.Reserve(1);
	auto __Local__125 = NewObject<USizeBoxSlot>(__Local__123, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__125->Parent = __Local__123;
	auto __Local__126 = NewObject<UProgressBar>(__Local__0, TEXT("RangeProgressBar"), (EObjectFlags)0x00280008);
	__Local__126->FillColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	__Local__126->Slot = __Local__125;
	__Local__125->Content = __Local__126;
	__Local__124.Add(__Local__125);
	__Local__123->Slot = __Local__122;
	__Local__122->Content = __Local__123;
	__Local__118.Add(__Local__122);
	auto __Local__127 = NewObject<UOverlaySlot>(__Local__117, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__127->Padding.Top = 8.000000f;
	__Local__127->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__127->Parent = __Local__117;
	auto __Local__128 = NewObject<UTextBlock>(__Local__0, TEXT("RangeText"), (EObjectFlags)0x00280008);
	__Local__128->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"1C5650034A13250EA8F2AD95290F9130\", \"100\")")	);
	__Local__128->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__128->Font.OutlineSettings.OutlineSize = 2;
	__Local__128->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__128->Slot = __Local__127;
	__Local__127->Content = __Local__128;
	__Local__118.Add(__Local__127);
	__Local__117->Slot = __Local__116;
	__Local__116->Content = __Local__117;
	__Local__89.Add(__Local__116);
	auto __Local__129 = NewObject<UVerticalBoxSlot>(__Local__88, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__129->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__129->Parent = __Local__88;
	auto __Local__130 = NewObject<UOverlay>(__Local__0, TEXT("FireRate"), (EObjectFlags)0x00280008);
	auto& __Local__131 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__130), UPanelWidget::__PPO__Slots() )));
	__Local__131 = TArray<UPanelSlot*> ();
	__Local__131.Reserve(3);
	auto __Local__132 = NewObject<UOverlaySlot>(__Local__130, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__132->Padding.Left = 10.000000f;
	__Local__132->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__132->Parent = __Local__130;
	auto __Local__133 = NewObject<UImage>(__Local__0, TEXT("FireRateImage"), (EObjectFlags)0x00280008);
	__Local__133->Brush.ImageSize = FVector2D(45.000000, 45.000000);
	auto& __Local__134 = (*(AccessPrivateProperty<UObject* >(&(__Local__133->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__134 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
	__Local__133->Slot = __Local__132;
	__Local__133->bIsVariable = false;
	__Local__132->Content = __Local__133;
	__Local__131.Add(__Local__132);
	auto __Local__135 = NewObject<UOverlaySlot>(__Local__130, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__135->Padding.Bottom = 20.000000f;
	__Local__135->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__135->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__135->Parent = __Local__130;
	auto __Local__136 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_2"), (EObjectFlags)0x00280008);
	__Local__136->WidthOverride = 240.000000f;
	__Local__136->HeightOverride = 15.000000f;
	__Local__136->bOverride_WidthOverride = true;
	__Local__136->bOverride_HeightOverride = true;
	auto& __Local__137 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__136), UPanelWidget::__PPO__Slots() )));
	__Local__137 = TArray<UPanelSlot*> ();
	__Local__137.Reserve(1);
	auto __Local__138 = NewObject<USizeBoxSlot>(__Local__136, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__138->Parent = __Local__136;
	auto __Local__139 = NewObject<UProgressBar>(__Local__0, TEXT("FireRateProgressBar"), (EObjectFlags)0x00280008);
	__Local__139->FillColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	__Local__139->Slot = __Local__138;
	__Local__138->Content = __Local__139;
	__Local__137.Add(__Local__138);
	__Local__136->Slot = __Local__135;
	__Local__135->Content = __Local__136;
	__Local__131.Add(__Local__135);
	auto __Local__140 = NewObject<UOverlaySlot>(__Local__130, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__140->Padding.Top = 8.000000f;
	__Local__140->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__140->Parent = __Local__130;
	auto __Local__141 = NewObject<UTextBlock>(__Local__0, TEXT("FireRateText"), (EObjectFlags)0x00280008);
	__Local__141->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"1C5650034A13250EA8F2AD95290F9130\", \"100\")")	);
	__Local__141->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__141->Font.OutlineSettings.OutlineSize = 2;
	__Local__141->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__131.Add(__Local__140);
	__Local__130->Slot = __Local__129;
	__Local__129->Content = __Local__130;
	__Local__89.Add(__Local__129);
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__86.Add(__Local__87);
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__83.Add(__Local__84);
	auto __Local__142 = NewObject<UVerticalBoxSlot>(__Local__82, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__142->Size.Value = 0.200000f;
	__Local__142->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__142->Parent = __Local__82;
	auto __Local__143 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_104"), (EObjectFlags)0x00280008);
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__143), UPanelWidget::__PPO__Slots() )));
	__Local__144 = TArray<UPanelSlot*> ();
	__Local__144.Reserve(1);
	auto __Local__145 = NewObject<USizeBoxSlot>(__Local__143, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__145->Padding.Left = 10.000000f;
	__Local__145->Padding.Top = 10.000000f;
	__Local__145->Padding.Right = 10.000000f;
	__Local__145->Padding.Bottom = 10.000000f;
	__Local__145->Parent = __Local__143;
	auto __Local__146 = NewObject<UButton>(__Local__0, TEXT("PurchaseButton"), (EObjectFlags)0x00280008);
	__Local__146->WidgetStyle.Normal.ImageSize = FVector2D(83.000000, 85.000000);
	auto& __Local__147 = (*(AccessPrivateProperty<UObject* >(&(__Local__146->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__147 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__146->WidgetStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__148 = (*(AccessPrivateProperty<UObject* >(&(__Local__146->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__148 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__146->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__149 = (*(AccessPrivateProperty<UObject* >(&(__Local__146->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__149 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__146->WidgetStyle.Disabled.ImageSize = FVector2D(90.000000, 88.000000);
	auto& __Local__150 = (*(AccessPrivateProperty<UObject* >(&(__Local__146->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__150 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	auto& __Local__151 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__146), UPanelWidget::__PPO__Slots() )));
	__Local__151 = TArray<UPanelSlot*> ();
	__Local__151.Reserve(1);
	auto __Local__152 = NewObject<UButtonSlot>(__Local__146, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__152->Parent = __Local__146;
	auto __Local__153 = NewObject<UTextBlock>(__Local__0, TEXT("Text"), (EObjectFlags)0x00280008);
	__Local__153->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D8BB5B3149430B75D51E30AC0DD6024B]\", \"731597404BCF5540286FB18023B65CE3\", \"Purchase\")")	);
	__Local__153->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__153->Font.OutlineSettings.OutlineSize = 2;
	__Local__153->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__153->Slot = __Local__152;
	__Local__152->Content = __Local__153;
	__Local__151.Add(__Local__152);
	__Local__146->Slot = __Local__145;
	__Local__145->Content = __Local__146;
	__Local__144.Add(__Local__145);
	__Local__143->Slot = __Local__142;
	__Local__142->Content = __Local__143;
	__Local__83.Add(__Local__142);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__11.Add(__Local__81);
	__Local__10->Slot = __Local__8;
	__Local__8->Content = __Local__10;
	__Local__7.Add(__Local__8);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_PurchasePanel_C__pf3166771619::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__154;
	SlotNames.Append(__Local__154);
}
void UBP_PurchasePanel_C__pf3166771619::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__155;
	TArray<FDelegateRuntimeBinding>  __Local__156;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UBP_PurchasePanel_C__pf3166771619::StaticClass())->MiscConvertedSubobjects[0]), __Local__155, __Local__156);
}
void UBP_PurchasePanel_C__pf3166771619::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_PurchasePanel_C__pf3166771619::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Towers/Classes/BP_Ballista.BP_Ballista_C 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Towers/Classes/BP_Cannon.BP_Cannon_C 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Towers/Classes/BP_Catapult.BP_Catapult_C 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Towers/Classes/BP_Turret.BP_Turret_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Panels/t_Panel.t_Panel 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/flat_dark_themed_gui/fonts/MontserratExtraBoldItalic.MontserratExtraBoldItalic 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Outline2_256x256.T_Ellipse_Outline2_256x256 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Generic_Icons/256x256/T_Dagger_256x256.T_Dagger_256x256 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Panels/t_Line.t_Line 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsRed/ButtonsColors/t_ButtonRed.t_ButtonRed 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsRed/ButtonsColors/t_ButtonRed_Highlighted.t_ButtonRed_Highlighted 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsRed/ButtonsColors/t_ButtonRedPressed.t_ButtonRedPressed 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsRed/ButtonsColors/t_ButtonRedLock.t_ButtonRedLock 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/KenneyAssets/2D/Ballista_Texture.Ballista_Texture 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/KenneyAssets/2D/Catapult_Texture.Catapult_Texture 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/KenneyAssets/2D/Cannon_Texture.Cannon_Texture 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/KenneyAssets/2D/Turret_Texture.Turret_Texture 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Icons/512x512px/t_Swords512x512.t_Swords512x512 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Icons/512x512px/t_Fire512x512.t_Fire512x512 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Icons/512x512px/t_Lifebuoy512x512.t_Lifebuoy512x512 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Icons/512x512px/t_Ammunition512x512.t_Ammunition512x512 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBP_PurchasePanel_C__pf3166771619::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TowerDefense.PurchasePanel 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_Ballista_C /Game/Towers/Classes/BP_Ballista.Default__BP_Ballista_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_Cannon_C /Game/Towers/Classes/BP_Cannon.Default__BP_Cannon_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_Catapult_C /Game/Towers/Classes/BP_Catapult.Default__BP_Catapult_C 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_Turret_C /Game/Towers/Classes/BP_Turret.Default__BP_Turret_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBP_PurchasePanel_C__pf3166771619
{
	FRegisterHelper__UBP_PurchasePanel_C__pf3166771619()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/BP_PurchasePanel"), &UBP_PurchasePanel_C__pf3166771619::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBP_PurchasePanel_C__pf3166771619 Instance;
};
FRegisterHelper__UBP_PurchasePanel_C__pf3166771619 FRegisterHelper__UBP_PurchasePanel_C__pf3166771619::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
