#include "NativizedAssets.h"
#include "BP_Settings__pf3166771619.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/Slider.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "BP_MainMenu__pf3166771619.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBP_Settings_C__pf3166771619::UBP_Settings_C__pf3166771619(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	SC_Music = CastChecked<USoundClass>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	SC_SFX = CastChecked<USoundClass>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	SM_Music = CastChecked<USoundMix>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	SM_SFX = CastChecked<USoundMix>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	MainMenuWidget = UBP_MainMenu_C__pf3166771619::StaticClass();
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_Settings_C__pf3166771619::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Settings_C__pf3166771619::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UBP_MainMenu_C__pf3166771619::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_15"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Right = 0.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UScaleBox>(__Local__0, TEXT("ScaleBox_25"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UScaleBoxSlot>(__Local__4, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__6->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__6->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_27"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<USizeBoxSlot>(__Local__7, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_33"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(2);
	auto __Local__12 = NewObject<UOverlaySlot>(__Local__10, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__12->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__12->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__0, TEXT("Image_0"), (EObjectFlags)0x00280008);
	__Local__13->Brush.ImageSize = FVector2D(3840.000000, 2160.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__13->Slot = __Local__12;
	__Local__13->bIsVariable = false;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__15 = NewObject<UOverlaySlot>(__Local__10, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__15->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__15->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__15->Parent = __Local__10;
	auto __Local__16 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(2);
	auto __Local__18 = NewObject<UVerticalBoxSlot>(__Local__16, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__18->Size.Value = 0.200000f;
	__Local__18->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(3);
	auto __Local__21 = NewObject<UOverlaySlot>(__Local__19, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__21->Padding.Left = 15.000000f;
	__Local__21->Padding.Top = 15.000000f;
	__Local__21->Padding.Right = 15.000000f;
	__Local__21->Padding.Bottom = 15.000000f;
	__Local__21->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__21->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[89427550429F5B1652EFB1BAECCE81E0]\", \"C6AE6C724B5A31EA6F7271B8A757D476\", \"Settings\")")	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Font.Size = 215;
	auto& __Local__23 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__22), UTextLayoutWidget::__PPO__Justification() )));
	__Local__23 = ETextJustify::Type::Center;
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	auto __Local__24 = NewObject<UOverlaySlot>(__Local__19, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__24->Parent = __Local__19;
	auto __Local__25 = NewObject<UImage>(__Local__0, TEXT("Separator"), (EObjectFlags)0x00280008);
	__Local__25->Brush.ImageSize = FVector2D(1291.000000, 4.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__25->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__25->ColorAndOpacity = FLinearColor(0.020289, 0.760525, 0.341914, 1.000000);
	__Local__25->Slot = __Local__24;
	__Local__25->bIsVariable = false;
	__Local__24->Content = __Local__25;
	__Local__20.Add(__Local__24);
	auto __Local__27 = NewObject<UOverlaySlot>(__Local__19, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__27->Padding.Top = 100.000000f;
	__Local__27->Padding.Right = 100.000000f;
	__Local__27->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__27->Parent = __Local__19;
	auto __Local__28 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_87"), (EObjectFlags)0x00280008);
	__Local__28->WidthOverride = 128.000000f;
	__Local__28->HeightOverride = 128.000000f;
	__Local__28->bOverride_WidthOverride = true;
	__Local__28->bOverride_HeightOverride = true;
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<USizeBoxSlot>(__Local__28, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<UButton>(__Local__0, TEXT("MainMenuButton"), (EObjectFlags)0x00280008);
	__Local__31->WidgetStyle.Normal.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Hovered.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.520996, 0.545724, 0.577580, 1.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Pressed.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__36 = FLinearColor(0.084376, 0.086500, 0.090842, 1.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Disabled.ImageSize = FVector2D(256.000000, 256.000000);
	__Local__31->WidgetStyle.Disabled.Margin.Left = 0.250000f;
	__Local__31->WidgetStyle.Disabled.Margin.Top = 0.250000f;
	__Local__31->WidgetStyle.Disabled.Margin.Right = 0.250000f;
	__Local__31->WidgetStyle.Disabled.Margin.Bottom = 0.250000f;
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.015996, 0.024158, 0.033105, 1.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UButtonSlot>(__Local__31, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__41->Padding.Left = 0.000000f;
	__Local__41->Padding.Top = 0.000000f;
	__Local__41->Padding.Right = 0.000000f;
	__Local__41->Padding.Bottom = 0.000000f;
	__Local__41->Parent = __Local__31;
	auto __Local__42 = NewObject<UImage>(__Local__0, TEXT("Image_77"), (EObjectFlags)0x00280008);
	__Local__42->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__42->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(0.182292, 0.182292, 0.182292, 1.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__42->Slot = __Local__41;
	__Local__42->bIsVariable = false;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__20.Add(__Local__27);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__16, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__45->Size.Value = 0.800000f;
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__16;
	auto __Local__46 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_1"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(3);
	auto __Local__48 = NewObject<UOverlaySlot>(__Local__46, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__48->Padding.Left = 400.000000f;
	__Local__48->Padding.Top = 200.000000f;
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<USizeBox>(__Local__0, TEXT("ScreenResolution"), (EObjectFlags)0x00280008);
	__Local__49->WidthOverride = 1400.000000f;
	__Local__49->HeightOverride = 200.000000f;
	__Local__49->bOverride_WidthOverride = true;
	__Local__49->bOverride_HeightOverride = true;
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(1);
	auto __Local__51 = NewObject<USizeBoxSlot>(__Local__49, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__51->Parent = __Local__49;
	auto __Local__52 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_55"), (EObjectFlags)0x00280008);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(2);
	auto __Local__54 = NewObject<UOverlaySlot>(__Local__52, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__54->Padding.Top = 25.000000f;
	__Local__54->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_103"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[89427550429F5B1652EFB1BAECCE81E0]\", \"D0718DC145C828B9E6CC518A8911110B\", \"Screen Resolution\")")	);
	__Local__55->Font.Size = 53;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	auto __Local__56 = NewObject<UOverlaySlot>(__Local__52, TEXT("OverlaySlot_5"), (EObjectFlags)0x00280008);
	__Local__56->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__56->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__56->Parent = __Local__52;
	auto __Local__57 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__57->WidthOverride = 500.000000f;
	__Local__57->HeightOverride = 80.000000f;
	__Local__57->bOverride_WidthOverride = true;
	__Local__57->bOverride_HeightOverride = true;
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<USizeBoxSlot>(__Local__57, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UOverlay>(__Local__0, TEXT("Overlay"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(2);
	auto __Local__62 = NewObject<UOverlaySlot>(__Local__60, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__62->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__62->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UImage>(__Local__0, TEXT("Image"), (EObjectFlags)0x00280008);
	__Local__63->Brush.ImageSize = FVector2D(83.000000, 85.000000);
	__Local__63->Brush.Margin.Left = 0.330000f;
	__Local__63->Brush.Margin.Top = 0.330000f;
	__Local__63->Brush.Margin.Right = 0.330000f;
	__Local__63->Brush.Margin.Bottom = 0.330000f;
	auto& __Local__64 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__63->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__64 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__65 = (*(AccessPrivateProperty<UObject* >(&(__Local__63->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__65 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__63->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__63->Slot = __Local__62;
	__Local__63->bIsVariable = false;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	auto __Local__66 = NewObject<UOverlaySlot>(__Local__60, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__66->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__66->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__66->Parent = __Local__60;
	auto __Local__67 = NewObject<UComboBoxString>(__Local__0, TEXT("ScreenResolutionDropDown"), (EObjectFlags)0x00280008);
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<FString> >((__Local__67), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__68 = TArray<FString> ();
	__Local__68.Reserve(4);
	__Local__68.Add(FString(TEXT("720x480")));
	__Local__68.Add(FString(TEXT("1280x720")));
	__Local__68.Add(FString(TEXT("1920x1080")));
	__Local__68.Add(FString(TEXT("2560x1440")));
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__69 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__70 = (*(AccessPrivateProperty<FName >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal), FSlateBrush::__PPO__ResourceName() )));
	__Local__70 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__71 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__71 = FLinearColor(0.913099, 0.913099, 0.913099, 1.000000);
	auto& __Local__72 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__72 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed.ImageSize = FVector2D(87.000000, 85.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.577580, 0.577580, 0.577580, 1.000000);
	auto& __Local__74 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__74 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__75 = (*(AccessPrivateProperty<FName >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__75 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.ImageSize = FVector2D(87.000000, 85.000000);
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.Margin.Left = 0.250000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.Margin.Top = 0.250000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.Margin.Right = 0.250000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.Margin.Bottom = 0.250000f;
	auto& __Local__76 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__76 = FLinearColor(0.577580, 0.577580, 0.577580, 0.500000);
	auto& __Local__77 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__77 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__78 = (*(AccessPrivateProperty<FName >(&(__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled), FSlateBrush::__PPO__ResourceName() )));
	__Local__78 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.Disabled.ImageType = ESlateBrushImageType::Type::FullColor;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.NormalPadding.Left = 5.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.NormalPadding.Top = 0.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.NormalPadding.Right = 20.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.NormalPadding.Bottom = 0.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.PressedPadding.Left = 5.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.PressedPadding.Top = 0.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.PressedPadding.Right = 20.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.ButtonStyle.PressedPadding.Bottom = 0.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.DownArrowImage.ImageSize = FVector2D(32.000000, 32.000000);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.DownArrowImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderBrush.ImageSize = FVector2D(92.000000, 92.000000);
	auto& __Local__80 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__80 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__81 = (*(AccessPrivateProperty<UObject* >(&(__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderBrush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__81 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderPadding.Left = 25.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderPadding.Top = 2.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderPadding.Right = 0.000000f;
	__Local__67->WidgetStyle.ComboButtonStyle.MenuBorderPadding.Bottom = 5.000000f;
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.SelectorFocusedBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(0.018500, 0.015209, 0.022174, 0.000000);
	auto& __Local__83 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.ActiveHoveredBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__83 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
	auto& __Local__84 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.ActiveBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__84 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.InactiveHoveredBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
	auto& __Local__86 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.InactiveBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__86 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__87 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.EvenRowBackgroundHoveredBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__87 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
	__Local__67->ItemStyle.EvenRowBackgroundBrush.ImageSize = FVector2D(8.000000, 8.000000);
	auto& __Local__88 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.EvenRowBackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__88 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__89 = (*(AccessPrivateProperty<FName >(&(__Local__67->ItemStyle.EvenRowBackgroundBrush), FSlateBrush::__PPO__ResourceName() )));
	__Local__89 = FName(TEXT("../../../Engine/Content/Slate/Common/Selection.png"));
	__Local__67->ItemStyle.EvenRowBackgroundBrush.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__67->ItemStyle.EvenRowBackgroundBrush.ImageType = ESlateBrushImageType::Type::FullColor;
	auto& __Local__90 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.OddRowBackgroundHoveredBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__90 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
	__Local__67->ItemStyle.OddRowBackgroundBrush.ImageSize = FVector2D(8.000000, 8.000000);
	auto& __Local__91 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.OddRowBackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__91 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__92 = (*(AccessPrivateProperty<FName >(&(__Local__67->ItemStyle.OddRowBackgroundBrush), FSlateBrush::__PPO__ResourceName() )));
	__Local__92 = FName(TEXT("../../../Engine/Content/Slate/Common/Selection.png"));
	__Local__67->ItemStyle.OddRowBackgroundBrush.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__67->ItemStyle.OddRowBackgroundBrush.ImageType = ESlateBrushImageType::Type::FullColor;
	auto& __Local__93 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.SelectedTextColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__93 = FLinearColor(0.723055, 0.723055, 0.723055, 1.000000);
	auto& __Local__94 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.DropIndicator_Above.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__94 = FLinearColor(0.728000, 0.364000, 0.003000, 0.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.DropIndicator_Onto.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__95 = FLinearColor(0.728000, 0.364000, 0.003000, 0.000000);
	auto& __Local__96 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ItemStyle.DropIndicator_Below.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__96 = FLinearColor(0.728000, 0.364000, 0.003000, 0.000000);
	__Local__67->ContentPadding.Left = 15.000000f;
	__Local__67->ContentPadding.Right = 0.000000f;
	__Local__67->EnableGamepadNavigationMode = false;
	__Local__67->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	__Local__67->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__67->Font.Size = 27;
	auto& __Local__97 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__67->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__97 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__61.Add(__Local__66);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__53.Add(__Local__56);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	auto __Local__98 = NewObject<UOverlaySlot>(__Local__46, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__98->Padding.Top = 200.000000f;
	__Local__98->Padding.Right = 400.000000f;
	__Local__98->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__98->Parent = __Local__46;
	auto __Local__99 = NewObject<USizeBox>(__Local__0, TEXT("MusicVolume"), (EObjectFlags)0x00280008);
	__Local__99->WidthOverride = 1400.000000f;
	__Local__99->HeightOverride = 200.000000f;
	__Local__99->bOverride_WidthOverride = true;
	__Local__99->bOverride_HeightOverride = true;
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__99), UPanelWidget::__PPO__Slots() )));
	__Local__100 = TArray<UPanelSlot*> ();
	__Local__100.Reserve(1);
	auto __Local__101 = NewObject<USizeBoxSlot>(__Local__99, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__101->Parent = __Local__99;
	auto __Local__102 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_2"), (EObjectFlags)0x00280008);
	auto& __Local__103 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__102), UPanelWidget::__PPO__Slots() )));
	__Local__103 = TArray<UPanelSlot*> ();
	__Local__103.Reserve(2);
	auto __Local__104 = NewObject<UOverlaySlot>(__Local__102, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__104->Padding.Top = 25.000000f;
	__Local__104->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__104->Parent = __Local__102;
	auto __Local__105 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__105->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[89427550429F5B1652EFB1BAECCE81E0]\", \"6609477D465DDC7E23EF3B97A14ADFE2\", \"Music Volume\")")	);
	__Local__105->Font.Size = 53;
	__Local__105->Slot = __Local__104;
	__Local__104->Content = __Local__105;
	__Local__103.Add(__Local__104);
	auto __Local__106 = NewObject<UOverlaySlot>(__Local__102, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__106->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__106->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__106->Parent = __Local__102;
	auto __Local__107 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_1"), (EObjectFlags)0x00280008);
	__Local__107->WidthOverride = 570.000000f;
	__Local__107->HeightOverride = 90.910248f;
	__Local__107->bOverride_WidthOverride = true;
	__Local__107->bOverride_HeightOverride = true;
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__107), UPanelWidget::__PPO__Slots() )));
	__Local__108 = TArray<UPanelSlot*> ();
	__Local__108.Reserve(1);
	auto __Local__109 = NewObject<USizeBoxSlot>(__Local__107, TEXT("SizeBoxSlot_174"), (EObjectFlags)0x00280008);
	__Local__109->Parent = __Local__107;
	auto __Local__110 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_3"), (EObjectFlags)0x00280008);
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__110), UPanelWidget::__PPO__Slots() )));
	__Local__111 = TArray<UPanelSlot*> ();
	__Local__111.Reserve(2);
	auto __Local__112 = NewObject<UOverlaySlot>(__Local__110, TEXT("OverlaySlot_186"), (EObjectFlags)0x00280008);
	__Local__112->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__112->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__112->Parent = __Local__110;
	auto __Local__113 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_2"), (EObjectFlags)0x00280008);
	__Local__113->WidthOverride = 570.000000f;
	__Local__113->HeightOverride = 20.000000f;
	__Local__113->bOverride_WidthOverride = true;
	__Local__113->bOverride_HeightOverride = true;
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__113), UPanelWidget::__PPO__Slots() )));
	__Local__114 = TArray<UPanelSlot*> ();
	__Local__114.Reserve(1);
	auto __Local__115 = NewObject<USizeBoxSlot>(__Local__113, TEXT("SizeBoxSlot_176"), (EObjectFlags)0x00280008);
	__Local__115->Parent = __Local__113;
	auto __Local__116 = NewObject<UProgressBar>(__Local__0, TEXT("PB_Music"), (EObjectFlags)0x00280008);
	__Local__116->WidgetStyle.BackgroundImage.ImageSize = FVector2D(28.977962, 15.000000);
	__Local__116->WidgetStyle.BackgroundImage.Margin.Left = 0.416667f;
	__Local__116->WidgetStyle.BackgroundImage.Margin.Top = 0.416667f;
	__Local__116->WidgetStyle.BackgroundImage.Margin.Right = 0.416667f;
	__Local__116->WidgetStyle.BackgroundImage.Margin.Bottom = 0.416667f;
	auto& __Local__117 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__116->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__117 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__118 = (*(AccessPrivateProperty<UObject* >(&(__Local__116->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__118 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__116->WidgetStyle.FillImage.ImageSize = FVector2D(132.000000, 15.000000);
	__Local__116->WidgetStyle.FillImage.Margin.Left = 0.416667f;
	__Local__116->WidgetStyle.FillImage.Margin.Top = 0.416667f;
	__Local__116->WidgetStyle.FillImage.Margin.Right = 0.416667f;
	__Local__116->WidgetStyle.FillImage.Margin.Bottom = 0.416667f;
	auto& __Local__119 = (*(AccessPrivateProperty<UObject* >(&(__Local__116->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__119 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__116->Percent = 0.500000f;
	__Local__116->FillColorAndOpacity = FLinearColor(0.814847, 0.008568, 0.038204, 1.000000);
	__Local__116->Slot = __Local__115;
	__Local__115->Content = __Local__116;
	__Local__114.Add(__Local__115);
	__Local__113->Slot = __Local__112;
	__Local__112->Content = __Local__113;
	__Local__111.Add(__Local__112);
	auto __Local__120 = NewObject<UOverlaySlot>(__Local__110, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__120->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__120->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__120->Parent = __Local__110;
	auto __Local__121 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_3"), (EObjectFlags)0x00280008);
	__Local__121->WidthOverride = 570.000000f;
	__Local__121->HeightOverride = 20.000000f;
	__Local__121->bOverride_WidthOverride = true;
	__Local__121->bOverride_HeightOverride = true;
	auto& __Local__122 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__121), UPanelWidget::__PPO__Slots() )));
	__Local__122 = TArray<UPanelSlot*> ();
	__Local__122.Reserve(1);
	auto __Local__123 = NewObject<USizeBoxSlot>(__Local__121, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__123->Parent = __Local__121;
	auto __Local__124 = NewObject<USlider>(__Local__0, TEXT("Slider_Music"), (EObjectFlags)0x00280008);
	__Local__124->Value = 0.500000f;
	__Local__124->WidgetStyle.NormalBarImage.ImageSize = FVector2D(132.000000, 15.000000);
	auto& __Local__125 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->WidgetStyle.NormalBarImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__125 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__126 = (*(AccessPrivateProperty<UObject* >(&(__Local__124->WidgetStyle.NormalBarImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__126 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__124->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__127 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->WidgetStyle.NormalThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__127 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__128 = (*(AccessPrivateProperty<UObject* >(&(__Local__124->WidgetStyle.NormalThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__128 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__124->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__129 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->WidgetStyle.HoveredThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__129 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__130 = (*(AccessPrivateProperty<UObject* >(&(__Local__124->WidgetStyle.HoveredThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__130 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__124->WidgetStyle.DisabledThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__131 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->WidgetStyle.DisabledThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__131 = FLinearColor(0.181164, 0.191202, 0.201556, 0.500000);
	auto& __Local__132 = (*(AccessPrivateProperty<UObject* >(&(__Local__124->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__132 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	auto& __Local__133 = (*(AccessPrivateProperty<FName >(&(__Local__124->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceName() )));
	__Local__133 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__124->SliderBarColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__124->Slot = __Local__123;
	__Local__123->Content = __Local__124;
	__Local__122.Add(__Local__123);
	__Local__121->Slot = __Local__120;
	__Local__120->Content = __Local__121;
	__Local__111.Add(__Local__120);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__108.Add(__Local__109);
	__Local__107->Slot = __Local__106;
	__Local__106->Content = __Local__107;
	__Local__103.Add(__Local__106);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__100.Add(__Local__101);
	__Local__99->Slot = __Local__98;
	__Local__98->Content = __Local__99;
	__Local__47.Add(__Local__98);
	auto __Local__134 = NewObject<UOverlaySlot>(__Local__46, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__134->Padding.Top = 500.000000f;
	__Local__134->Padding.Right = 400.000000f;
	__Local__134->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__134->Parent = __Local__46;
	auto __Local__135 = NewObject<USizeBox>(__Local__0, TEXT("SFXVolume_1"), (EObjectFlags)0x00280008);
	__Local__135->WidthOverride = 1400.000000f;
	__Local__135->HeightOverride = 200.000000f;
	__Local__135->bOverride_WidthOverride = true;
	__Local__135->bOverride_HeightOverride = true;
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__135), UPanelWidget::__PPO__Slots() )));
	__Local__136 = TArray<UPanelSlot*> ();
	__Local__136.Reserve(1);
	auto __Local__137 = NewObject<USizeBoxSlot>(__Local__135, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__137->Parent = __Local__135;
	auto __Local__138 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_4"), (EObjectFlags)0x00280008);
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__138), UPanelWidget::__PPO__Slots() )));
	__Local__139 = TArray<UPanelSlot*> ();
	__Local__139.Reserve(2);
	auto __Local__140 = NewObject<UOverlaySlot>(__Local__138, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__140->Padding.Top = 25.000000f;
	__Local__140->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__140->Parent = __Local__138;
	auto __Local__141 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__141->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[89427550429F5B1652EFB1BAECCE81E0]\", \"A7E36C854D34C25D36D23D8544CE7B86\", \"SFX Volume\")")	);
	__Local__141->Font.Size = 53;
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__139.Add(__Local__140);
	auto __Local__142 = NewObject<UOverlaySlot>(__Local__138, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__142->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__142->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__142->Parent = __Local__138;
	auto __Local__143 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_4"), (EObjectFlags)0x00280008);
	__Local__143->WidthOverride = 570.000000f;
	__Local__143->HeightOverride = 90.910248f;
	__Local__143->bOverride_WidthOverride = true;
	__Local__143->bOverride_HeightOverride = true;
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__143), UPanelWidget::__PPO__Slots() )));
	__Local__144 = TArray<UPanelSlot*> ();
	__Local__144.Reserve(1);
	auto __Local__145 = NewObject<USizeBoxSlot>(__Local__143, TEXT("SizeBoxSlot_174"), (EObjectFlags)0x00280008);
	__Local__145->Parent = __Local__143;
	auto __Local__146 = NewObject<UOverlay>(__Local__0, TEXT("Overlay_5"), (EObjectFlags)0x00280008);
	auto& __Local__147 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__146), UPanelWidget::__PPO__Slots() )));
	__Local__147 = TArray<UPanelSlot*> ();
	__Local__147.Reserve(2);
	auto __Local__148 = NewObject<UOverlaySlot>(__Local__146, TEXT("OverlaySlot_186"), (EObjectFlags)0x00280008);
	__Local__148->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__148->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__148->Parent = __Local__146;
	auto __Local__149 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_5"), (EObjectFlags)0x00280008);
	__Local__149->WidthOverride = 570.000000f;
	__Local__149->HeightOverride = 20.000000f;
	__Local__149->bOverride_WidthOverride = true;
	__Local__149->bOverride_HeightOverride = true;
	auto& __Local__150 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__149), UPanelWidget::__PPO__Slots() )));
	__Local__150 = TArray<UPanelSlot*> ();
	__Local__150.Reserve(1);
	auto __Local__151 = NewObject<USizeBoxSlot>(__Local__149, TEXT("SizeBoxSlot_176"), (EObjectFlags)0x00280008);
	__Local__151->Parent = __Local__149;
	auto __Local__152 = NewObject<UProgressBar>(__Local__0, TEXT("PB_SFX"), (EObjectFlags)0x00280008);
	__Local__152->WidgetStyle.BackgroundImage.ImageSize = FVector2D(28.977962, 15.000000);
	__Local__152->WidgetStyle.BackgroundImage.Margin.Left = 0.416667f;
	__Local__152->WidgetStyle.BackgroundImage.Margin.Top = 0.416667f;
	__Local__152->WidgetStyle.BackgroundImage.Margin.Right = 0.416667f;
	__Local__152->WidgetStyle.BackgroundImage.Margin.Bottom = 0.416667f;
	auto& __Local__153 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__152->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__153 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__154 = (*(AccessPrivateProperty<UObject* >(&(__Local__152->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__154 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__152->WidgetStyle.FillImage.ImageSize = FVector2D(132.000000, 15.000000);
	__Local__152->WidgetStyle.FillImage.Margin.Left = 0.416667f;
	__Local__152->WidgetStyle.FillImage.Margin.Top = 0.416667f;
	__Local__152->WidgetStyle.FillImage.Margin.Right = 0.416667f;
	__Local__152->WidgetStyle.FillImage.Margin.Bottom = 0.416667f;
	auto& __Local__155 = (*(AccessPrivateProperty<UObject* >(&(__Local__152->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__155 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__152->Percent = 0.500000f;
	__Local__152->FillColorAndOpacity = FLinearColor(0.814847, 0.008568, 0.038204, 1.000000);
	__Local__152->Slot = __Local__151;
	__Local__151->Content = __Local__152;
	__Local__150.Add(__Local__151);
	__Local__149->Slot = __Local__148;
	__Local__148->Content = __Local__149;
	__Local__147.Add(__Local__148);
	auto __Local__156 = NewObject<UOverlaySlot>(__Local__146, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__156->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__156->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__156->Parent = __Local__146;
	auto __Local__157 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_6"), (EObjectFlags)0x00280008);
	__Local__157->WidthOverride = 570.000000f;
	__Local__157->HeightOverride = 20.000000f;
	__Local__157->bOverride_WidthOverride = true;
	__Local__157->bOverride_HeightOverride = true;
	auto& __Local__158 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__157), UPanelWidget::__PPO__Slots() )));
	__Local__158 = TArray<UPanelSlot*> ();
	__Local__158.Reserve(1);
	auto __Local__159 = NewObject<USizeBoxSlot>(__Local__157, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__159->Parent = __Local__157;
	auto __Local__160 = NewObject<USlider>(__Local__0, TEXT("Slider_SFX"), (EObjectFlags)0x00280008);
	__Local__160->Value = 0.500000f;
	__Local__160->WidgetStyle.NormalBarImage.ImageSize = FVector2D(132.000000, 15.000000);
	auto& __Local__161 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__160->WidgetStyle.NormalBarImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__161 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__162 = (*(AccessPrivateProperty<UObject* >(&(__Local__160->WidgetStyle.NormalBarImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__162 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__160->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__163 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__160->WidgetStyle.NormalThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__163 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__164 = (*(AccessPrivateProperty<UObject* >(&(__Local__160->WidgetStyle.NormalThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__164 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__160->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__165 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__160->WidgetStyle.HoveredThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__165 = FLinearColor(0.181164, 0.191202, 0.201556, 1.000000);
	auto& __Local__166 = (*(AccessPrivateProperty<UObject* >(&(__Local__160->WidgetStyle.HoveredThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__166 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__160->WidgetStyle.DisabledThumbImage.ImageSize = FVector2D(60.000000, 60.000000);
	auto& __Local__167 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__160->WidgetStyle.DisabledThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__167 = FLinearColor(0.181164, 0.191202, 0.201556, 0.500000);
	auto& __Local__168 = (*(AccessPrivateProperty<UObject* >(&(__Local__160->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__168 = CastChecked<UObject>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	auto& __Local__169 = (*(AccessPrivateProperty<FName >(&(__Local__160->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceName() )));
	__Local__169 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__160->SliderBarColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__160->Slot = __Local__159;
	__Local__159->Content = __Local__160;
	__Local__158.Add(__Local__159);
	__Local__157->Slot = __Local__156;
	__Local__156->Content = __Local__157;
	__Local__147.Add(__Local__156);
	__Local__146->Slot = __Local__145;
	__Local__145->Content = __Local__146;
	__Local__144.Add(__Local__145);
	__Local__143->Slot = __Local__142;
	__Local__142->Content = __Local__143;
	__Local__139.Add(__Local__142);
	__Local__138->Slot = __Local__137;
	__Local__137->Content = __Local__138;
	__Local__136.Add(__Local__137);
	__Local__135->Slot = __Local__134;
	__Local__134->Content = __Local__135;
	__Local__47.Add(__Local__134);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__17.Add(__Local__45);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__11.Add(__Local__15);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_Settings_C__pf3166771619::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__170;
	SlotNames.Append(__Local__170);
}
void UBP_Settings_C__pf3166771619::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__171;
	TArray<FDelegateRuntimeBinding>  __Local__172;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UBP_Settings_C__pf3166771619::StaticClass())->MiscConvertedSubobjects[0]), __Local__171, __Local__172);
}
void UBP_Settings_C__pf3166771619::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Settings_C__pf3166771619::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/Audio/SC_Music.SC_Music 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/Audio/SC_SFX.SC_SFX 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/Audio/SM_Music.SM_Music 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/Audio/SM_SFX.SM_SFX 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Misc/t_bgr.t_bgr 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/flat_dark_themed_gui/fonts/MontserratExtraBoldItalic.MontserratExtraBoldItalic 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Panels/t_Line.t_Line 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Outline2_256x256.T_Ellipse_Outline2_256x256 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Generic_Icons/256x256/T_Undo_256x256.T_Undo_256x256 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsOutline/t_ButtonOutline.t_ButtonOutline 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/ButtonsRed/ButtonsNormal/t_ButtonNormal.t_ButtonNormal 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Icons/32x32px/t_ArrowDown32x32.t_ArrowDown32x32 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Panels/t_Panel.t_Panel 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/flat_dark_themed_gui/fonts/MontserratRegular.MontserratRegular 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Sliders/t_FillAndBgrScrollBarHorisontal.t_FillAndBgrScrollBarHorisontal 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeCommon/Buttons/Others/t_Handle.t_Handle 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Settings_C__pf3166771619::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TowerDefense.SettingsMenu 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeGreen/ButtonsColor/t_ButtonGreen.t_ButtonGreen 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeGreen/ButtonsColor/t_ButtonGreen_Highlighted.t_ButtonGreen_Highlighted 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeGreen/ButtonsColor/t_ButtonGreenPressed.t_ButtonGreenPressed 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/flat_dark_themed_gui/textures/TexturesThemeGreen/ButtonsColor/t_ButtonGreenLock.t_ButtonGreenLock 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TowerDefense.MainMenu 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/BP_MainMenu.BP_MainMenu_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBP_Settings_C__pf3166771619
{
	FRegisterHelper__UBP_Settings_C__pf3166771619()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/BP_Settings"), &UBP_Settings_C__pf3166771619::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBP_Settings_C__pf3166771619 Instance;
};
FRegisterHelper__UBP_Settings_C__pf3166771619 FRegisterHelper__UBP_Settings_C__pf3166771619::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
